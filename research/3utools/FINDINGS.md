# Реверс 3uTools: протокол передачи музыки

Исследование того, как 3uTools передаёт музыку на устройство и правит
`MediaLibrary.sqlitedb`, для сравнения с нашей прямой записью базы.
Основной код Apple Devices в этой ветке не трогается.

## Окружение

- 3uTools **9.03.003** (deb `com.3u.3utools`, нативный Linux-билд, Qt5),
  установлен в `/opt/apps/com.3u.3utools` (пользователь ставил сам, deb в
  `~/Загрузки/`). Уже запускался 27.10 — артефакты в
  `~/Загрузки/3uToolsDownloads/` (`record.db`, `setting.cfg`, `cache/`).
- Инструменты: `strace`, `gdb` — есть. `ltrace` — нет (sudo из среды агента
  недоступен: песочница с `no new privileges`; пользователь доустановит при
  необходимости). `sqlite3` CLI нет, но есть `python3` с модулем `sqlite3`.
- `run.sh` 3uTools: работает с **системным usbmuxd**; умеет перезапускать
  его с root при подключении устройства (`usbmuxd --user usbmux`).

## Статические находки (strings/nm по бинарникам)

### Транспорт — тот же стек, что у нас

3uTools несёт собственные копии: `libimobiledevice.so.1`,
`libusbmuxd.so`, `libplist-2.0.so.3`, `libimobiledevice-glue.so`,
`libusb-1.0.so`. Протоколы — стандартные usbmuxd/lockdown/AFC.
Прочее в `lib/`: `libidevicerestore.so`, `libirecovery.so` (прошивки),
`libsqlcipher.so` (шифрованный sqlite), `libcurl`, `libffmpegCore`.

### Чтение медиатеки — прямые SQL к MediaLibrary.sqlitedb

В главном бинарнике зашиты SELECT-запросы к базе устройства:

```sql
SELECT A.item_pid, C.title, B.album, C.total_time_ms, C.year, C.file_size,
       C.location, A.base_location_id, C.media_kind, A.album_artist_pid,
       E.path, H.item_artist AS artist, AA.album_artist AS album_artist
FROM item A
LEFT JOIN album B        ON A.album_pid = B.album_pid
LEFT JOIN item_extra C   ON A.item_pid = C.item_pid
LEFT JOIN base_location E ON A.base_location_id = E.base_location_id
LEFT JOIN item_artist H  ON H.item_artist_pid = A.item_artist_pid
LEFT JOIN album_artist AA ON AA.album_artist_pid = A.album_artist_pid
WHERE C.media_kind = 1
```

- Схема: `item`, `item_extra`, `album`, `base_location`, `item_artist`,
  `album_artist` — та же база, которую правим мы.
- `media_kind = 1` — музыка; отдельные выборки `media_kind = 2 or 1024`
  и `media_kind = 8` (видео/ТВ-шоу).
- Ключевые поля: `item_pid`, `title`, `total_time_ms`, `file_size`,
  `location`, `base_location_id`, `path` (из `base_location`).
- Там же SELECT-ы к фото (`Photos.sqlite`, `ZGENERICASSET`), заметкам,
  записям звонков — всё читается тем же способом (скачивание баз).

### Пути и маркеры

- `/iTunes_Control/iTunes/MediaLibrary.sqlitedb` — целевая база.
- `/iTunes_Control/iTunes/3utools.acc` и `/Documents/3utools.acc` —
  файл-маркер 3uTools на устройстве (назначение выясняется).
- `/iTunes_Control` — корень медиа-раздела.

### Запись в MediaLibrary — в статике НЕ найдена

- INSERT/UPDATE в главном бинарнике — только к локальной `record.db`
  (таблицы `Download`, `Messages`, `Config`; история загрузок, пустая).
- INSERT-ов к `item`/`item_extra` нет → либо SQL генерируется динамически,
  либо база скачивается на диск, правится локально и заливается обратно
  (как делаем мы) — решит динамика (strace).
- `libitab.so` — ложный след: Go/cgo-модуль магазина 3uTools
  (`login`/`buyapp`/`get_region`/`aes_gcm_decrypt`), не медиатека.
- `libidm.so` — AES/cJSON-крипто для серверов 3uTools, не медиатека.
- Упоминания `AFC2`/`InstallAFC2`/`getUrlHowToAfc2` — jailbreak-сервис
  полного доступа к ФС; для музыки на стоковом iOS вряд ли используется.

## Открытые вопросы (закрываются динамикой)

1. Как пишется MediaLibrary.sqlitedb: «скачал → правлю локально → заливаю»
   (как у нас) или иначе?
