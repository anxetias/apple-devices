# E11 — atc-probe: session-TLS и сервер ATC по кадрам (live iPhone12,1, iOS 27.2)

Дата: 2026-11-04. Инструменты: `tools/irmctl.c` (`atc-probe`), `libirm`
(tls.c/pairing.c/lockdown.c/mux.c), OpenSSL 3.5.5, системный Linux-usbmuxd.
Устройство: iPhone12,1, UDID `00008030-001C3128119A402E`, DeviceID=1 (USB).
Полный лог запуска: `/tmp/opencode/atc-probe-run3.log` (краткосрочный —
выдержки вшиты ниже). Ничего мутирующего: только read/checkin-обмен.

## 1. Порядок обязательностей (новое против E02)

- **StartService БЕЗ сессии запрещён** (live): `irmctl info` (checkin
  QueryType/GetValue без StartSession) → на ВСЕ сервисы (`com.apple.atc`,
  `com.apple.afc`, `com.apple.mobile.notification_proxy`) ответ
  `{"Error":"SessionInactive"}`. GetValue без сессии тоже даёт
  `device: GetProhibited` (ActivationState/SerialNumber/FireWireGUID).
- Единственный обмен, который lockdownd принимает без сессии:
  `QueryType` → `{"Type":"com.apple.mobile.lockdown"}` (бplist, plain).

## 2. Session-TLS — работает ровно по E04

- Старт: `mux Connect PortNumber=htons(62078)` → Result=0 → BE32-bplist
  checkin `QueryType` (plain) → `StartSession`
  = `{Request:"StartSession", ProtocolVersion:"2", Label, HostID,
  SystemBUID}` (все значения СТРОКИ). Ответ содержит
  **`EnableSessionSSL=true`** — TLS-апгрейд на ТОМ ЖЕ lockconn fd
  (факт из strace 04.11 подтвердился кодом).
- Клиентские сертификаты TLS: первый кандидат **lbD-стиль —
  `HostCertificate` + `HostPrivateKey`** (PEM-тексты из
  `/var/lib/lockdown/<UDID>.plist`), peer-pin = `DeviceCertificate`
  (SHA-256 DER). **Handshake прошёл с первой попытки** — Apple-комбо
  (`DeviceCertificate` + `RootPrivateKey`, E04 §2) НЕ понадобилось
  (верная ветка в code сохранена как фолбек).
- TLS-канал двунаправленный и полный: `GetValue ProductVersion` сквозь
  TLS → `27.2`. После StartSession весь lockdown-клиент живёт внутри
  TLS с тем же BE32-фреймингом (lk_wr/lk_rd — единая точка входа).
- Пиннинг: SHA-256(DER peer) == SHA-256(DER DeviceCertificate) — ок.

## 3. Фрейминг ATC (главное открытие дня)

Сервис `com.apple.atc` (StartService → `port=537xx`,
`EnableServiceSSL=1`) живёт так:

- framing — **[LE u32 len][bplist00 payload]**; длина — ТОЛЬКО payload
  (без заголовка), **LE, не BE** (первый кадр приходит как
  `b8 00 00 00 bplist00…`, 184 = 0xB8).
- **сервер САМ открывает обмен** — приветственная серия кадров летит
  ДО всякой активности клиента.
- Обмен (3 прочитанных кадра; Session=0, Type=0, Id возрастает):

```
frame1 len=184: {Command:"Capabilities",
                 Params:{GrappaSupportInfo:{version:1, deviceType:0,
                                           protocolVersion:1}},
                 Type:0, Session:0, Id:9}
frame2 len=146: {Command:"InstalledAssets",
                 Params:{Application:{_Deleted:[]}},
                 Type:0, Session:0, Id:10}
frame3 len=727: {Command:"AssetMetrics", Params:{
                 _FreeSize:72353746944,
                 Music:{_PhysicalSize:38715392, _Count:3},
                 Photo{Photo{0,0,0}, CameraRoll{_Count:896,
                 _PhysicalSize:1305540514, _PurgeableSize:691975501}},
                 Book{0,69632}, UserData{16240/19136167936/2208235520},
                 _PhysicalSize:117014011904, _PurgeableSize:5478741153,
                 Application{36/10061012992/0}, Logs{360/38469632}},
                 Type:0, Session:0, Id:11}
```

Полные XML-дампы кадров — в логе запуска; сырой hexdump первых 256 Б
тоже сохранён в логе (`/tmp/opencode/atc-probe-run3.log`).

- Осмысление: ATC — канал синхронизации контента/«хранилища» Apple
  (`GrappaSupportInfo` — имя внутреннего модуля; проверять в дизасм
  корпуса). Сервер сразу сообщает capabilities, затем InstalledAssets
  (изменения «Assets», сейчас пусто), затем метрики классов контента —
  включая **Music: `_Count=3`, ~38,7 МБ** (на телефоне ровно 3 трека,
  которые мы заливали через 3u на шаге 7 — счётчик сходится).
- `Id` — монотонный счётчик сообщений сервиса (9→10→11); начался с 9 —
  либо сервис помнит историю сообщений, либо счётчик общий на инстанс.
  `Session=0` — пока не выбрана объектная область (см. Q2).

## 4. com.apple.atc2 — другой характер

- StartService ок (`port=53727`, `EnableServiceSSL=1`), TLS lbD-комбо
  поднялся, НО чтение заголовка первого кадра упало (EOF/закрытие от
  сервера сразу после установления канала) — кадры не пришли.
  Вывод: `atc2` НЕ приветствует сам; поведение отличное от `atc`.
  Вопрос открыт (Q4: нужен ли клиентский checkin-кадр первым?).

## 5. Вопросы / TODO

- Q1: Какие КЛИЕНТские команды отвечает ATC на `Capabilities` — список
  известных `Command:*` AND схема запросов (искать в дизасме корпуса
  `Grappa`/`AtcService`/`AssetSync`).
- Q2: Что означают поля `Session` и `Type` у кадров и как выбирается
  область синка (Music/Photo/…) — декомпил, потом live-проба.
- Q3: Обновляется ли `AssetMetrics.Music._Count/_PhysicalSize` при
  добавлении трека — дёшево проверяемый живой критерий успеха шага 9.
- Q4: atc2: какой первый кадр ждёт сервер (команда/HTTP?).

> **Обновление 04.11 (после E12)**: Q1/Q2 закрыты/частично в
> `E12-atc-client-protocol.md` (клиентская последовательность из
> дизасма + live `atc-talk` run1–run3: HostInfo принят, SyncAllowed,
> наш Ping→Pong, IdleExit); Q3/Q4 остаются открытыми.

## 6. Код по факту (что именно цеплялось к телефону)

- `libirm/src/mux.c::irm_mux_connect` — порт через `wire_port_of()`
  (Linux ждёт htons); кадр дополнен `ClientVersionString`/`ProgName`/
  `kLibUSBMuxVersion=3`. Оба Connect (lockdown 62078 и сервисный
  порт StartService) прошли Result=0.
- `libirm/src/lockdown.c::irm_lk_start_session` — StartSession+TLS;
  `lk_wr/lk_rd` — единая точка plain↔TLS I/O.
- `libirm/src/tls.c` — клиентский handshake + пиннинг SHA-256;
  `pairing.c` — разбор PEM-рекорда (HostID/SystemBUID/скопы
  HostCertificate/HostPrivateKey/DeviceCertificate/RootCertificate/
  RootPrivateKey).
- `tools/irmctl.c::atc-probe` — фреймовый reader `[LE32][bplist00]`
  с XML-дампами кадров (E11-данные).
