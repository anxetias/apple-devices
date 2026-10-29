#!/usr/bin/env python3
# Разбор трассы strace (сеть/read/write/openat) прогона 3uTools:
#  1) AFC-пакеты (магия CFA6LPAA): опкод, направление, fd, размеры.
#     Заголовок = магия(8) + entire(8) + this(8) + packet_num(8) + opcode(8),
#     все u64 LE; после младшего байта каждого u64 идут \0 — разбор однозначен.
#  2) DNS-запросы (UDP sendto): домены заменой escape-последовательностей
#     на точки (байтовый разбор неоднозначен из-за кратчайших окталов strace).
#  3) Коннекты к usbmuxd по секундам.
# Использование: python3 analyze_trace.py trace.log
import re, sys, collections

path = sys.argv[1]

# u64 в escape-виде: младший байт + ровно 7 штук "\0".
# Младший байт: октал-escape (\2, \10, \020), буквенный escape (\n, \v, \r)
# или литеральный символ ('K', '5'); после него — только \0, поэтому разбор
# однозначен несмотря на кратчайшие окталы strace.
BYTE = r'(?:\\[0-7]{1,3}|\\[a-z]|[^\\])'
# NUL рендерится как "\0", но перед цифрой дополняется до "\000"
NUL7 = r'(?:\\0(?:00)?){7}'
U64 = '(' + BYTE + r')' + NUL7
HDR = re.compile('"CFA6LPAA' + U64 + U64 + U64 + U64)

def esc_byte_val(tok):
    # tok — escape-вид младшего байта: 'K' | '\\2' | '\\10' | '\\020' | '\\n'
    if not tok.startswith('\\'):
        return ord(tok[0])
    body = tok[1:]
    if body.isalpha():
        return {'n': 10, 'r': 13, 't': 9, 'v': 11, 'a': 7, 'b': 8, 'f': 12}[body]
    try:
        return int(body, 8) & 0xFF
    except ValueError:
        return int(body[0], 8) & 0xFF

line_re = re.compile(r'^(\d+) (\d\d:\d\d:\d\d\.\d+)\s+(\w+)\((\d+)<(.+?)>\s*(.*)$')

afc = []
dns = collections.Counter()
usbmux = collections.Counter()

with open(path, 'r', errors='replace') as f:
    for line in f:
        m = line_re.match(line.rstrip('\n'))
        if not m:
            continue
        pid, ts, call, fd, fdinfo, rest = m.groups()
        if call == 'connect' and 'usbmuxd' in line:
            usbmux[ts[:8]] += 1
            continue
        if call not in ('sendto', 'recvfrom'):
            continue
        # AFC: ищем заголовок прямо в escape-тексте
        hm = HDR.search(rest)
        if hm:
            g = hm.groups()
            e, th, pkt, op = (esc_byte_val(g[i]) for i in (0, 1, 2, 3))
            # размер payload: entire указан в байтах; минус 40 байт заголовка
            afc.append((ts, pid, call, fd, e, th, pkt, op, e - 40 if e >= 40 else -1))
            continue
        if call == 'sendto' and 'UDP' in fdinfo:
            # DNS: escape -> '.', затем доменоподобная последовательность
            i = rest.find('"')
            if i < 0:
                continue
            q = rest[i+1:]
            j = 0
            while j < len(q):
                if q[j] == '\\':
                    j += 2; continue
                if q[j] == '"':
                    q = q[:j]; break
                j += 1
            flat = re.sub(r'\\[0-7]{1,3}|\\[a-z]', '.', q)
            for dm in re.findall(r'[a-z][a-z0-9-]*(?:\.[a-z0-9-]+)*\.[a-z]{2,6}', flat):
                dns[dm] += 1

print('=== AFC-пакетов: %d' % len(afc))
opn = {0:'INVALID',1:'STATUS',2:'DATA',3:'READ_DIR',4:'READ_FILE',5:'WRITE_FILE',
       6:'WRITE_PART',7:'TRUNCATE',8:'REMOVE_PATH',9:'MAKE_DIR',10:'GET_FILE_INFO',
       11:'GET_DEVINFO',12:'SET_FILE_TIME',13:'FILE_OPEN',14:'OPEN_RES',
       15:'FILE_READ',16:'FILE_WRITE',20:'FILE_CLOSE',21:'RENAME_PATH'}
byop = collections.Counter((d, op) for (_, _, d, _, _, _, _, op, _) in afc)
for (d, op), n in sorted(byop.items()):
    print('  %-8s op=%-2d %-14s x%d' % (d, op, opn.get(op, '?'), n))
print('--- все AFC-пакеты:')
for t, pid, d, fd, e, th, p, op, pl in afc:
    print('  %s pid=%s %-8s fd=%-3s op=%-2d %-14s pkt=%-3d payload=%d' %
          (t, pid, d, fd, op, opn.get(op, '?'), p, pl))

print('=== DNS-запросы (домены):')
for name, n in dns.most_common():
    print('  %-40s x%d' % (name, n))

print('=== коннекты к usbmuxd по секундам:')
for sec in sorted(usbmux):
    print('  %s x%d' % (sec, usbmux[sec]))
