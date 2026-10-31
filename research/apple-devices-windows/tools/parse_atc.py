#!/usr/bin/env python3
"""Разбор сырых frida-дампов для apple-devices-windows.

Вход: файлы *.bin из frida_capture (формат записей [dir 1][len BE4][payload]).
Что делает:
  1) склеивает записи одного bin-файла в полноценный bytestream;
  2) ищет usbmuxd-кадры [u32 LE length][u32 ver=1][type][tag];
  3) ищет плисты: LE32-фрейминг [len][bplist00], xml-plists;
  4) печатает словарь «интересных» строк (Command/Grappa/cig/Sync_…).

Использование: python parse_atc.py <папка или файл> [ещё...]
"""
import re
import struct
import sys
from pathlib import Path

import plistlib

INTERESTING = re.compile(rb'(Command|Grappa|cig|Sync_|FinishedSyncing|AssetManifest'
                         rb'|ReadyForSync|RequestingSync|SyncFinished|SyncFailed'
                         rb'|Progress|Dataclass|HostInfo|LibraryID|Version)', re.I)


def records(b):
    """Распарсить формат записей [dir 1][len BE4][data]."""
    i = 0
    n = len(b)
    while i + 5 <= n:
        d = b[i:i + 1]
        length = struct.unpack_from('>I', b, i + 1)[0]
        if i + 5 + length > n:
            break
        yield d, b[i + 5:i + 5 + length]
        i += 5 + length


def scan_stream(name, stream):
    out = [f'--- {name}: {len(stream)} Б']
    n = len(stream)

    # usbmux-кадры
    facts = []
    i = 0
    while i + 16 <= n:
        length = struct.unpack_from('<I', stream, i)[0]
        ver = struct.unpack_from('<I', stream, i + 4)[0]
        mtype = struct.unpack_from('<I', stream, i + 8)[0]
        if 16 <= length <= 50_000_000 and ver == 1 and i + length <= n:
            facts.append((mtype, i, length))
            i += length
        else:
            i += 4
    if facts:
        numer = {}
        for mtype, _o, _L in facts:
            numer[mtype] = numer.get(mtype, 0) + 1
        out.append(f'  usbmux-кадров: {len(facts)}, типы: {numer}')

    # LE32-фрейминг [len][bplist00]
    parsed = 0
    for m in re.finditer(b'bplist00', stream):
        o = m.start()
        if o >= 4:
            length = struct.unpack_from('<I', stream, o - 4)[0]
            if length > 4 and o + length <= n:
                try:
                    d = plistlib.loads(stream[o:o + length])
                    parsed += 1
                    cmd = str(d.get('Command', '')) if isinstance(d, dict) else ''
                    out.append(f'  plist LE32 @{o - 4} len={length} cmd={cmd}')
                except Exception:
                    pass
    # xml-плисты
    for m in re.finditer(rb'<\?xml', stream):
        endp = stream.find(b'</plist>', m.start())
        if endp > 0:
            try:
                d = plistlib.loads(stream[m.start():endp + 8])
                cmd = str(d.get('Command', '')) if isinstance(d, dict) else ''
                out.append(f'  xml plist @{m.start()} cmd={cmd}')
            except Exception:
                pass

    counts = {}
    for m in re.finditer(INTERESTING, stream):
        counts[m.group(0)] = counts.get(m.group(0), 0) + 1
    if counts:
        out.append('  интересное: ' + ', '.join(
            f'{tok!r}x{c}' for tok, c in sorted(counts.items())))
    out.append(f'  bplist00-автономно: {len(re.findall(b"bplist00", stream))}, '
               f'LE32-плистов разобрано: {parsed}')
    return '\n'.join(out)


def main():
    paths = []
    for p in sys.argv[1:]:
        pp = Path(p)
        if pp.is_dir():
            paths.extend(sorted(pp.glob('*.bin')))
        elif pp.is_file():
            paths.append(pp)
    if not paths:
        print('нет входных *.bin')
        return 1
    for f in paths:
        data = f.read_bytes()
        streams = {}
        for d, chunk in records(data):
            key = d.decode('ascii', 'replace')
            streams[key] = streams.get(key, b'') + chunk
        print(f'=== {f}')
        for d, stream in sorted(streams.items()):
            print(scan_stream(f'dir={d}', stream))
    return 0


if __name__ == '__main__':
    sys.exit(main())
