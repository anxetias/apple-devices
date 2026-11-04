# E14 — AFC, идентичность/якерь и ПУСТОЙ Delta-синк (шаг 9e)

Дата: 2026-11-04. Устройство: iPhone12,1 iOS 27.2, UDID `00008030-001C3128119A402E`,
USB (системный usbmuxd). Инструмент: `tools/irmctl` (шаг 9d+): `afc-ls`,
`afc-stat`, `music-id`, `atc-delta`; клиентский слой AFC —
`libirm/src/afc.c` + `libirm/include/libirm/afc.h` (чистый C11/POSIX,
`-Wall -Wextra` без предупреждений; юниты `make test` — 5/5 OK).

Формат серии прежний: факт → как доказан → след.

## 1. AFC wire-факты (рамка и разговорные операции)

Источник жёсткой фактуры — рабочая реализация `idevice 0.1.68` (crates.io,
Jackson Coxson; это тот dependency, на котором end-to-end работает
rustunes), плюс live-прогоны этого шага на настоящем iPhone12,1/iOS 27.2.

**Пакет.** `header 40 Б + header_payload + payload`;
header = `[LE u64 magic][LE u64 entire_len][LE u64 header_payload_len]
[LE u64 packet_num][LE u64 operation]`;
magic = ASCII "CFA6LPAA" = u64 LE `0x4141504c36414643`;
entire_len = 40 + len(header_payload) + len(payload);
header_payload_len = 40 + len(header_payload);
packet_num — счётчик отправленных пакетов, инкремент на КАЖДЫЙ
отправленный (начала с 0).

**Обмен.** Модель «запрос → ОДИН ответ-пакт»: либо `Status` (op=0x0001)
с кодом LE u64 в header_payload (0 = успех, иначе AFC-код ошибки 1..36,
таблица совпадает с `idevice errors.rs`), либо `Data` (op=0x0002) —
данные в payload (ответы ReadDir/GetFileInfo/GetDevInfo/Read).

**Opcodes (живой обмен это подтверждает на iOS 27.2):**
ReadDir=0x0003, ReadFile=0x0004, WriteFile=0x0005, WritePart=0x0006,
Truncate=0x0007, RemovePath=0x0008, MakeDir=0x0009, GetFileInfo=0x000a,
GetDevInfo=0x000b, WriteFileAtom=0x000c, FileOpen=0x000d,
FileOpenRes=0x000e, Read=0x000f, Write=0x0010, FileSeek=0x0011,
FileTell=0x0012, FileTellRes=0x0013, FileClose=0x0014, FileSetSize=0x0015,
GetConInfo=0x0016, SetConOptions=0x0017, RenamePath=0x0018.

**Режимы FileOpen (LE u64 перед путём).** RdOnly=1, Rw=2, WrOnly=3
(O_WRONLY|O_CREAT|O_TRUNC), Wr=4, Append=5, RdAppend=6.

**Live-факт этой серии (iPhone12,1/iOS 27.2):** ответ на `FileOpen`
приходит с `op=0` (НЕ 0x0e!) и fd-LE u64 в `header_payload[0..8]`
(отладка `IRM_AFC_DEBUG`: `afc: reply op=0 code=0 hn=8 pn=8 01...` —
первый байт содержимого = 01 = fd 1). Строгое сравнение с op ==
FileOpenRes даёт ложно-отрицательный результат — принимаем fd при
`hn >= 8` и отсутствии Status-ошибки. idevice 0.1.68 тоже НЕ проверяет
op open-ответа (mod.rs `open()`).

**kv-пары — ЧЕРЕДОВАНИЕ, а не «key=value».** GetFileInfo/GetDevInfo
отдают данные как последовательность NUL-разделённых элементов:
`ключ\0значение\0ключ\0значение...` (idevice `parse_kv_payload` =
`as_chunks::<2>`). Первичная гипотеза «одна строка = key=value» —
неверна: она даёт ноль пар (live-прогон `afc-stat /Photos`).

**В dir_list телефон отдаёт и «.», и «..».** Пустая директория = только
эти два имени (2 записи, файлов 0). Live-факт повсюду, включая
staging `/iTunes_Control/Sync/Media`.

