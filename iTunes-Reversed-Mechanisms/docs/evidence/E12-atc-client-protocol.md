# E12 — ATC: клиентская сторона (дизасм) + контрольный живой обмен atc-talk

Дата: 2026-11-04. Устройство: iPhone12,1, UDID
`00008030-001C3128119A402E`, iOS 27.2 (USB, DeviceID=1). База: E11
(серверная часть ATC). Новое: **клиентская последовательность**,
восстановленная из дизасм-корпуса ampdevices (AMPDevicesAgent), и её
live-подтверждение инструментом `tools/irmctl.c::atc-talk` (run1–run3,
логи в `/tmp/opencode/atc-talk-run*.log`, копии в traces друга:
`3utools-research/research/3utools/tools/atc-talk-runN-2026-11-04.log`).
Ничего мутирующего: HostInfo/Ping с пустыми данными, read/checkin только.

## 1. Где живёт клиент ATC в корпусе

- Публичный API — **AirTrafficControl.framework**: в корпусе только
  PLT-заглушки `_ATHostConnection*` (реализация framework'а НЕ декомпилирована
  — это главная причина открытых вопросов по wire-именам).
- Реальный код клиента — **AMPDevicesAgent**, класс-обработчик
  «**Dulcimer**» (медиабиблиотека устройства): magic структуры
  `kDulcimerHandlerDataMagic==0x64756c63` («dulc»), connection в
  handlerData+0x16688, state — `handlerData+0x166d4` (uint, имена
  состояний — таблица строк, см. §2.2).
- Полный список экспорта из `functions/1006cd6xx__ATHostConnection*`:
  Create/CreateWithCallbacks/Retain/Release/Invalidate/
  GetCurrentSessionNumber/**GetGrappaSessionId**/SendHostInfo/SendMessage/
  SendPing/SendStatusMessage/SendSyncFailed/SendSyncRequest/
  SendMetadataSyncFinished/SendFileErrorWithParams/SendFileProgress/
  SendAssetCompleted/SendAssetCompletedWithMetadata/SendPowerAssertion +
  `ATCFMessageCreate/GetName/GetParam` + Advertiser
  (StartWakeupService/StopWakeupService — wake-сервис хоста).

## 2. Кадры и машина состояния

### 2.1 Формат кадра (агентная часть)

- `FUN_10016aaf8`: `CFPropertyListCreateData(plist, 200, 0, err)` —
  **200 = kCFPropertyListBinaryFormat_v1_0 (bplist00)**. Framing
  [LE32 len][bplist00] снят live в E11; в корпусе длина вставляется
  кодом AirTrafficControl.framework (не виден).
- Конверт — `ATCFMessageCreate(sessionNumber, name, params)`: имя
  сообщения — строка, params — dict; в live-кадрах ровно 5 ключей
  `{Command, Params, Type, Session, Id}` (E11); клиентские Type/Session
  = 0 (наши run1–run3 приняты сервером с этими значениями).
- Извлечение полей входящих: `_ATCFMessageGetParam(msg, key)` +
  generic-валидаторы: `FUN_1003400ee` («expected string for %{public}@»),
  `FUN_1003401bb` («expected dictionary for %{public}@») — типовые
  ошибки агента при разборе кадра.

### 2.2 Состояния (строки живого enum из AMPDevicesAgent.strings 47200+)

`Idle → RequestingSync → ReadyForSync → SyncingMetadata →
FinishedSyncingMetadata → TransferringAssets → Finished` (+
`Canceled`); состояние хранится в handlerData+0x166d4, setter —
`FUN_10033470c` (лог «setting sync state … previous state …»).
Диапазон активного синка: `state >= RequestingSync && state < Finished`.

### 2.3 Клиентская последовательность (главный факт; FUN_1003338b9)

1. **HostInfo** — в ответ на серверные Capabilities (run3 подтверждён).
   Params восстанавливаются лоб в лоб из `FUN_1003335d2` (sync-decomp
   строки 47584+ — те же имена в бинарной strings-таблице):
   `Type="iTunes"`, `Version="13.5.6.12"` (версия агента в iTunes
   13.5), `MacOSVersion`, `SyncHostName`, `LibraryID`,
   `SyncedDataclasses` (array), `SyncedAssetTypes` (array),
   `Wakeable` (bool; из handlerData+0x151e2 — флаг wake-сервиса).