2. Какие lockdown-сервисы запрашиваются при импорте музыки
   (`com.apple.afc`? `house_arrest`? `com.apple.mobile.???`)?
3. Что лежит в `3utools.acc` и зачем он нужен?
4. Раскладка файлов в `/iTunes_Control/Music` (бакеты `F*/…`?) и формат
   `location` в базе.

## План динамического этапа

1. Запустить 3uTools под `strace -f -e trace=connect,openat,read,write
   -s 8192` (лог в /tmp/opencode), наблюдать:
   - connect к `/var/run/usbmuxd` и первый write — там XML-plist с именем
     запрашиваемого lockdown-сервиса (читаемо в трассе);
   - openat/чтение-запись файлов в кэше 3uTools — поиск локальной копии
     MediaLibrary.sqlitedb;
   - сетевую активность (телеметрия — отдельно отметить).
2. Пользователь делает импорт одной песни через GUI 3uTools (устройство
   подключено), трасса пишется.
3. Разобрать трассу: сервисы, файлы, размеры записей; сравнить с нашей
   схемой записи (медиа-файлы в `/iTunes_Control/Music/F*/`, база —
   скачал/правил/залил, бэкап перед записью).
4. Сверить `3utools.acc` на устройстве (read-only AFC-зонд) до/после.

## Динамические находки (strace, импорт одной песни)

Трасса: `/tmp/opencode/3u_trace.log` — 30,6 МБ, 110 463 строки,
`strace -f -tt -T -s 4096 -e trace=network,read,write,openat` вокруг
`/opt/apps/com.3u.3utools/run.sh`. Окно 18:28:10–18:30:09; в 18:28:44
пользователь выбрал mp3 («Out of Control», Taiki Nulight & borne,
9 557 053 байт), в 18:29:30–31 шла заливка. Парсеры:
`/tmp/opencode/afc_parse.py` (AFC-пакеты из sendto/recvfrom),
`/tmp/opencode/sync_plist.py` (binary plist). Копия базы устройства:
`/tmp/opencode/3u_db/`, копия Sync-plist: `/tmp/opencode/sync_00000000.plist`.

### Главный вывод: MediaLibrary.sqlitedb на устройстве 3uTools НЕ пишет

За всю трассу — 12 FILE_OPEN к `MediaLibrary.sqlitedb`(+`-wal`/`-shm`)
в 4 цикла, **все RDONLY** (mode=1). Ни одной записи в базу на устройстве.
Вместо этого — декларативный сценарий «как Finder/iTunes»:

| время | действие |
|---|---|
| 18:28:39.92 | цикл 1: GET_FILE_INFO + скачать MediaLibrary.sqlitedb + `-shm` + `-wal` (RDONLY) |
| 18:28:40.06 | локальная копия открывается RW (рабочий кэш 3uTools) |
| 18:28:44.31 | пользователь выбрал mp3 в `~/Музыка` (диалог) |
| 18:29:00.28 | цикл 2: повторное скачивание базы |
| 18:29:26.40 | цикл 3: повторное скачивание + GET_DEVINFO |
| 18:29:28.48 | скачать ArtworkDB (RDONLY) |
| 18:29:30.80 | MAKE_DIR `/iTunes_Control/Sync[/Media]`; записать `Sync_00000000.plist` (1048 Б) и `.cig` (21 Б) |
| 18:29:31.28 | перезаписать ArtworkDB (616 Б, magic «mhfd») |
| 18:29:31.29 | GET_FILE_INFO `/Airlock/Media` (есть) → MAKE_DIR `/Airlock/Media/Artwork` |
| 18:29:31.29–.57 | mp3 → `/Airlock/Media/2412476716000499790` (3 чанка: 4 194 304 + 4 194 304 + 1 168 445) |
| 18:29:31.57 | обложка → `/Airlock/Media/Artwork/2412476716000499790` (672 873 Б) |
| 18:29:31.61 | MAKE_DIR `/iTunes_Control/Music/F25`; GET_FILE_INFO `F25/FNPR.mp3` (ещё не существует) |
| 18:29:31.96 | цикл 4: снова скачать базу (+wal+shm) |

Файл в целевую точку `/iTunes_Control/Music/F25/FNPR.mp3` кладёт **само
устройство**: у 3uTools нет ни одной записи по этому пути. Раскладку по
бакету, имя файла и обновление `item`/`item_extra`/`album`/
`base_location` выполняет iOS (mediasyncd) после обработки Sync-plist.

### Sync_00000000.plist — декларативные операции (распарсен полностью)

