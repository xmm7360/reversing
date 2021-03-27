#!/usr/bin/env python

import binascii
import struct
from rpc_unpack_table import rpc_unpack_table

dump_struct = False

def parse_data(data, root=False, direction=None):
    def take_number():
        assert data[0] == 2
        l = data[1]
        if dump_struct:
            print({1:'B',2:'H',4:'L'}[l], end=' ')
        v = data[2:2+l]
        for i in range(2+l):
            data.pop(0)
        val = int(binascii.hexlify(v), 16)
        if dump_struct:
            print(hex(val))
        return val

    n_n = 0

    while len(data):
        t = data[0]

        if t == 2:
            n_n += 1
            val = take_number()
            if direction=='o' and n_n == 2:
                yield '%x:%s' % (val, rpc_unpack_table.get(val, '???'))
            else:
                yield 'n:%x' % (val)

        elif t == 5:
            data.pop(0)
            param = data.pop(0)
            yield '%02x:%x' % (t, param)

        # elif t == 0x11:
        #     l = 4
        #     v = data[1:4]
        #     yield '%02x:%s' % (t, binascii.hexlify(v).decode('ascii'))
        #     data = data[4:]

        elif t in [0x55, 0x56, 0x57]:
            data.pop(0)
            valid = data.pop(0)
            if valid & 0x80:    # Variable length!
                value = 0
                for byte in range(valid & 0xf): # lol
                    value |= data.pop(0) << (byte*8)
                valid = value
            if t == 0x56:
                valid <<= 1
            elif t == 0x57:
                valid <<= 2
            if dump_struct:
                print("cnt:", end='')
            count = take_number()   # often equals valid + padding, but sometimes not
            if dump_struct:
                print("pad:", end='')
            padding = take_number()
            if count:
                assert count == (valid + padding)
                field_size = count
            else:
                field_size = valid
            if dump_struct:
                print('S%s%d' % ({0x55: 'B', 0x56: 'H', 0x57: 'L'}[t], field_size), end='')
            payload = data[:valid]
            data = data[valid + padding:]
            if dump_struct:
                if payload == b'\0'*len(payload):
                    print(" b'\\0'*%d" % len(payload))
                else:
                    print (" %s" % binascii.hexlify(payload))
            yield '%02x:%x:%x:%s' % (t, valid, padding, binascii.hexlify(payload).decode('ascii'))

        elif t == 0x7f: # application specific, explicitly encoded tag. this should handle variable length tags
            data.pop(0)
            tag = data.pop(0)
            dlen = data.pop(0)
            child = data[:dlen]
            data = data[dlen:]
            children = list(parse_data(child))
            yield '7f:%x(' % tag + ', '.join(children) + ')'

        else:
            print("Unknown field: %s" % binascii.hexlify(data))
            return

import sys
lines = open(sys.argv[1]).readlines()
for line in lines:
    if 'sre:' in line or 'region_write' in line or 'region_read' in line:
        print(line.strip())

    if not(line.startswith('r2') or line.startswith('r3')):
        continue

    direction = 'o' if line[1] == '2' else 'i'

    _, payload = line.strip().split(';')

    if payload.strip() == '(not ready)':
        continue

    data = binascii.unhexlify(payload.replace(' ', ''))

    length, = struct.unpack('<L', data[:4])
    if length > len(data[4:]):   # don't have all bytes
        continue

    data = bytearray(data[4:4+length])

    # there is always a fixed field here so...
    fixed = data[12:16]
    data = data[:12] + data[16:]

    children = list(parse_data(data, root=True, direction=direction))
    print(direction + ' ' + binascii.hexlify(fixed).decode('ascii') + ' ', end='')
    print(' '.join(children))