2. **RequestingSync** — `FUN_1003338b9(conn, timeout, mask, …)`:
   - dataclasses — из бит-маски param_3 → array строк
     (`FUN_1001709a5`): **1=Media, 2=Ringtone, 8=Book, 0x10=Application,
     0x20=Keybag, 0x40=Photo, 0x80=Data**. Музыкальный класс называется
     `Media`!
   - anchors — `FUN_100334975(handlerData…)`: dict
     `{ИмяDataclass: "<uint32 decimal>"}`, значение —
     **СТРОКА** `%u` от анкера (`FUN_10034c182`, assert `anchor != 0`);
     заполняется из ТРЁХ storage-структур handlerData
     (+0x166e8/+0x16720/+0x16758: `{name@+8, mask@+0x10, anchors[]@+0x14…}`).
   - третий аргумент — dict HostInfo из `FUN_1003335d2` (те же Params).
   - отправка: `_ATHostConnectionSendSyncRequest(conn, dataclasses,
     anchors, hostInfo)`; wire-сложение Params делает framework
     (см. §5, R1).
   - затем цикл «waiting for ReadyForSync» (state==2); пинги сервера
     во время ожидания логируются («got Ping … waiting for ReadyForSync»).
3. **ReadyForSync** (сервер → хост): агент-обработчик `FUN_10033e758`
   требует `Params.DataclassAnchors` (иначе «missing DataclassAnchors
   in ReadyForSync message») и МЕРЖИТ присланные анкеры в те же три
   storage-структуры (`FUN_100340288`) — сервер присылает свои
   актуальные анкеры; state → 3 (SyncingMetadata).
4. **Обмен метаданными** (state 3..4): агент шлёт операции
   (`WriteAirTrafficSyncOperationsFiber`; opKind insert/update/upload/
   delete_track, insert/update/delete_playlist, insert/update/delete_album,
   insert/update/delete_artist — строки в strings-таблице 47250+);
   метаданные передаются side-файлами **`.cig`** с подписью Grappa
   (`FUN_10035069f`: GrappaHostSign/Verify по session id + 0x20B
   — для сайдфайлов, НЕ для wire-кадров!).
5. **FinishedSyncingMetadata** (хост → сервер; `FUN_10033600e`):
   Params = `SyncTypes` (dict по dataclass),
   `DataclassAnchors` (тот же dict анкеров), `PurgeDataBytes`
   (CFNumber). Типы синка (enum strings): **ATSyncNoSync,
   ATSyncDeltaSync, ATSyncResetSync, ATSyncPrepOnly**.
6. **TransferringAssets**: сервер AssetManifest (Params: `AssetType`,
   `AssetManifestIndex`, `AssetID` — идентификатор разбирается
   `ParseAirTrafficMediaAssetIdentifier`: `<Class>-<type>-<id>` с
   `Variant`/`AssetParts` (1..2 part строк), part-типы Track/Genius/
   Lyrics/Artwork/Playlist); хост копирует файлы в Airlock-папку
   (transfer-очередь), посылает `SendFileProgress` (Params:
   `OverallProgress`, `CurrentAsset`, `AssetProgress`), ошибки
   `SendFileErrorWithParams` (`ErrorCode`), завершение
   `SendAssetCompleted[WithMetadata]`.
7. **SyncFinished** (сервер) → агент снимает state 7/8 → Idle
   (`FUN_10033470c` case 7/8/0 → `FUN_10032fec1`).

### 2.4 Серверные сообщения (полный набор из строк агента)

`Capabilities` (E11), `InstalledAssets` (E11), `AssetMetrics` (E11;
Params `_FreeSize`/`_PhysicalSize`/`_PurgeableSize`/`_Count`/`CameraRoll`/
`UserData`/`Logs`), `SyncAllowed` (см. §3 live), `Ping`,
`Pong` (E11-P2P-ответ на наш Ping), **IdleExit** (новое, live run3),
`ReadyForSync`, `AssetManifest`, `SyncFinished`, `ConnectionInvalid`
(разрыв: строки агента), `FileError` (сервер-клиенту; ErrorCode).

## 3. Live-подтверждение (atc-talk run1–run3)

TLS: lbD-комбо (HostCertificate+HostPrivateKey, pin DeviceCertificate)
зашёл во всех run'ах с первой попытки — систематическое повторение E11 §2.

- Приветственная серия без всякой клиентской активности (run3, Id 27–29):
  `Capabilities{GrappaSupportInfo{version:1, deviceType:0,
  protocolVersion:1}}` → `InstalledAssets{Application:{_Deleted:[]}}` →
  `AssetMetrics` (Music._Count=3, _PhysicalSize=38473728 — сходится
  с шагом 7 и E11; Logs._Count=360).
