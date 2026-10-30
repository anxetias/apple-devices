#!/usr/bin/env python3
"""Генератор тестовой декларации Sync_00000000.plist для эксперимента с .cig.
Формат — по FINDINGS.md «Полный состав декларации» (3uTools, 1513 Б).
Использование: gen_decl.py [pid] [title] [cig: zero|old|none]
По умолчанию: pid=8664704158950401262 (файл уже лежит в /Airlock/Media),
title='CIG Test', cig=zero (01 + 20 нулевых байт).
"""
import datetime
import plistlib
import sys

PID_DEFAULT = 8664704158950401262  # файл 7 600 463 Б уже в /Airlock/Media
OLD_CIG = "01300d1da02e213ef27a21f553d57da9a9854247be"  # 21 Б из FINDINGS

pid = int(sys.argv[1]) if len(sys.argv) > 1 else PID_DEFAULT
title = sys.argv[2] if len(sys.argv) > 2 else "CIG Test"
cig_mode = sys.argv[3] if len(sys.argv) > 3 else "zero"

now = datetime.datetime.utcnow()
# artwork_cache_id строго уникальный: max по базе = 676 -> 677
decl = {
    "operations": [
        {
            "operation": "update_db_info",
            "pid": 860019141250340,
            "db_info": {
                "audio_language": 0,
                "subtitle_language": 0,
                "primary_container_pid": 460217054914055021,
            },
        },
        {
            "operation": "insert_track",
            "item": {
                "album": "CIG Test Album",
                "album_artist": "CIG Test",
                "album_pid": 0,
                "artist": "CIG Test",
                "artist_pid": 0,
                "artwork_cache_id": 677,
                "comment": "",
                "composer": "",
                "date_created": now,
                "description": "",
                "disc_count": 0,
                "disc_number": 0,
                "genre": "Test",
                "grouping": "",
                "is_song": True,
                "sort_album": "CIG Test Album",
                "sort_album_artist": "CIG Test",
                "sort_artist": "CIG Test",
                "sort_composer": "",
                "sort_name": title,
                "title": title,
                "total_time_ms": 201978,
                "track_count": 0,
                "track_number": 1,
                "year": 0,
            },
            "item_stats": {
                "has_been_played": False,
                "play_count_recent": 0,
                "play_count_user": 0,
                "skip_count_recent": 0,
                "skip_count_user": 0,
            },
            "location": {"kind": "MPEG Audio"},
            "pid": pid,
            "avformat_info": {
                "audio_format": 301,
                "bit_rate": 320,
                "sample_rate": 0,
            },
        },
    ],
    "revision": 0,
    "timestamp": now,
}

with open("/tmp/opencode/decl_test.plist", "wb") as f:
    plistlib.dump(decl, f, fmt=plistlib.FMT_BINARY)

if cig_mode == "zero":
    data = bytes([0x01]) + bytes(20)
elif cig_mode == "old":
    data = bytes.fromhex(OLD_CIG)
else:  # none — файла .cig не будет вовсе
    data = None

import os

if data:
    with open("/tmp/opencode/decl_test.cig", "wb") as f:
        f.write(data)
else:
    if os.path.exists("/tmp/opencode/decl_test.cig"):
        os.remove("/tmp/opencode/decl_test.cig")

size = os.path.getsize("/tmp/opencode/decl_test.plist")
print(f"декларация: {size} Б, pid={pid}, title={title!r}, cig={cig_mode}")
