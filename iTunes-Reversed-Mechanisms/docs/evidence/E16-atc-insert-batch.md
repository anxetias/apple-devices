# E16 — atc-insert пакетный: один конверт на N треков (шаг 9g)

Расширение E15 до **батча**: одна ATC-сессия несёт ОДИН конверт
`[update_db_info, insert_track × N]` и ОДИН файл-стейджинг
(ops + .cig),FileComplete — по манифесту, якерь растёт ровно на +1
ВНЕ зависимости от N.

## 1. Эталон и код

- Эталон rustunes: `music-protocol/protocol/batch.rs` (MAX_OPERATIONS=500
  → **499 вставок** с update_db_info; MAX_OPERATION 4 МиБ; один
  revision/timestamp на конверт), `ancillary.rs` (audio_batch: PIDs
  попарно различны и вне каталога; MAX_MANIFEST_ASSETS=1024),
  `protocol/session.rs` (MAX_FRAMES=1024; FileError строго после всех
  FileComplete; «Native completions are not ordered by manifest
  position»; комментарий session.rs:492 «8-track batch…» — телефон
  PING'ает после последнего FileComplete).
- `tools/irmctl.c`, ветка `music-mac-style`:
  - `IRMA_ATC_BATCH_N=1..499` (reject вне диапазона; default 1);
  - массив `tpids[batch_n]` (трековые PIDs из `/dev/urandom`, s64>0,
    попарно различны, без коллизий с каталологом — atc_collect_pids
    1118 значений на run2), буферы `own_ids[batch_n][24]`
    (dec-строки в порядке манифеста), `titles[batch_n][80]`
    («IRM Tone» при N=1; «IRM Tone k» при N>1);
  - builder `atc_op_insert_track` получил `.number` (item.track_number =
    1..N в пакете; при N=1 — записывается 1 как в 9f);
  - конверт собирается ОДИН (rev = anchor_a+1; timestamp — один);
  - манифест-парсер `atc_manifest_parse` строгий к набору own
    (обязан покрыть РОВНО весь пакет) и классифицирует прочие записи
    (см. §3);
  - frame-граница (j)-цикла поднята 96 → **512** (телефон шлёт 5
    Progress/пакет + Ping×2 + IdleExit-в-тишине; MAX_FRAMES=1024).

## 2. Live-прогоны (iPhone12,1, iOS 27.0.1/27.2, USB; якерь до = 2)

Трейсы `research/3utools/tools/`, серия `-2026-11-04d`
(3utools-research ветка):

| прогон | что сделано | результат |
|---|---|---|
| stage-only | N=4, весь wire-путь до стадии | ops **3962 Б**, .cig 21 Б, grappa PASS |
| run1 | полный, N=4 | FSFM применил вставку БЕЗ файлов; якерь 2→**3**; после ~30 s тишины → Ping×2 → **IdleExit** |
| run2 | полный, N=4 | манифест с **бэклогом** (4 own + 4 pending audio run1 + artwork 8699…) → СТОП; якерь 3→**4** |
| run3 | бэклог-доставка | 12 FileComplete (4 own + 8 бэклог); FileError не ушёл (баг кода) → IdleExit; якерь 4→**5** |
| run4 | полный, N=4 | манифест: 4 own + бэклог-аудио=**0** + ancillary=1 → FileError{16} → **SyncFinished**; якерь 5→**6** |
| verify | music-id + sq3 + AFC | SyncAnchor=**6**, Revision 8631, item 61..77 (17 треков), файлы 2691 Б на Fnn-путях, Airlock и staging пусты |

## 3. Факты пакета (CONFIRMED телефоном)

1. **Один конверт на пакет**: `[update_db_info, insert_track × N]`,
   один revision (A+1), один timestamp, одно .cig. 3962 Б на N=4
   (run1..run4); якерь растёт ровно на +1 Независимо от N.
2. **Телефон применяет метаданные на FSFM-потреблении staging,
   ДО получения файлов**: run1 упал ДО оформления FileComplete, но
   якерь вырос и 4 item появились в DB (album «IRM Tones»
   переписан телефоном под внутренние item_pid 62..65 — телефон
   присваивает себе внутренние PIDs, наши живут только в wire-слое).
3. **AssetManifest = Единый whitelist желаний**:
   собственные записи пакета (audio, бит 1), все пока-не-донесённые
   аудио прошлых сессий (бэклог), artwork-пожелания (биты без 1).
4. **FileComplete снимает pending-желание навсегда** (run4: бэклог-аудио
   = 0 после run3-доставки). **FileError{16} НЕ снимает желание** —
   artwork 8699068841132158781 (9f-трека, parts=4) приходит в КАЖДОМ
   манифесте; телефон согласен на вечный отказ.
5. **Ancillary-записи требуют решения (FileError{16}) после всех
   FileComplete**: без ответа телефон не завершает сессию (run3:
   12 FileComplete без FileError → Ping×2 → IdleExit; run4: то же + 
   FileError → SyncFinished). Классификация медиа-написи:
   `AssetParts&1` → аудио-доставка; `!&1 && IsDownload && Music` →
   FileError{16}; прочее → СТОП без отправок.
6. **При тишине хоста ~30 с телефон шлёт Ping×2 и IdleExit**
   (закрывает простаивающую сессию; IdleExit ≠ SyncFailed, пробует
   снова при следующем хедшейке).
7. FileComplete в ПОРЯДКЕ МАНИФЕСТА допускается (rustunes факт:
   «Native completions… not ordered»); манифестный порядок own_ids
   не обязан совпадать с порядком генерации tpids — Нужна
   **либо ПРОВЕРКА ИДЕНТИФИКА (membership), НЕ по блокам**.

## 4. Инварианты пакета (как для 9f, плюс)

- staging `/iTunes_Control/Sync/Media` пуст перед handshake и пуст
  после SyncFinished (потребление на FSFM);
- ошибки ДО FSFM → `atc_stage_clean`, телефон ничего не применил;
- PIDs: track×N попарно различны + album + artist, все вне каталога;
- MAX: 499 вставок/конверт (rustunes MAX_OPERATIONS=500 с update_db_info),
  txt ops ≤ 4 МиБ, MAX_FRAMES=1024 (наш буфер 512 кадров);
- якерь: RS=A (из DB), FSFM=A+1, ровно +1 на сессию.

## 5. Трассы

- `atc-insert-batch-stage-2026-11-04d.log`, `atc-insert-batch-run1..4`,
  `music-id-batch-verify-2026-11-04d.log` — в
  `research/3utools/tools/` (ветка 3utools-research).
- FINDINGS §9g (сессия 04.11, раздел 9g) — детальные факты/логи.
