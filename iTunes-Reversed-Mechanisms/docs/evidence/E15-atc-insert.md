# E15 — atc-insert: реальный Delta с треком (шаг 9f)

Первый успешный **мутационный** Delta: конверт операций insert_track за
grappa-подписью (.cig), стадинг, own-ассет через Airlock → FileComplete →
SyncFinished, рост якеря A → A+1 на телефоне. Против E14 (пустой Delta,
observe-only) здесь телефон принял и применил нашу запись каталога.

## 1. Код

- `libirm/include/libirm/grappa.h` + `libirm/src/grappa.c` — derives HMAC-ключ
  и tag-маску из GRAPPA-ответа ReadyForSync, подпись .cig = 21 Б
  (`0x01` + HMAC-SHA1⊕mask). Офлайн-самотест на 4 фиксированных векторах
  rustunes (`grappa-fixed-vectors.plist`) — **4/4 PASS**
  (лог `atc-insert-verify-2026-11-04d.log`; Ops 1..4 МиБ, ops = ТОЧНЫЕ
  сериализованные байты, без ре-рендера).
- `libirm/src/afc.c` + `afc.h` — `irm_afc_remove` (op 0x0008 RemovePath).
- `tools/irmctl.c` — команда `atc-insert`:
  - полный wire-путь: staging-инвариант → DB-копия → PIDs → конверт →
    Ping(Pong)/SyncAllowed → RS(якерь A) → ReadyForSync(якерь A сверен) →
    grappa → стадинг ops+sidecar → FSFM(якерь A+1) → AssetManifest-политика →
    Airlock upload + rename → FileComplete / FileError{16} → SyncFinished;
  - `IRMA_ATC_STAGE_ONLY=1` — весь wire-путь ДО стадии, без одиночной записи
    на телефон (run stage: `atc-insert-stage-2026-11-04d.log`);
  - env: `IRMA_ATC_FIXTURE` (обязателен), `IRMA_ATC_ANCHOR` (опциональная
    сверка с DB), `IRMA_ATC_LIBID/VERSION/SERVICE`.
- `Makefile` — grappa в LIB_HDRS/LIB_SRCS. Сборка `-Wall -Wextra` чистая,
  юнит-тесты 5/5.

## 2. Live-прогоны (iPhone12,1, iOS 27.0.1, USB)

### stage-only (`atc-insert-stage-2026-11-04d.log`)

- staging `/iTunes_Control/Sync/Media` пуст; DB-копия с -wal, integrity ok.
- `db_pid=860019141250340`, `primary_container_pid=460217054914055021`,
  якерь **A=1**; PID-набор каталога: 1017 значений.
- PIDs (случайные, s64>0, без коллизий): track/album/artist =…
- конверт: `bplist00`, 1070 Б, первый ключ `revision` (=2), порядок как у
  rustunes `alac.rs::serialize` 1:1 (порядок dict = порядок вставки).
- Ping S1 → Pong; Capabilities; InstalledAssets; AssetMetrics; SyncAllowed →
  RS (Session=2, якерь «1») → ReadyForSync: якерь Media=`1` == sent; в
  Params.DeviceInfo.Grappa — 83 Б ответа.
- sidecar `.cig` = `0x01` + HMAC-SHA1⊕mask (21 Б), `IRMA_ATC_STAGE_ONLY=1` →
  abort без записей; staging остался пуст.

### полный запус (`atc-insert-run1-2026-11-04d.log`)

- те же инварианты до FSFM; фикстура
  `/tmp/opencode/rustunes/repo/.../tone-alac.m4a` 2691 Б (валидный MP4/ALAC,
  0.1 с: mdhd 44100/4410 samples, mvhd 1000/100 ms);
- стейдж: `Sync_00000000.plist` (1070 Б) + `.plist.cig` (21 Б);
- FSFM (Session=2, якерь **«2»**) → Progress×2 → AssetManifest:
  **одна** запись own `8699068841132158781`, `Variant.AssetParts=5`
  (бит 1 = аудио есть), `AssetType=Music`, `IsDownload=true` → политика
  проходит (свой = dec(track PID), ровно одна, бит 1);