**Read до EOF:** FileOpen(RdOnly) → Read(fd, n) повторно; пустой payload
ответа = EOF. Read-запрос по 1 МиБ (idevice inner_file.rs: MAX_TRANSFER
= 1 МиБ, как в libimobiledevice).

**Write-чанки — не более 1 МиБ** (fd в header_payload, данные в payload;
следующий chunk → следующий Write с тем же fd).

**RenamePath:** header_payload = `from\0to\0` (два NUL-завершения).

## 2. AFC-канал поверх lockdown

- `StartService("com.apple.afc")` → порт; **EnableServiceSSL=false** —
  канал «сырой» на USB (live: `[com.apple.afc] port=54186 ssl=0`,
  `канал: сырой`). TLS-обёртки НЕ нужно (в отличие от com.apple.atc —
  там только TLS).
- **Пути обязаны быть АБСОЛЮТНЫМИ** (с ведущим `/`). Относительный
  `iTunes_Control/...` даёт Status-ошибку FileOpen — live-факт
  (первый прогон music-id не удался). С абсолютным путём — стабильно.
- `st_ifmt` телефон отдаёт как «S_IFDIR» / «S_IFREG» (а не
  «NSFileTypeDirectory»/«NSFileTypeRegular») — признак каталога надо
  ловить по обоим шаблонам (afc-stat /Photos: `st_ifmt = S_IFDIR`).
- Корень AFC: Airlock, Downloads, Books, Photos, Deferred, Music,
  EnhancedAudioSharedKeys, Recordings, Espresso, DCIM, iTunes_Control,
  MediaAnalysis, PhotoData, AirFair (+ служебные «.»/«..»).

След: `afc-ls-smoke-2026-11-04c.log`, `afc-stat-photos-2026-11-04c.log`,
`afc-stat-prefs-2026-11-04c.log`.

## 3. Идентичность (frpd) и якерь Media

### 3.1 frpd — `iTunesPrefs`

Путь на телефоне: **`/iTunes_Control/iTunes/iTunesPrefs`**, размер
ровно 1232 Б (фиксированный профиль «frpd» — Windows-AMP-паспорт
библиотеки, см. docs/00 и docs/04). Прочитан по AFC
(FileOpen(RdOnly) + Read-чанки), повтор-чтение байт-в-байт совпало
(флейка отсутствует).

Структура raw (LE), версия 1.25:
- `raw[4..6) u16 = 1` (major), `raw[6..8) u16 = 25` (minor) — v1.25;
- `raw[8] = 1` — configured flag;
- `catalog_id = LE64 @ raw[12..20)`, `user_id = LE64 @ raw[20..28)`.
  (фактура rustunes identity.rs: Windows-AMP пишет эти u64;
  rustunes требует их НЕнулевые).

**Live-факт этой серии:** на iPhone12,1/iOS 27.2 с девственной
медиатекой (без Windows-AMP паспорта)
`catalog_id = 0`, `user_id = 0` — идентичность НЕЗАПОЛНЕНА. Деривация
LibraryID = catalog XOR user (hex-16) даёт все нули — она здесь НЕ
авторитетна; рабочий LibraryID задаётся env (`IRMA_ATC_LIBID`, как в
E13: 16-hex обязательных). Версия 1.25 + configured=1 — совпадает с
фактурой rustunes (у них телефон шёл с Windows-AMP паспортом, у нас
без него — литералы не записаны телефонной стороной).

### 3.2 База каталогов / якерь Media

Путь на телефоне: **`/iTunes_Control/iTunes/MediaLibrary.sqlitedb`**
(WAL-mode sqlite), `+MediaLibrary.sqlitedb-wal` копируется парой,
`-shm` НЕ копируется (docs/04 §2.2). Локальные копии —
`/tmp/opencode/<udid>-music/`; повтор-чтение байт-в-байт совпало по
обоим файлам; читаем ЛОКАЛЬНУЮ копию (RW-open — WAL-recovery) через
vendored `vendor/sqlite/sqlite3.c` (собран с `-DSQLITE_THREADSAFE=0
-DSQLITE_OMIT_LOAD_EXTENSION=1 -w`). `PRAGMA integrity_check` = **ok**.

