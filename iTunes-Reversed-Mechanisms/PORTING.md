# PORTING — как этот подпроект живёт в apple-devices (04.11)

Этот каталог — реверс-материалы **друга владельца** (хакинтош, 01–03.11.2026),
импортированные в ветку `music-mac-style` как **отдельный подпроект**. Имя ветки
легко сменить (`git branch -m`), путь оставлен как у исходника.

## Что здесь

- `docs/` + `docs/evidence/` — 26 MD: дорожная карта (00), транспорт usbmuxd (04),
  lockdown (05), plist (06), **музыкальный синк — 07** (механики A/B/C, ключ — ATC),
  бэкап (08), restore (09), **архитектура C-библиотеки — 10**, доказательства E01–E10.
- `analysis/` — 33 205 дизассемблерных `.c` (~67 МБ, AMPDevices/MobileDevice/
  DeviceLink/Helper/Sync/usbmuxd) + strings-дампы, `amd-errors.tsv`.
- `libirm/` — рабочее ядро друга на C11: bplist, xmlplist, mux (usbmuxd-клиент),
  lockdown (checkin + StartSession + session-TLS, OpenSSL), pairing (пейр-рекорд),
  tls (клиентский handshake + пиннинг, E04), devicelink (DeviceLink E06).
- `tools/irmctl.c` (`list`/`info`/`atc-probe`), `tests/` (6 юнитов), Makefile.

## Что НЕ импортировано (требование «блобы и сырые дампы — не в git»)

- `*.o`, `libirm.a`, бинари `irmctl`/`tests/test_*` — пересобираются Makefile'ом.
- `.DS_Store`, вложенный `.git` друга (его история осталась у него).
- Индексы генератора `analysis/*/decompile-index.json` (6 шт.) и
  `decompile-journal.jsonl` (2 шт., ~34 МБ) — сырьё; оригиналы остаются в
  `~/Загрузки/iTunes-Reversed-Mechanisms.zip` (нетронутая копия).
- `tests/bplist.sample.bin` — тоже в .gitignore у друга; регенерится самим
  `tests/test_bplist`.

## Сборка на Linux (проверено на этой машине)

    make              # libirm.a + irmctl (OpenSSL через pkg-config)
    make -j4 tests/test_bplist tests/test_xml tests/test_xmlw \
              tests/test_lockdown tests/test_mux tests/test_dl
    make smoke        # test_mux + irmctl list (нужен живой usbmuxd)

Портировочные правки (помечены «Портирование (Linux)» в коде):

1. `Makefile`: `CPPFLAGS += -D_GNU_SOURCE` — glibc прячет POSIX (gmtime_r и пр.) при `-std=c11`;
   `CPPFLAGS += -DIRM_OPENSSL=1` — реальный TLS-слой (без макроса tls.c собирается заглушками).
2. `Makefile`: OpenSSL из системы (`pkg-config openssl`, здесь 3.5.5) — CFLAGS+LIBS.
3. `libirm/src/lockdown.c`: BSD `getprogname()` → `program_invocation_short_name` (гвард `__linux__`).
4. `libirm/src/bplist.c`: строки (STRING-узлы) получают NUL-терминатор — без него
   `strcmp/printf` читали мусор за `n` (на mac куча почти всегда нулевая, на Linux нет).
   Это же починило юниты `test_lockdown` и `test_dl`.
5. `libirm/src/xmlplist.c`: NUL-терминатор в `take_text` (ключи dict) +
   unsigned-касты тернарника символьных ссылок — юнит `test_xmlw` зелёный.

Результат юнитов: **OK все 6** (bplist, xml, xmlw, lockdown, mux-LIVE, dl)
на 04.11 против Linux-usbmuxd. `lib irm atc-probe` живого телефона прошёл
полный цикл (session-TLS + кадры ATC, `docs/evidence/E11-atc-probe.md`).

## Связь с apple-devices

- Это **параллельный** путь синка «как на маке» (механика B/C из `docs/07`:
  full AppleMobileSync/ATC) — не замена текущего «3u-серверного» пути ветки
  `music-3u-only`, который уже импортирует mp3 сегодня.
- Прицел: `libirm` как статическая библиотека + будущий слой `music/` (лок синка,
  ATC-канал, запись в библиотеку устройства). Заготовка в `meson.build` —
  подключение через `subdir('iTunes-Reversed-Mechanisms')` из корня, когда
  дореагируем mux на Linux-usbmuxd.
- Телефон этим кодом сегодня НЕ трогался: только офлайн-юниты + (test_mux)
  обращение к локальному демону.
