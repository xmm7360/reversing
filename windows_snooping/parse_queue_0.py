#!/usr/bin/env python

import binascii
import struct

requests = {}

def parse_tags(data):
    out = []
    while len(data):
        length, tag, value = parse_next_tag(data)
        data = data[length:]
        result = {'tag': tag}
        if value is not None:
            result.update(value)
        out.append(result)
    return out

def parse_next_tag(data):
    tag = data[:4].decode('ascii')
    if tag == 'ACBH':
        seq, length, unk = struct.unpack('<LLL', data[4:16])
        assert len(data) >= length
        return length, tag, {'children': parse_tags(data[16:length])}
    elif tag == 'CMDH':
        length = struct.unpack('<L', data[4:8])[0]
        assert len(data) >= length
        payload = data[8:length]
        return length, tag, {'payload': payload}
    elif tag == 'ADBH':
        unq, seq, length, sublen = struct.unpack('<HHLL', data[4:16])

        payload = data[16:sublen]
        tail = data[sublen:]
        return length, tag, {'payload': binascii.hexlify(payload), 'children': parse_tags(tail)}

    elif tag == 'ADTH':
        length, unk, unk2, unk3 = struct.unpack('<HHLL', data[4:16])
        paks = []
        tail = data[16:length]
        while len(tail) >= 8:
            paks.append(['%x' % x for x in struct.unpack('<LL', tail[:8])])
            tail = tail[8:]

        return length, tag, {'unk': hex(unk), 'unk2': hex(unk2), 'unk3': hex(unk3), 'paks': paks}
    elif tag == 'QLTH':
        length = struct.unpack('<L', data[4:8])[0]
        return length, tag, {'payload': binascii.hexlify(data[8:length])}
    else:
        print("unknown tag '%s'" % tag)
        return

if __name__ == "__main__":

    lines = open('queue_0').readlines()
    for line in lines:
        direction = 'o' if line[1] == '0' else 'i'

        _, payload = line.strip().split(';')

        print(payload)
        data = binascii.unhexlify(payload.replace(' ', ''))

        out = parse_tags(data)
        print(direction, out)