- Airlock: upload `…/Airlock/Media/8699068841132158781.m4a` → read-back
  ok → rename bare `8699068841132158781` → read-back ok;
- постоянный путь `iTunes_Control/Music/F31/BOYY.m4a` (F31 = track PID % 50;
  4 случайные буквы, без коллизий в папке) → FileComplete (Session=2,
  Params: AssetID/Dataclass="Media"/AssetPath root-relative);
- ответ телефона — **SyncFinished (Session=2)**.

### пост-верификация (`atc-insert-verify-2026-11-04d.log`,
`music-id-verify-2026-11-04d.log`)

- `MLSyncClientSyncAnchor = 2` — телефон инкрементировал якерь (до этого
  долгое время стабильно «1»; фоновой рост только LastSyncedRevision
  8491→8496);
- `/iTunes_Control/Music/F31/BOYY.m4a` существует: **st_size=2691** (ровно
  фикстура), `st_ifmt=S_IFREG`, `st_nlink=1`;
- `/Airlock/Media` — пуст: телефон забрал файл из Airlock сам;
- `/iTunes_Control/Sync/Media` — пуст: стейдж потреблён.

## 3. Карта полей insert_track (финальная, CONFIRMED телефоном)

Порядок ключей dict — в порядке вставки (bplist хранит порядок:
`revision` первый в конверте, `operations` второй):

- envelope: `{revision: A+1, operations: [update_db_info, insert_track],
  timestamp: CFDate}` — timestamp в секундах от 2001-01-01T00:00:00Z.
- `update_db_info` (index 0): `{pid: db_pid, operation:"update_db_info",
  db_info:{primary_container_pid}}` — ОБА значения существующие, из
  `SELECT db_pid, primary_container_pid FROM db_info` (не allocate).
- `insert_track`:
  - `{operation, pid, avformat_info, item_stats, item, location}`;
  - avformat_info: audio_format=601, bit_rate=1411 (PCM-ставка
    (44100×16×2+500)/1000), duration=4410 (сэмплов на канал), gapless
    4 ключа (delay 0 / drain 0 / heuristic 1 / resynch 0),
    analysis_inhibit_flags=2, sample_rate=44100 (REAL);
  - item_stats — полный словарь: play_count_recent=0, play_count_user=0,
    skip_count_recent=0, skip_count_user=0, has_been_played=false;
  - item: album_pid, artist_pid, title, artist, album, sort_name, sort_artist,
    sort_album, genre, total_time_ms=100, track_number=1, is_song=true,
    remember_bookmark=false, artwork_checksum=0; album_artist/composer/
    year/track_count/disc_*/date_* — НЕ присылаем (omission);
  - location: `{kind:"Apple Lossless audio file"}`.

## 4. AssetManifest-политика (живое поведение 9f)

- Своя запись в манифесте пришла с `AssetParts=5` (аудио-бит 1 выставлен) —
  единственная; `IsDownload=true` для собственной записи политикой не
  запрещено (own-запись: ровно одна, бит 1, dec(track PID)).
- Чужие (ancillary-only: IsDownload=true && AssetType==Music && БЕЗ бита 1)
  → FileError{ErrorCode:16, ErrorIsVisible:false, Dataclass:"Media"},
  отправленные ПОСЛЕ всех FileComplete; в этом прогоне чужих не было.
- Любая иная запись / отсутствие own / повторный манифест → СТОП без
  отправок.

## 5. Инварианты, перенесённые в 9g+

- Якерь растёт ТОЛЬКО мутационной ATC-сессией: 1 → 2 подтверждён in-DB.
- Staging строго пуст до и после сессии.
- Sidecar = ровно 21 Б, подписываются ТОЛЬКО сериализованные байты.
- FileComplete перманентно на root-relative путь: телефон перемещает файл из
  Airlock самостоятельно после ответа.

## 6. Артефакты

- Логи: `atc-insert-stage-2026-11-04d.log`, `atc-insert-run1-2026-11-04d.log`,
  `atc-insert-verify-2026-11-04d.log`, `music-id-verify-2026-11-04d.log`
  (research/3utools/tools/).
- Офлайн-самотест grappa: /tmp грэппа-харнесс (не в git — vectors PASS
  зафиксированы в логе verify).