binary plist, 1048 байт: `revision` = 0, `timestamp`, `operations[]`:

1. `update_db_info`, pid = 860019141250340:
   `db_info.primary_container_pid` = 460217054914055021,
   audio/subtitle_language = 0. Оба значения совпадают со строкой
   `db_info` в базе устройства — 3uTools прочитал их при скачивании.
2. `insert_track`, pid = 2412476716000499790 (0x217AD6CA961C584E —
   **то же число, что имя файла в /Airlock/Media**):
   - `item`: title/artist/album/album_artist + `sort_*`-версии, genre
     «Dance», `total_time_ms` = 222040, `track_number` = 1,
     `is_song` = true, `artwork_cache_id` = 481, `date_created`;
   - `location`: `{kind: "MPEG Audio"}` — **имени файла в plist нет**;
   - `avformat_info`: audio_format = 301, bit_rate = 320, sample_rate = 0;
   - `item_stats`: все счётчики в нуль.

ПК передаёт только метаданные + файл в «зону сдачи» Airlock; всю работу
с базой делает устройство. 63-битный pid генерирует 3uTools.

### `.cig` — 21 байт: 0x01 + 20 байт хеша

`01 c4b34ca9ad00688a9ed2d12e5a083633b79e676c`. SHA1 от plist, пути
`Sync_00000000.plist` и их комбинаций **не совпадает** → вероятно,
keyed-HMAC или свой алгоритм (крипто-модуль `libidm.so`). Открытый
вопрос: если устройство проверяет этот хеш, воспроизвести Sync-сценарий
без знания алгоритма нельзя.

### AFC-диалект 3uTools: нестандартные opcodes

Гистограмма запросов по всей трассе: op9 MAKE_DIR ×4, op10
GET_FILE_INFO ×10, op11 GET_DEVINFO ×2, op13 FILE_OPEN ×18, op15 ×25,
op16 ×7, op20 ×18. Стандартные для libimobiledevice op4 READ_FILE /
op5 WRITE_FILE / op6 WRITE_PART **не встречаются ни разу**. Семантика
по телу пакетов и ответам:

| op | у 3uTools | стандартный AFC (libimobiledevice) |
|----|-----------|-------------------------------------|
| 15 | READ: тело = handle(8) + max_len(8); ответ — DATA с данными | FILE_CLOSE (тело = handle) |
| 16 | WRITE: тело = handle(8), `entire` = 48 + длина данных; данные — отдельным sendto; ответ STATUS | FILE_SET_SIZE |
| 20 | CLOSE: тело = handle(8) | FILE_LOCK |

Суммарный объём данных в op16 = **10 231 611 байт** — ровно сумма пяти
записанных файлов (mp3 9 557 053 + обложка 672 873 + ArtworkDB 616 +
plist 1048 + .cig 21). Чтение базы: op15 с max_len = 4 МБ в цикле до
пустого DATA. Вывод: собственный AFC-клиент с другой нумерацией команд
(их форк libimobiledevice или не-afcd сервис с совместимым протоколом).

### Сессии и порты: StartService спрятан в шифрованном lockdown

- Транспорт — **системный stock-usbmuxd** (distro-пакет, systemd-юнит
  usbmuxd.service отработал 18:28–18:30 и завершился после убийства
  strace). 410 коннектов к `/var/run/usbmuxd`.
- USBMUX-XML: `BundleID = com.apple.iTunes` (маскировка, 410 шт),
  `ClientVersionString = usbmuxd-???`.
- Канал «lockdown» 3uTools: `Connect(PortNumber=32498)` ×93 →
  StartSession (открытый XML) → **TLS-рукопожатие на том же сокете**
  (`16 03 01` ClientHello, сертификаты, `17 03 01` appdata) →
  шифрованный обмен → close_notify. Порт 32498 = 0x7EF2 =
  byteswap(62078 = 0xF27E) — похоже на перевёрнутый порядок байт в их
  libusbmuxd, но сессии успешно работают.
- Сервисные порты (44495, 14800, 19152, 32208, …) появляются сразу после
  шифрованной части → сам запрос StartService (и имя сервиса) в трассе
  **не виден в принципе**. Загадка «откуда порт» снята: он внутри TLS.
- Дальше обычная схема: Connect(порт) → AFC-магия `CFA6LPAA`.
- GET_DEVINFO ответил: Model=iPhone12,1, FSTotalBytes=116303540224,
  FSFreeBytes=76290510848, FSBlockSize=4096.

### Телеметрия (на передачу не влияет, но приватность)

- TLS-соединения к серверам 3uTools (163.171.150.15, 163.171.77.45, …),
  в том числе между чанками записи mp3.