Запрос `_MLDatabaseProperties` (упорядоченный по ключу) вернул полный
список свойств. Живые, системно важные:

```
MLSyncClientSyncAnchor = 1
MLSyncClientLastSyncedRevision = 6814 → затем 8491 (фон телефона)
MLStorefrontID = 143565-16,29
OrderingLanguage = ru-BY
```

**KEY FACT:** `MLSyncClientSyncAnchor = 1` — совпадает с якрем
Media:"1" в ReadyForSync (E13). База-копия и wire-телематика
описывают ОДИН якерь; сверка возможна с обеих сторон.

«Живость» базы подтверждается отдельными прогонками:
`MLSyncClientLastSyncedRevision` растёт фоновой жизнью телефона
(6814 → 8491 между прогонками), «MLSortMapUnicodeVersion» — блоб.
НО: якерь Media при этом НЕ меняется. Спокойный факт — якерь
увеличивается ТОЛЬКО мутационной ATC-сессией, а не фоном.

След: `music-id-run1-2026-11-04c.log`, `music-id-verify-2026-11-04c.log`.

## 4. ПУСТОЙ Delta-синк (atc-delta — первый мутационный прогон)

### 4.1 Замысел

Пустой Delta по фактуре rustunes (CONFIRMED, docs/02 §8.3 «staging у
Apple отсутствует» + §14.5 empty-delta CONFIRMED): Apple-хост всегда
ведёт сессию RequestingSync БЕЗ файлов staging → посылает
FinishedSyncingMetadata без инкрементирования якеря. Поэтому телефон
«файлы для стейджа не ждёт»: у Apple staging вообще не используется
(директория обязана быть пустой).

Для нас этот прогон безопасен: НИКАКОГО пользовательского контента не
трогается, но проходит ВЕСЬ wire-путь (Ping → handshake со SyncAllowed
и ReadyForSync → RequestingSync → FSFM → терминал). Выбор «мы не
отвечаем на AssetManifest | наблюдаем и СТОП» остаётся за клиентом
(observe-only победил).

### 4.2 Кадро-трасса run1 (реальная)

```
       [[ Ping S1 → телефон отвечает кадрами ]]
       кадр 1: Pong (Session-копия нашего 1)
       кадр 2: Capabilities
       кадр 3: InstalledAssets
       кадр 4: AssetMetrics
       кадр 5: SyncAllowed                     ← до RequestingSync
RequestingSync (Session=2, якерь "1")
       кадр 1: SyncAllowed (повтор)
       кадр 2: InstalledAssets
       кадр 3: ReadyForSync(273 B)             ← DataclassAnchors.Media "1"
                                               ← DeviceInfo.Grappa 83 B
 anchor: sent=1 ready=1 («1» vs «1»)           ← сверка пройдена
FinishedSyncingMetadata (Session=2, пустой Delta)
       кадр 1: AssetManifest(229 B)            ← НЕ SyncFinished!
```

AssetManifest от телефона:

```
Params.AssetManifest.Media[0]:
  AssetID = 7773567125019000
  AssetType = Music
  Variant.AssetParts = 4
  IsDownload = true
```

**Интерпретация (важная):** при ПУСТОЙ медиатеке с телефона приходит
AssetManifest: телефон ПРИНИМАЕТ дельту и просит ЗАГРУЗИТЬ ОДИН
own-side download-asset (телефонная собственность: загруженный
Apple Music трек/asset телефон помнит; «IsDownload» маркирует запрос
на хост-загрузку В телефон). rustunes `EmptyDeltaSession` допускает
оба варианта: EmptyDeltaResponseKind::SyncFinished ИЛИ AssetManifest
(session.rs 336–394: оба считаются пусто-дельта-ответом и НЕ фейлом;
наблюдение допустимо).

**Наш ответ в прогоне:** ОТСУТСТВИЕ (observe-only): не отсылаем ни
FileProgress, ни другой ответ; close канала. Телефон отменил сессию.
Проверка после: `/iTunes_Control/Sync/Media` — по-прежнему пуст
(файлов 0), `MLSyncClientSyncAnchor = 1` — якерь НЕ вырос. wire-путь
пройден ЦЕЛИКОМ от Ping до FSFM; мутации НЕ произведено (как и
планировалось).

