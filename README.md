This repo contains reversed information overlaid on the public drivers and public firmware for Fibocom L850-GL.

# How do modem work

## PCI layer

The XMM7360 communicates via DMA ring buffers. It has one command ring, plus
sixteen transfer descriptor (TD) rings. The command ring is mainly used to
configure and deconfigure the TD rings.

The 16 TD rings form 8 queue pairs (QP). For example, QP 0 uses ring 0 for
host→device, and ring 1 for device→host.

The known queue pair functions are as follows:

0:  Mux (Raw IP packets)
1:  RPC (funky command protocol)
2:  AT trace? port; does not accept commands after init
3:  platform trace port (spams out debug packets)
4:  AT command port
7:  AT command port

The TD rings have configurable depths, and each TD can have an arbitrary (but
limited) data size.

I believe the PCI core supports IRQ vectoring, interrupt moderation, and maybe
flow control, but I don't know where or how to access these.

Live information can be had through the `at@ipc` AT command eg.

```
at@ipc:device()
# look at TD ring 6
at@ipc:pipe(6)
# look at TD ring 0, session 1
at@ipc:session(0,1)
```

## Modem state

The modem has a 32-bit status word which is exposed both via an MMIO BAR and
through the DMA control page. This is useful because it tells you if the modem
is:

- still booting (0xfeedb007)
- running OK (0x600df00d)
- crash dump ready (0xbadc0ded)

If you poke the modem wrong it ends up in 0xbadc0ded and won't respond until
it is reset. (Unless you can figure out how to access the crash dump.)

Other states I've never seen include:

- crashed (0x8badf00d)
- PSI (0xfeedbeef)
- EBL (0xfeedcafe)

## Trace pipe

The trace pipe blats out a vast amount of debug information.
This is configurable via `AT+XSYSTRACE`. Use `AT+XSYSTRACE=10` for a list of
sources. Use eg.

```
at+xsystrace=1,"digrfx2=-1,bb_swY=Oct"
```

to disable `digrfx2` and enable `bb_swY`.

The debug info comes in HDLC-framed packets (0x7e to start, 0x7d escape code).
One type is straight printed strings from the processor we care about, and
another is `printf`s which we have to format.

See `trace.py`

## AT pipes

These are easy: write characters, get characters. Nothing to see here.

## RPC pipe

This is a bit hairy.

The modem doesn't seem to expose MBIM on any of the pipes (that I could see
from a simple prodding, anyway).
Instead, the Windows driver translates MBIM commands into a different RPC
language.

Each submitted TD contains a length and transaction ID (incorporated multiple
times and in different formats, yay). It also has an RPC call ID and some
number of parameters.

Most of the data is encoded using something vaguely related to ASN.1 BER but
not quite. All of the arguments, and return values, seem to be fixed.

Many calls are synchronous: the transaction ID field is 0x11000100, and the
modem then immediately responds with a matching transaction ID.

Some calls are asynchronous: the transaction ID field is 0x110001xx where xx
!= 0, and the modem immediately responds to acknowledge the request; then the
actual data comes in later with the same transaction ID.

The modem also delivers unsolicited events, where the transaction ID field is
00000000.

These calls are dispatched via the `rpc_unpack_table` in the firmware.

## Network mux

This thing supports up to 8 "data channels", which can be used for raw IP.
They are muxed over a single queue pair.
This uses a tag-length-pointer format with 32-bit ASCII tags, where each tag
has a pointer to the start of the next tag within the TD buffer.

`ACBH:CMDH` tags are used to open a data channel. A corresponding command is
used from RPC to open the other end of the pipe, yielding a handle which can
be used in other RPC commands to set up raw IP.

`ADBH` tags are used for packet data, with `ADTH` conveying packet boundaries
and mux channel info.

Amusingly, there are a lot of ignored fields in the `ADBH:ADTH` setup, and the
Windows driver leaves them uninitialised, so it leaks a bunch of RAM contents
to the modem...

# Bringing it up

When booting over PCI (as opposed to USB), a whole lot of init doesn't happen
automatically, eg. most AT commands won't work because the SIM card isn't
initialised, and attempting to bring up an IP link will crash the modem.

The Windows driver normally calls:

```
UtaMsSmsInit
UtaMsCbsInit
UtaMsNetOpen
UtaMsCallCsInit
UtaMsCallPsInitialize
UtaMsSsInit
UtaMsSimOpenReq
```
