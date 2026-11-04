# E01b — usbmuxd: точные wire-форматы (декомпиляция Ghidra)

Продолжение E01. Исходник псевдокода: `analysis/usbmuxd-decomp/functions/*.c` (443 функции,
Ghidra 12.1.4, срез x86_64 `usbmuxd.x86_64`, sha256 4c68…19b7e). Ограничение: псевдокод Ghidra,
не исходный текст Apple; каждый вывод привязан к конкретной функции/адресу.

## 1. Frame-протокол клиента (plist v1)

Анализ `HandleUSBMuxCommand` (0x10000624f) и `ClientSendDictionary` (0x100002e00):

```
uint32 header[4]  (native/LE в памяти, CFSocket-запись сырыми байтами):
  header[0] = bodyLen + 0x10        // общая длина (включая header)
  header[1] = 1                     // version (ОБЯЗАТЕЛЬНО 1: иначе «old version», ответ-ошибка)
  header[2] = 8                     // при отправке демоном; у входа НЕ проверяется
  header[3] = tag                   // корреляция запрос-ответ (echo из запроса)
после header: binary plist (bplist00, CFPropertyListCreateData/…WithData)
```

- Вход: длина файлаоб буфера == header[0]; тело = header+0x10, длина = header[0]-0x10.
- plist обязан быть CFDictionary → иначе Result с кодом 5 («dictionary … is missing …»).
- **Только plist-протокол**: legacy-протокол (v0) отброшен — «old version» ответ при header[1]!=1.
- Tag берётся из header[3] запроса и эхо в ответах (`FUN_100002e00(param_1, header[3], dict)`).

## 2. Result-ответ

`ClientResult`/`FUN_100005497(param_1, code)`:
```
{MessageType:"Result", Number:<код>}   // CFNumber(SInt32); String-ключ не заполнялся
```
Наблюдаемые коды (по веткам dispatch): 2 = нет такого DeviceID («requestingconnect tou failed nosuchdevice»),
5 = плохой словарь/порт, 8 = CFData/……RGBA, 12 = OOM, 22(0x16) = проблемы пар Kami записи/запросы.
⚠ полный кодовый лист до-выдаём позже из все х вызовы `FUN_100005497(...)`.

## 3. MessageTypes и семантика

Dispatch (`0x10000624f`): по `MessageType` строке:
- `Listen` → регистрация слушателя; фейлы: blacklist (BlackList по ProgName/BundleID);
  КонType:int (0 → только USB, бит0x1=Network? наблюдение: `(ConnType & 0xfffffffd)==0` → первый
  NETWORK-листенер требует предпочтение `DisallowNCMMode=off`; `ConnType` = 0 для Wi-Fi-listen? 🔎);
   затем Source всех attached-устройств ( FußRef через `Attached`-уведомления).
- `Connect` → читает `DeviceID` (SInt32) и `PortNumber` (SInt16, kCFNumberGetTypeID + GetValue(SInt16)!),
  затем `HandleUSBMuxConnect(0x100006f62)`:
  - Ошибка если клиент уже в состоянии 1/«занят» (state машина: 0=idle,1=attaching,2=attached, подключение запрещено);
  - DeviceID → `FUN_100008f33` поиск устройства; нет → code 2;
  - Роролы: Connecting через mux-TCP: USB-устройство → `MuxTCPInitiateConnect` (SYN-фрейм),
    network → `SocketAddressDataCreateCopyWithPort...`/`MuxNetworkInitiateConnect`;
  - **Порты в mux-TCP фреймах — LITTLE-ENDIAN u16** (перемещаются в frame нативными ushort-ами
    и сравниваются в нативном порядке — бswап применялся только для лог-вывода);
  - Ответ об успехе/ошибке: Result после рукопожатия SYN/SYN-ACK
    (`(word2>>2 & 0x3c) == 0x14 && flags==0x12` — проверка валидности SYN-ACK, код 3 при
    'connection refused' → Result=3).
- `Logs` → повышает уровень логирования в файл приложений клиент-приёмника (fon) и close.
- `ListDevices` → `{MessageType:"Result"? нет…}` → возвращает словарь
  `{DeviceList: [device directives]}` (без `MessageType` — ПРЯМО закрытие );
  отправка с tag-эхом, `FUN_100002e00`.
- `ListListeners` → `{ListenerList:[{kLibUSBMuxVersion, ConnType, IDString, ProgName, BundleID,
  ProcessID, Blacklisted}]}` (0x10000735e).
- `ReadBUID` → FUN_1000075df (BUID — HostID/SystemBUID ответ).
- `ReadPairRecord` → `{PairRecordData: <CFData plist-байт>}` (НЕ Result; ошибки → Result code 22/12);
  путь = `<dir из AMDGetPairingRecordDirectoryPath>/<PairRecordID>.plist`.
- `SavePairRecord` → запрос `{PairRecordID:string, PairRecordData:CFData, DeviceID:int32}`;
  сохраняет plist; затем всем слушателям рассылает+ уведомление Paired с DeviceID («sending a paired
  notification for device %d», MessageType=«Paired» 0x100002aeb-структура).
- `DeletePairRecord` → FUN_100007a83.

## 4. Device-словарь attach-уведомления (FUN_1000023f4)

