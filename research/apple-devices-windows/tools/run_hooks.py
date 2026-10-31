#!/usr/bin/env python3
# Драйвер Frida: attach ко всем Apple-процессам в VM и сбор сетевого трафика.
# Каналы: ws2_32 (connect/send/recv/WSA*/DNS) + скан SSL*-экспортов (hooks_core.js),
# опционально NtWriteFile/NtReadFile (hooks_ntpipe.js, при NTPipe=1).
#
# Запуск (лучше из админ-консоли, чтобы попасть в системные процессы):
#   $env:FRIDA_DIR = "C:\tmp\frida_capture"
#   $env:NTPipe    = "0"   # 1 — включить фазу 2 (named pipes/IO), большой объём
#   python run_hooks.py
# Останов: Ctrl+C. Артефакты:
#   *.jsonl — события с временем/peer/размером;
#   *.bin   — полныеTCP-тела в формате записей [dir 1][len BE4][payload].
import frida as _frida
import json
import os
import re
import time

PAT = re.compile(r'(?i)apple|itunes|mobile.?dev|amdevice')
OUT = os.environ.get('FRIDA_DIR', r'C:\tmp\frida_capture')
TOOLS = os.path.dirname(os.path.abspath(__file__))


def san(s):
    return re.sub(r'[^A-Za-z0-9_.-]+', '_', str(s))


def log(*a):
    print(f'[{time.strftime("%H:%M:%S")}]', *a, flush=True)


os.makedirs(OUT, exist_ok=True)
with open(os.path.join(TOOLS, 'hooks_core.js'), encoding='utf-8') as f:
    CORE = f.read()
NTPIPE = None
if os.environ.get('NTPipe') == '1':
    with open(os.path.join(TOOLS, 'hooks_ntpipe.js'), encoding='utf-8') as f:
        NTPIPE = f.read()

sessions = {}


class Sink:
    """Пишет события в jsonl и полные тела в бинарные файлы-потоки."""

    def __init__(self, proc_name, pid):
        self.base = os.path.join(OUT, f'{san(proc_name)}_{pid}')
        self.bin = {}
        self.count = 0

    def binpath(self, p):
        peer = san(p.get('peer') or 'none')
        d = san(p.get('dir') or 'u')
        return f'{self.base}_{d}_{peer}.bin'

    def on_msg(self, msg, data):
        p = (msg.get('payload') or {}) if msg.get('type') == 'send' else {}
        self.count += 1
        line = {'time': time.strftime('%H:%M:%S'), 'payload': p,
                'bytes': None if data is None else len(data)}
        with open(self.base + '.jsonl', 'a', encoding='utf-8') as f:
            f.write(json.dumps(line, ensure_ascii=False) + '\n')
        if data:
            key = self.binpath(p)
            f = self.bin.get(key)
            if f is None:
                f = self.bin[key] = open(key, 'ab')
            d = (p.get('dir') or 'u').encode('ascii')[:1] or b'u'
            f.write(d + len(data).to_bytes(4, 'big'))
            f.write(data)
            f.flush()


def attach(proc):
    try:
        s = _frida.attach(proc.pid)
    except Exception as e:
        log('attach ушел wrong', proc.name, proc.pid, ':', e)
        return
    sink = Sink(proc.name, proc.pid)

    def on(msg, data, sink=sink):
        if msg.get('type') == 'send':
            sink.on_msg(msg, data)
        elif msg.get('type') == 'error':
            log('script error', proc.name, (msg.get('stack') or '')[:300])

    try:
        sc = s.create_script(CORE)
        sc.on('message', on)
        sc.load()
        if NTPIPE:
            sc2 = s.create_script(NTPIPE)
            sc2.on('message', on)
            sc2.load()
    except Exception as e:
        log('script load ушел wrong', proc.name, proc.pid, ':', e)
        try:
            s.detach()
        except Exception:
            pass
        return
    sessions[proc.pid] = (s, sc, sink)
    log('attached', proc.name, proc.pid, '→', sink.base + '.*')


def main():
    log('артефакты →', OUT)
    log('паттерн процессов:', PAT.pattern)
    while True:
        try:
            for proc in _frida.enumerate_processes():
                if proc.pid in sessions:
                    continue
                if PAT.search(proc.name or ''):
                    attach(proc)
        except KeyboardInterrupt:
            break
        except Exception as e:
            log('enumerate ушел wrong:', e)
        try:
            time.sleep(8)
        except KeyboardInterrupt:
            break
    log('останов, detach…')
    for entry in list(sessions.values()):
        try:
            entry[0].detach()
        except Exception:
            pass


if __name__ == '__main__':
    main()
