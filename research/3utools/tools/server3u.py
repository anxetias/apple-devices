#!/usr/bin/env python3
"""Минимальный клиент сервера 3u (a2-s.3u.com) для glue-импорта.

prep   : step2 → /tmp/opencode/host_grappa.bin (84 Б) + /tmp/opencode/K.txt
finish : ждёт /tmp/opencode/device_grappa.bin (A из ReadyForSync),
         читает decl_test.plist (B), делает cig-req → decl_test.cig
         + маркер cig_ready для atc_dialog2.

Протокол (подтверждён хуком get_auth_server_data + curl_easy_setopt):
  frame = [u64 LE 0x35467891 | [4]=код | [5]=0x64 | [6..7]=crc16-XMODEM(area) LE]
        + [u32 area_len LE @8] + area
  step2 req:  area = [u32 24][UDID 24 Б ASCII], код 0xd2
  step2 resp: [8]=92 [12]=K(u32) [16]=84 [20..103]=hostGrappa
  cig req:    area = [u32 K][u32 len][A][u32 len][B], код 0xd0
  cig resp:   [8]=25 [12]=21 [16..36]=cig (21 Б)
  POST https://a2-s.3u.com?pc_vs=9.03.003, raw-тело, UA Chrome/126,
  заголовок "Expect:" (тов. curl 100-continue), куки asi — не критичны.
"""
import os
import struct
import sys
import time
import urllib.request

URL = "https://a2-s.3u.com?pc_vs=9.03.003"
UA = ("Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 "
      "(KHTML, like Gecko) Chrome/126.0.0.0 Safari/537.36")
UDID = b"00008030001C3128119A402E"
DIR = "/tmp/opencode"


def crc16_xmodem(data: bytes) -> int:
    """CRC-16/XMODEM: poly 0x1021, init 0, no-refin/out (проверено на ответах)."""
    crc = 0
    for x in data:
        crc ^= x << 8
        for _ in range(8):
            crc = ((crc << 1) ^ 0x1021) & 0xFFFF if crc & 0x8000 else (crc << 1) & 0xFFFF
    return crc


def frame(code: int, area: bytes) -> bytes:
    """Сборка фрейма. Хвостовой u32 и record по сети НЕ передаётся."""
    f = bytearray(b"\x91\x78\x46\x35" + bytes([code, 0x64]) +
                  struct.pack(">H", crc16_xmodem(area)) +  # LE u16
                  struct.pack("<I", len(area)) + area)
    # попроще: [6..7] — LE u16 crc
    struct.pack_into("<H", f, 6, crc16_xmodem(area))
    return bytes(f)


def post(body: bytes):
    req = urllib.request.Request(URL, data=body, method="POST",
                                 headers={"User-Agent": UA})
    try:
        resp = urllib.request.urlopen(req, timeout=30)
        return resp.status, resp.read()
    except urllib.error.HTTPError as e:
        return e.code, e.read()
    except Exception as e:  # noqa: BLE001
        return -1, str(e).encode()


def step2():
    """Возвращает (K, hostGrappa) или None."""
    body = frame(0xD2, struct.pack("<I", len(UDID)) + UDID)
    st, resp = post(body)
    ok = (st == 200 and resp[:4] == b"\x91\x78\x46\x35" and resp[4] == 0xCB)
    if not ok:
        print(f"step2: отказ http={st} body={resp[:16].hex()}")
        return None
    k = struct.unpack_from("<I", resp, 12)[0]
    hg = resp[20:20 + struct.unpack_from("<I", resp, 16)[0]]
    print(f"step2: K={k:#010x} hostGrappa={len(hg)} Б "
          f"({hg.hex()[:32]}…)")
    return k, hg


def cig_req(k: int, a: bytes, b: bytes):
    """Возвращает 21 Б cig или None (печатает код ошибки [5])."""
    area = (struct.pack("<I", k) + struct.pack("<I", len(a)) + a +
            struct.pack("<I", len(b)) + b)
    body = frame(0xD0, area)
    st, resp = post(body)
    if st == 200 and resp[:4] == b"\x91\x78\x46\x35" and resp[4] == 0xD1:
        n = struct.unpack_from("<I", resp, 12)[0]
        cig = resp[16:16 + n]
        print(f"cig: получен {n} Б: {cig.hex()}")
        return cig
    print(f"cig: ОТКАЗ http={st} err@5={resp[5] if len(resp) > 5 else '?'} "
          f"{resp[:12].hex()}")
    return None


def mode_prep():
    out = step2()
    if not out:
        sys.exit(1)
    k, hg = out
    with open(f"{DIR}/host_grappa.bin", "wb") as f:
        f.write(hg)
    with open(f"{DIR}/K.txt", "w") as f:
        f.write(str(k))
    print(f"prep: host_grappa.bin и K.txt записаны")


def mode_finish():
    # ждём A из ReadyForSync atc-сессии
    a_path = f"{DIR}/device_grappa.bin"
    for i in range(600):
        if os.path.exists(a_path) and os.path.getsize(a_path) == 83:
            break
        time.sleep(0.5)
    else:
        print("finish: device_grappa.bin не дождались")
        sys.exit(1)
    with open(a_path, "rb") as f:
        a = f.read()
    with open(f"{DIR}/K.txt") as f:
        k = int(f.read().strip())
    with open(f"{DIR}/decl_test.plist", "rb") as f:
        b = f.read()
    print(f"finish: K={k:#010x} A={len(a)} Б B={len(b)} Б")
    # свежая магия drop marker/completion
    try:
        os.remove(f"{DIR}/cig_ready")
    except FileNotFoundError:
        pass
    cig = cig_req(k, a, b)
    if not cig:
        sys.exit(1)
    with open(f"{DIR}/decl_test.cig", "wb") as f:
        f.write(cig)
    with open(f"{DIR}/cig_ready", "w") as f:
        f.write("ok")
    print("finish: decl_test.cig записан, маркер cig_ready поставлен")


if __name__ == "__main__":
    m = sys.argv[1] if len(sys.argv) > 1 else ""
    if m == "prep":
        mode_prep()
    elif m == "finish":
        mode_finish()
    else:
        print("использование: server3u.py prep|finish")
        sys.exit(2)