```
{MessageType:"Attached"|"Detached", DeviceID:SInt32,
 Properties:{ DeviceID:SInt32, SerialNumber:"<строка из proff obj>",
   // USB (ConnType==1):
   ConnectionType:"USB", USBSerialNumber:<property>, ProductID:SInt32(from u16), LocationID:SInt32,
   UDID:<строка if non-null>, … "ConnectionSpeed"?}, 
   // Network (ConnType==2):
   ConnectionType:"Network", NetworkAddress:<CFData sockaddr>, EscapedFullServiceName:string,
   InterfaceIndex:SInt32 },
   …}
```
🔎 `ConnectionSpeed` и прочие поля Properties выверим на live-заходе.
Detached-сообщение: только {MessageType:"Detached", DeviceID:SInt32}.

## 5. Device-mode mux (USB bulk) — транспорт

### v1 outer header (8 байт, все Big-Endian):
```
[0..3]  BE32  type         (0 = version-pkt, 0x00000006 = TCP/mux-data)
[4..7]  BE32  totalLength  (== реально пришедшая длина, обязана совпасть)
после: payload (для type 6 — TCP-like 20-byte фрейм)
```
### v2 outer header (16 байт):
```
[0..3]   BE32  type         (0=version, 1=log, 6=TCP data)
[4..7]   BE32  totalLength
[8..11]  байты FE ED FA CE    (magic, читается LE как 0xcefaedfe)
[12..13] BE16  seq           (sequence counter, против «duplicate/gap»)
[14..15] BE16  ack
```
### Version-пакет (обе версии, payload type word0==0, минимум 0x14=20 байт):
```
word2 (frame+8)  = BE32 claimed-version (у демона: значение `ProtocolVersion` предпочтения, default 2)
word3 (frame+12) = BE32 features; бит 0x80000000 = «supports TCP resend»
полный пакет = 16-byte header (v2) + 4 байта payload
v1 умеет diff: header 8B + payload…🔎 (v1 VersionSend paths)
```
Приём: версия устройства 1 → v1-колбэки, 2 → v2; «too new» в противном случае.

### TCP-like внутренний фрейм (mux-TCP, 20 байт минимум):
```
[0..1]  u16  sport        (БАЙТЫ В ХОСТ-порядке: LE)
[2..3]  u16  dport        (LE)
[4..7]  u32  seq          (СЕКВЕНС)
[8..11] u32  ack          (0 у SYN)
[12]    byte   dataOffset=0x50
[13]    byte   flags       (0x02 SYN, 0x12 SYN|ACK, 0x04 RST, прочие как TCP)
[14..15] u16 BE16 window    (= (0x20000-outstanding)>>8 — в 256-байтовых долях)
[16..19] u32 urgent/остальное   🔎 (не нужен пока)
данные — после 20-байтного header (SYN/SYN-ACK — без данных).
```
Window management и seq/ack правила — классические TCP-like с подтверждением; проверим при реализации
(готовим состояние=2/принятый handshake). Source port: инкрементный counter демона
(DAT_100021104), а не реальный порт ОС.

## 6. Ключи и мотивы реализации в C
- Клиентский listener-frame: только plist v1 — legacy не нужен.
- Driver-mode mux: реализуем **v2 по умолчанию**, v1 отвинтить как compatibility (обе версии известны).
- «Attach»-событие: собрать из IOUSBHost- Судя IORegistry ProductID/LocationID/SerialNumber
  «USB Serial Number» — UDID (так делает демон; см. E01).

## 7. Куда двигаться дальше
- Открыть `MobileDevice.framework` → E02: AMDDeviceConnect/Pairing/TLS/AMServiceConnection.
- ipsw-внутренний lockdownd services.plist (E03).

## 8. ИсточникEvidence
- Псевдокод: `analysis/usbmuxd-decomp/functions/` (те же имена FUN_* <=> адреса);
  `decompile-index.json` — распределение по адресам; `usbmuxd.strings.txt` — строки среза.
- REPL-разбор производился над копией среза: sha256 среза 4c680b949b22817077cc0bc1895b566343d390f021ad7ad3381673439a619b7e.

## 9. Live-факты системного демона macOS (2026-11-03, `irm_mux` probe)
Проверено live против `/var/run/usbmuxd` (unix stream, как у Apple-клиентов):
- **Запрос binary-плейлистом (bplist00) ПРИНЯТ демоном** — кадр
  `[LE u32 totallen=86][LE u32 ver=1][LE u32 msg=8][LE u32 tag]` + bplist00
  `{MessageType:"ListDevices"}` → демон ответил валидным кадром.
- **Ответ демона — XML-плейлист** (`kCFPropertyListXMLFormat_v1_0`), не binary:
  `<?xml...?><!DOCTYPE plist...><plist version="1.0"><dict><key>DeviceList</key><array/></dict></plist>`
  (237 B: header 16 + body 221). Формат зависит от сборки демона: срез x86_64
  (§1) — Windows-bundle и пишет bplist00; macOS-сборка пишет XML.
  → Клиент принимает ОБА (префикс `bplist00` / `<?xml`).
- `ver`, `msg=8`, `tag` эхом из запроса совпали; `totallen` = 16 + body ✓.
- Пустой `DeviceList` — штатный ответ без подключённых устройств (0 устройств).
- Реализация: `libirm/src/mux.c` (кадры) + `libirm/src/xmlplist.c` (XML→IRM_BP_*)
  `tests/test_mux`/`tests/test_xml`; smoke = `make smoke` (`irmctl list`).
