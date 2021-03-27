# Snooping on the Windows driver

The initial reverse engineering was carried out by snooping on the Windows driver.

Windows 10 was run under qemu, using PCI passthrough to allow Windows to talk to the modem.
A qemu patch (in this directory) crudely emits all of the traffic between Windows and the modem.

My qemu start script looked like:

```
#!/bin/sh

modprobe vfio-pci
echo '8086 7360' > /sys/bus/pci/drivers/vfio-pci/new_id

dmesg -n 7

exec qemu-system-x86_64 --enable-kvm -cpu host,hv_time,kvm=off,hv_vendor_id=1234567890ab,hv_vapic,hv_relaxed,hv_spinlocks=0x1fff \
  -nodefaults \
    -machine pc-q35-3.0,accel=kvm,kernel_irqchip=on \
  -device ioh3420,bus=pcie.0,multifunction=on,port=1,chassis=1,id=root.1 \
    -drive if=pflash,format=raw,readonly,file=/usr/share/edk2-ovmf/OVMF_CODE.fd \
    -drive if=pflash,format=raw,file=OVMF_VARS.fd \
    -device virtio-scsi-pci,id=scsi0 \
        -blockdev driver=raw,node-name=root,cache.direct=on,discard=unmap,file.driver=host_device,file.aio=native,file.filename=/dev/zvol/seg/enc/vm/windows \
        -device scsi-hd,bus=scsi0.0,drive=root \
    -drive file=Win10_1903.iso,if=ide,media=cdrom \
    -drive file=virtio-win-0.1.164.iso,if=ide,media=cdrom \
    -device virtio-tablet-pci -device virtio-keyboard-pci \
    -m 10G \
    -smp 4 \
    -monitor stdio \
    -rtc base=localtime \
    -global ICH9-LPC.disable_s3=1 \
    -global ICH9-LPC.disable_s4=1 \
    -spice disable-ticketing,port=9984 \
    -trace events=trace \
    $*
```

The logs are printed to stdout. A couple of scripts here can parse queue 0/network pipe traffic (ring 0/1) and queue 1/RPC channel (ring 2/3).
These can be separated from a logfile and parsed, eg.

```
grep -E '^r[01]' log_file | column -t -s ";" -o '  ;  ' > queue_0
grep -E '^r[23]' log_file | column -t -s ";" -o '  ;  ' > queue_1

./parse_queue_1.py queue_1
```

An `example_queue_1` file is provided containing an example log of Windows connecting via the modem.