- Наш **HostInfo** (Params как §2.3, SyncedDataclasses=[] — read-only)
  **принят без замечаний** → сервер отвечает:
  `SyncAllowed` (run3 Id=30): `ManualSync=true`, `AutoSync=true`,
  `PurgeAllowed=true`, `AppRemovalAllowed=true`,
  **`AppInstallationAllowed=true`** (в run1 не фиксировали — richer
  дамп run2/run3), `EducationModeEnabled=false`, `DataProtected=false`,
  `DisabledAssetTypes=[Photo, Movie, TVEpisode, HomeVideo]`,
  `SupportsFavorites=true`. **DataclassAnchors в live SyncAllowed
  отсутствует** (гипотеза: сервер возвращает якоря только для
  знакомого LibraryID; наш генерируемый) — совпадает с validator-строкой
  «DataclassAnchors» рядом с SyncAllowed в strings.
- Далее сервер **Ping ×2** (Id 31–32) и — так как клиент не начал
  синк — **`IdleExit` (Id=33)** и закрытие окна: atcd сворачивает
  неактивную ATC-сессию. Наш повторный Ping после IdleExit уходит в
  закрытое окно (EOF).
- **Наш Ping → Pong**: run1/run2 (Id=2 → сервер Pong Id=20/25) —
  ответ ровно на наш; счётчик Id сервера **глобальный по времени
  жизни atcd** (13→33 через run1→run3), у клиента — свой
  (наши Id=1 HostInfo, Id=2 Ping приняты без конфликтов).
- TLS-деталь: в run2 чтение после SyncAllowed упало как «EOF»
  при живом канале (Pong пришёл после) — в `irm_tls_read` была
  неправильная категоризация `SSL_ERROR_SYSCALL`+`EAGAIN`; исправлено
  (§6), run3 не воспроизводит.

## 4. Ответы на вопросы E11

- **Q1 (клиентские команды)** — закрыто: полный список `Send*` §1 +
  последовательность §2.3; серверные — §2.4.
- **Q2 (Session/Type/область)** — частично: клиент работает с
  Session=0 (run1–run3 live и строки агента не показывают нестабильных
  значений); область задаётся параметрами RequestingSync (маска 1..0x80,
  §2.3), а не полем Session. Осталось: что значит ненулевой
  SessionNumber у `_ATHostConnectionGetCurrentSessionNumber`
  (по-видимому по ATC-session id распределённый при ReadyForSync).
- **Q3** — открыт (критерий шага 9: Music._Count после добавления трека).
- **Q4 (atc2)** — открыт (см. E11 §4).

## 5. Открытые вопросы

- **R1 (RequestingSync wire)**: сумма фактов — `SendSyncRequest(conn,
  dataclasses[], anchors, hostInfo)`; верифицированных wire-имён
  Params в корпусе НЕТ (сериализует AirTrafficControl.framework).
  Рабочие гипотезы: `{SyncDataClasses|Dataclasses:[...],
  DataclassAnchors:{...}, HostInfo:{...}}`. Next: живая read-only
  проба с кадром RequestingSync{Media, anchor "0"} (осторожно:
  сервер отвечает AssetManifest-потоком; фрейм-кап 1 МБ надо поднять)
  ИЛИ снятие AirTrafficControl.framework с мака/iTunes-инсталляции.
- **R2**: как выбирается ATSyncResetSync vs DeltaSync у сервера
  при готовности (видимо, от полноты/host-анкеров; «PrepOnly» —
  режим только-подготовки).
- **R3**: atc2 (E11 §4).

## 6. Код по факту

- `tools/irmctl.c::atc-talk` (+ подкоманды): `atc_read_frames` /
  `atc_frame_write` (LE32-фрейминг), `atc_msg` (5-ключевой конверт),
  `atc_hostinfo_params` (Params из FUN_1003335d2, read-only
  заглушки), `atc_serve_open` (StartService→Connect→TLS), raw_write_full;
  `svc_read_full` — контракт 0/−2 (таймаут)/−3 (EOF).
- `libirm/src/tls.c`: SSL_read теперь трактует
  `SSL_ERROR_SYSCALL`+EAGAIN/EWOULDBLOCK/EINTR как «продолжить с
  poll» (иначе ложный EOF посреди живой сессии, run2-факт);
  диагностика ошибки улучшена (rc/er/errno).
- Юниты libirm 6/6 OK после полной пересборки (`-Wall -Wextra` clean).
