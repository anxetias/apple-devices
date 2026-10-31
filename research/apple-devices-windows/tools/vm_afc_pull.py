#!/usr/bin/env python3
# Снимок состояния устройства изнутри Windows VM (pymobiledevice3 + AFC).
# Использование внутри VM:
#   python vm_afc_pull.py before|after
# Записывает в C:\tmp\dev_<фаза>_vm\ : _list.txt со списком + выборочные файлы.
# Правила выборочного скачивания (ровно как в host_snapshot_afc.c):
#   /iTunes_Control/Music/** — только список (файлы пользователя);
#   *.sqlitedb{,-wal,-shm}, *.plist, .cig, .sidf, .sidv — до 64 МБ;
#   /Airlock/** — до 100 МБ; прочее — до 8 МБ.
# Если USB-канал в VM недоступен — верни девайс на host, снимок сделает агент.
import os
import sys
import time

PHASE = sys.argv[1] if len(sys.argv) > 1 else 'snapshot'
OUT = os.path.join(r'C:\tmp', f'dev_{PHASE}_vm')

ROOTS = ['/iTunes_Control', '/Airlock']
EXT_DB = ('.sqlitedb', '.sqlitedb-wal', '.sqlitedb-shm')
EXT_META = ('.plist', '.cig', '.sidf', '.sidv')
MAX_DB = 64 * (1024 ** 2)
MAX_AIRLOCK = 100 * (1024 ** 2)
MAX_SMALL = 8 * (1024 ** 2)


def want_pull(path, size):
    low = path.lower()
    if path.startswith('/iTunes_Control/Music'):
        return False
    if low.endswith(EXT_DB) or low.endswith(EXT_META):
        return size <= MAX_DB
    if path.startswith('/Airlock'):
        return size <= MAX_AIRLOCK
    return size <= MAX_SMALL


def connect_afc():
    from pymobiledevice3.lockdown import create_using_usbmux
    from pymobiledevice3.services.afc import AfcService
    try:
        ld = create_using_usbmux()
    except Exception as e:
        print('usbmux недоступен из VM:', e)
        print('→ верни девайс на host (снимет агент через AFC); hints:')
        print('   проверь pymobiledevice3 версию, USB-проброс, «Доверять» на девайсе')
        return None
    try:
        afc = AfcService(ld)
        return afc
    except Exception as e:
        print('AFC-сервис недоступен:', e)
        return None


def take_snapshot(afc, path, listf, depth=0, stat=None):
    if depth > 32:
        return
    try:
        ents = afc.listdir(path)
    except Exception as e:
        print('ERR list', path, repr(e))
        return
    for name in ents:
        if name in ('.', '..'):
            continue
        sub = path.rstrip('/') + '/' + name
        info = {}
        try:
            info = afc.get_file_info(sub) or {}
        except Exception:
            pass
        ifmt = str(info.get('st_ifmt', ''))
        size = int(info.get('st_size', -1))
        mtime = int(info.get('st_mtime', -1))
        isdir = ifmt != 'S_IFREG'
        local = os.path.join(OUT, sub.lstrip('/'))
        if isdir and ifmt != 'S_IFDIR':
            listf.write(f'? {size} mt={mtime} {sub} (ifmt={ifmt})\n')
            continue
        stat['listed'] += 1
        if isdir:
            stat['dirs'] += 1
            listf.write(f'D {size} mt={mtime} {sub}\n')
            take_snapshot(afc, sub, listf, depth + 1, stat)
            continue
        if want_pull(sub, size):
            os.makedirs(os.path.dirname(local), exist_ok=True)
            try:
                data = afc.get_file_contents(sub)
                with open(local, 'wb') as f:
                    f.write(data)
                listf.write(f'F {size} mt={mtime} {sub} +PULL={len(data)}\n')
                stat['pulled'] += 1
            except Exception as e:
                listf.write(f'F {size} mt={mtime} {sub} +PULL=FAIL {e!r}\n')
        else:
            listf.write(f'F {size} mt={mtime} {sub} (list-only)\n')


def main():
    os.makedirs(OUT, exist_ok=True)
    stat = {'listed': 0, 'dirs': 0, 'pulled': 0}
    afc = connect_afc()
    if afc is None:
        sys.exit(1)
    list_path = os.path.join(OUT, '_list.txt')
    t0 = time.time()
    with open(list_path, 'w', encoding='utf-8') as listf:
        for root in ROOTS:
            take_snapshot(afc, root, listf, 0, stat)
    with open(list_path, 'a', encoding='utf-8') as listf:
        listf.write(f'# итог: файлов={stat["listed"]-stat["dirs"]} '
                    f'каталогов={stat["dirs"]} скачано={stat["pulled"]} '
                    f'секунды={time.time()-t0:.1f}\n')
    print(f'готово → {OUT} (файлов скачано: {stat["pulled"]})')


if __name__ == '__main__':
    main()
