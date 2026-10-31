#!/usr/bin/env python3
# Список модулей (exe/DLL) всех Apple-процессов: имя, база, размер, путь.
#python modules_of.py  → печать в stdout; сохрани под modules.log
import re
import time

import frida

PAT = re.compile(r'(?i)apple|itunes|mobile.?dev|amdevice')


def probe(pid, name):
    try:
        s = frida.attach(pid)
    except Exception as e:
        print(f'== PID {pid} {name}: attach FAIL {e}')
        return
    try:
        sc = s.create_script(
            'Process.enumerateModules().forEach(m => console.log('
            '"MOD,"+m.name+","+m.base+","+m.size+","+m.path));')
        r = {'n': 0}

        def on(msg, data=None):
            t = msg.get('type')
            if t == 'log':
                print('  ' + msg.get('payload', ''))
                r['n'] += 1
            elif t == 'error':
                print('  ERR', (msg.get('stack') or '')[:200])
        sc.on('message', on)
        sc.load()
        time.sleep(1.2)
        s.detach()
        print(f'== PID {pid} {name}: {r["n"]} модулей')
    except Exception as e:
        print(f'== PID {pid} {name}: FAIL {e}')
        try:
            s.detach()
        except Exception:
            pass


def main():
    for proc in frida.enumerate_processes():
        if PAT.search(proc.name or ''):
            print(f'== PID {proc.pid} {proc.name}')
            probe(proc.pid, proc.name)


if __name__ == '__main__':
    main()
