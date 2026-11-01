#!/usr/bin/env python3
"""Вставить APIC (front cover, PNG) в mp3 (ID3v2.4).
APIC фрейм ставится ПЕРВЫМ в теге: TagLib парсит фреймы до паддинга —
фрейм после паддинга невидим («PICTURE: нет»). Если в теге уже есть
APIC — сначала удаляется (не плодим пары). Usage: apic_insert.py file.mp3 cover.png"""
import sys

def synch(n):
    return bytes([(n >> 21) & 0x7f, (n >> 14) & 0x7f, (n >> 7) & 0x7f, n & 0x7f])

def de_sync(b):
    return (b[0] << 21) | (b[1] << 14) | (b[2] << 7) | b[3]

def frames_of(tagbody):
    """Разобрать ID3v2.4 tag body на [(id, size, data)] до паддинга."""
    out, i = [], 0
    while i + 10 <= len(tagbody):
        fid = tagbody[i:i+4]
        if fid == b'\x00\x00\x00\x00':
            break
        sz = de_sync(tagbody[i+4:i+8])
        out.append((fid, sz, tagbody[i+10:i+10+sz]))
        i += 10 + sz
    return out, i

mp3, png = sys.argv[1], sys.argv[2]
apic_body = (b'\x00' + b'image/png' + b'\x00' + bytes([3]) + b'\x00' +
             open(png, 'rb').read())
apic_frame = b'APIC' + synch(len(apic_body)) + b'\x00\x00' + apic_body
data = open(mp3, 'rb').read()
hdr = data[:10]
assert hdr[:3] == b'ID3' and hdr[3] == 4, (mp3, hdr[:4])
old = de_sync(hdr[6:10])
tagbody, rest = data[10:10+old], data[10+old:]
frames, end = frames_of(tagbody)
frames = [f for f in frames if f[0] != b'APIC']
newtag = b''.join(b'APIC' if False else (f[0] + synch(f[1]) + b'\x00\x00' + f[2])
                  for f in frames)
newtag = apic_frame + newtag
pad = (10 - (len(newtag) % 10)) % 10
newhdr = b'ID3' + bytes([4, 0]) + b'\x00' + synch(len(newtag) + pad)
open(mp3, 'wb').write(newhdr + newtag + b'\x00' * pad + rest)
print(mp3, 'APIC справит, тег', len(newtag) + pad, 'Б, файл',
      len(newhdr) + len(newtag) + pad + len(rest), 'Б')