### 4.3 Реализация: логика `atc-delta`

1. Проверка staging (AFC): dir_list `/iTunes_Control/Sync/Media`;
   отсутствует = OK; присутствует: файлов (без «.»/«..») > 0 → ABORT
   (Apple-инвариант §8.2).
2. ATC (TLS, lbD-комбо): Ping S1 → кадры → SyncAllowed.
3. RequestingSync S2 (профиль по E13, включая Grappa 84 Б и host
   LIBID из env), ReadyForSync; сверка якеря численно — при
   расхождении ABORT до FSFM.
4. FSFM S2 `DataclassAnchors{Media:"A"(якерь НЕ растёт),
   VoiceMemo:"1"}` + `SyncTypes{Media:1,Book:0,Keybag:1}` —
   команда «FinishedSyncingMetadata».
5. Чтение терминала (до 64 кадров, таймауты 15 с, телефоны Pong
   отвечаем на их Ping): Progress/AssetMetrics/InstalledAssets/
   SyncAllowed = телеметрия (печатается, пропускается);
   SyncFinished = успех (может прийти с Params); SyncFailed = печать
   ErrorCode в dump; AssetManifest = ПОЛНЫЙ XML dump + СТОП БЕЗ
   ОТВЕТА (observe-only, ничего не применено); неожиданное
   сообщение = dump + СТОП без ответа.

env-контракт: IRMA_ATC_LIBID/ANCHOR (используется и в сверке)/
VERSION/SERVICE («com.apple.atc» по умолчанию; канал TLS — lbD).

След: `atc-delta-run1-2026-11-04c.log`.

## 5. Инварианты для следующего шага (реальный Delta с треками)

1. Готовый wire-путь работает и в ступеньке «staging пуст» — реальные
   инсерты идут поверх этой же механики.
2. AssetManifest на ПУСТОМ Delta — НЕ признак провала мутации:
   телефон просит OWN-загрузку; решение — «надо уметь ДАВАТЬ ответ
   (или игнорировать, как мы — close) — осознанный response».
3. Инкремент якеря «Media anchor = A + 1» — только в реальном
   insert-файле; пустой прогон НЕ растит якерь (verified).
4. Статы DB в повтор-чтение ДВАЖДЫ за проход — данные стабильны.
5. Правило сохранности (docs/04 §2.2): -wal копируется ПАРОЙ, -shm
   НЕ копируется; копия стабильна, повтор чтения совпадает
   (уже протестировано на живой медиатеке).

## 6. Инструментная часть

- `libirm/include/libirm/afc.h` + `libirm/src/afc.c` (новый модуль AFC
  в libirm): конструктор `irm_afc_new(fd, tls, timeout)`;
  op-методы devinfo/dir_list/file_info/size_info/read_full/
  write_full/mkdir/rename; обмен «один запрос → один ответ»
  (Status/Data; коды ошибок через `irm_afc_status_name`, таблица 0..36);
  файл читается целиком до EOF; Write-чанки ≤ 1 МиБ; TLS-вариант
  через `irm_tls_*`. Владение fd НЕ внутри (закрывает вызывающий).
  Отладка: `IRM_AFC_DEBUG=1` — печать reply op/code/hexdump первых
  16 байт каждого ответа.
- `tools/irmctl`: команды `afc-ls` (devinfo + ls), `afc-stat`
  (атрибутика), `music-id` (frpd + DB-копия + якерь), `atc-delta`
  (полный пустой Delta). Usage и dispatch добавлены.
- Makefile: vendored SQLite (../vendor/sqlite, -O2 -w, объект в
  build/sqlite3.o), линкуется в irmctl; юниты 5/5 OK; `-Wall
  -Wextra` чисто.

## 8. Что дальше (шаг 9f)

Реальный Delta с треком — закрыт в **E15** (`docs/evidence/E15-atc-insert.md`):
grappa-подпись .cig, стадинг ops+cig, insert_track по карте rustunes,
Airlock/FileComplete → SyncFinished, якерь 1 → 2 (post-verify).