- Серийник DX3DX8B3N73F передаётся открытым текстом в URL
  `app-pcres.3u.com` (InspectionReport); diagnostics/battery XML
  «upload Successful» отправляются автоматически при запуске.
- Реклама/новости/обновления: tools.3u.com, dl-image.3u.com, dl.3u.com.

### Локальный кэш базы

- `/tmp/media_tmp/M_CDF1FC7E5E792812FBE2B0D6A5FFA345.sqlitedb` — имя =
  «M_» + **MD5(UDID без дефисов)** — совпало с нашим UDID байт в байт.
- Скачивается 4 раза за сессию, каждый раз вместе с `-wal`/`-shm`
  (полный WAL-набор — как в нашем `medialibDownload`), открывается
  локально RW: рабочий кэш для SELECT-ов UI.
- В копии есть трек (item_pid=252, location=«FNPR.mp3», album_pid =
  67108934 = 2^26+70, item_artist_pid = 33554476 = 2^25+44 — домены pid
  как у устройства). Кем вставлена строка к моменту выгрузки №4
  (устройством за ~1 с или локальной правкой 3uTools) — по трассе
  однозначно не видно; `integrity` (57 байт) у item 252 заполнен, что
  намекает на device-side создание. Живая проверка: появился ли трек в
  «Музыке» на iPhone / в нашем скане категорий.
- GET_FILE_INFO `F25/FNPR.mp3` в 18:29:31.6 ещё давал «не найдено» —
  обработка Sync-plist устройством асинхронная.

### Ответы на вопросы статического этапа

1. Как пишется MediaLibrary? — **Никак**: только декларативный
   Sync-plist + файл в Airlock; базу обновляет устройство.
2. Сервисы при импорте? — Имена не видны: StartService выполняется
   внутри TLS-части lockdown-сессии (порт канала 32498).
3. `3utools.acc`? — В динамике виден только GET_FILE_INFO
   `/iTunes_Control/iTunes/i4tool2.acc` (не найден); содержимое не читалось.
4. Раскладка? — Бакеты `F00…F25` (`base_location_id` 3840…3865),
   `location` = «FNPR.mp3» (4 случайные заглавные + расширение).

### Сравнение с нашей схемой (прямая запись базы)

| | Apple Devices (мы) | 3uTools |
|---|---|---|
| запись MediaLibrary | прямая: скачал → поправил → залил | не пишет базу вообще |
| медиафайлы | `/iTunes_Control/Music/F*/` | `/Airlock/Media/<pid>` + декларация в Sync-plist |
| обновление метаданных | мы (sqlite на ПК) | mediasyncd на устройстве |
| риск рассинхрона базы | средний (пишем чужую базу) | ниже (устройство само) |
| зависимость от недокументированного | низкая (схема известна) | высокая (.cig, поведение mediasyncd) |

Выводы для Apple Devices:

1. Наша схема работает и полностью под нашим контролем. 3uTools
   показывает «правильный» путь Apple, но он опирается на
   недокументированные детали (.cig-хеш, генерация pid/имён), без
   которых воспроизвести нельзя.
2. Практическая польза для нас: (а) подтверждена обязательность
   `-wal`/`-shm` при скачивании — мы уже так делаем (`medialibDownload`,
   medialib.c:315); (б) при заливке мы удаляем `-wal`/`-shm` на
   устройстве перед записью — согласуется с поведением WAL; (в) мелкое
   улучшение на будущее: `medialibBackup` копирует только main-файл до
   открытия sqlite — при живом WAL бэкап может не включить последние
   коммиты (стоит копировать и `-wal` либо открывать базу до бэкапа).
3. Переход на Sync/Airlock-схему — отдельное решение на будущее,
   сейчас не требуется.

### Новые открытые вопросы

1. Алгоритм `.cig` (0x01 + 20 Б; не SHA1 от plist/пути) — критичен для
   воспроизведения Sync-схемы.
2. Кто заполнил item 252 к 4-му скачиванию — устройство или локальная
   правка 3uTools (живая проверка).
3. Генерация имени «FNPR» — не выводится из pid (base36/модули/хеш-префиксы
   не совпали).
4. Закономерность генерации 63-битного pid (0x217AD6CA961C584E).
5. Почему lockdown-канал работает на порту 32498 = byteswap(62078) —
   особенность их libusbmuxd или устройства; для нас неактуально
   (стандартный 62078 работает).
6. Назначение числа 2412476716000499790 как имени Airlock-файла —
   совпадает с pid трека; кто удаляет файл из Airlock после ингеста.
