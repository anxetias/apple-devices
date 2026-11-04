# E02 — MobileDevice.framework: слои соединения (usbmux → lockdown-checkin → сервис)

Цель: `/Library/Apple/System/Library/PrivateFrameworks/MobileDevice.framework/Versions/A/MobileDevice`
(universal; x86_64-срез декомпилирован целиком — `analysis/mobiledevice-decomp/functions/`, 10 189
функций, Ghidra 12.1.4 + REA, индекс `analysis/mobiledevice-decomp/decompile-index.json`).
Все наблюдения — из pseudocode, каждое привязано к адресу.

Структура AMDeviceRef (смещения, из `_AMDeviceConnect` и др.): `+0x10` connectionID, `+0x14` devID
(mux device number), `+0x20` имя (CFString), `+0x30` флаг интерфейса (0=USB), `+0x38` lockdown-
conn struct, `+0x40` SessionID, `+0x94` byte «connected», `+0xa8/+0xb0/+0xf8` companion/CPX/
RemoteXPC refs (приоритет legacy-пути ниже).

## 1. `AMDeviceConnect` (0x12e105)

Порядок для обычного USB-устройства:
```
если (+0x94 == connected) → refcount++ и выходим (контекст уже живой)
companion/Remote-ветки: RemotePairingIsWifiPairableRef → RemoteXPC-подключение через
   dispatch_group + ошибка 0xe800000f «Connecting over RemoteXPC is not supported…»
   (= -0x17fffff1); пропущено для USB-интерфейса
затем: _copy_daemon_name(dev)  → меньше Lockconn-connect и checkin
   ответ сравнивается со «com.apple.mobile.lockdown»: если иной — «not a device this instance
   is tracking» → 0xe8000027?? (фактически -0x17ffffd8 = 0xe8000028/…; см. таблицу ниже)
   ping-successful → соединение закреплено, refcount++
```
Ошибки connect (встреченные в коде):
```
-0x17fffff9 = 0xe8000007BeNullDeviceRef   (param NULL)   [отожмём как kAMDInvalidArgumentError]
-0x17fffff5 = 0xe800000bNotConnected      (lockconn отсутствует)
-0x17fffff1 = 0xe800000fUnsupported       (RemoteXPC не поддерживается для этого тракта)
-0x17ffffed = 0xe8000013InvalidResponse   (нет ответилlocked/anwser Type)
-0x17ffffd8 = 0xe8000028WrongDroid (strange)?  см. уточнение ниже
```
Числа расшифрованы через `_AMDErrorString` (0x145329) → **полная таблица 219 кодов** —
`analysis/amd-errors.tsv` (каждый IRQ = 0xe8000000 | N). См. §6.

## 2. lockdown-checkin: wire-формат (lockconn)

- `__CreateMessageDict` (0x10f2d2): создаёт базовый словарь запроса:
  ```
  {"Request": <имя>, "ProtocolVersion": "2", "Label": <getprogname()>}
  ```
  Поле Label = имя программы-хоста, всё – строки.
- `_lockconn_send_message` (0x1117f6): `[BE32 len][bplist00 payload]`,
  сериализация `CFPropertyListWrite(format=100)`, **payload всегда bplist00 (kCFPropertyListBinaryFormat_v1_0=100)** — в отличие от DL-слоя (XML, см. E06)! Лимит приёма бplist-структур: `0x40000` (REPORTED размер заголовка с ошибкой «的单maximum-header 0x40000»).
- `_lockconn_receive_message` (0x111bbb): читает [BE32] зголohом, затем payload; если у lockconn
  есть SSL-контекст → `SSL_read(...)`; иначе raw recv. Ошиб EOF → `0xe8000004 (kAMDReadError)`,
  таймаут → `0xe800000c (kAMDTimeOutError)`.
- Ответ checkin: словарь с `Error` (строка→ `__ConvertLockdowndError`) и данными ключей.

## 3. `_copy_daemon_name` (0x10f18c) = handshake checkin

```
send {"Request":"QueryType","ProtocolVersion":"2","Label":<progname>}
recv {"Type":"com.apple.mobile.lockdown"} или {"Error": {...}}
AMDeviceConnect сравнивает Type == "com.apple.mobile.lockdown" (CFStringCompare == 0)
```
Современные key: `GetMultipleValues`, `Domain`, `MultipleKeys` (см. intel-таблицу в `analysis/helper-decomp/` и `3. Строки lockdown-checkin` в E02-fragments ниже).

Обычные запросы lockdown:
```
GetValue/GetMultipleValues/SetValue/RemoveValue   (+ Domain, Key)
StartSession (+ HostID, SystemBUID) / StopSession (+ SessionID)    [сессия E05]
Pair / Unpair / ValidatePair / SubmitEscrowBag / RequestEscrowBag
StartService (+ Service, EscrowBag?) → {"Port": <int>, "EnableServiceSSL": bool}
QueryType → {"Type": "com.apple.mobile.lockdown"}
Activate (+ ActivationRecord) / EnterRecovery / Goodbye
```

## 4. Подключение к сервису: `AMDeviceSecureStartService` (0x131822)

Точная последовательность (pseudocode 720 строк):
```
1. CreateMessageDict("StartService"); SetValue(Service = service_name);
   если запрошен escrow — SetValue(EscrowBag = <CFData>)
2. lockconn_send_message / lockconn_receive_message
3. Ответ: {"Error":…string…} → ConvertLockdowndError
   иначе {"Port": CFNumber-Int, "EnableServiceSSL": CFBoolean}
     – Port берётся через CFNumberGetValue(type 9=kCFNumberIntType, 32-бит)
     – EnableServiceSSL не обязан присутствовать
4. __connect_to_port(dev, Port_bswap16(port<<8|port>>8), &addrlen)
5. если EnableServiceSSL===kCFBooleanTrue:
      TurnOnSSLOverSocket(dev, newsock, &sslctx)     → 0x133743 (см. E04)
6. AMDServiceConnectionCreate(newsock, sslctx, CloseOnInvalidate)
   (+ TimeoutConnection / таймаут-оркестрация socket-timen)
7. retry-логика: receive timeout (-0x17fffff4) → «Timed out receiving message from device %u»
   → AMDeviceDisconnect → AMDeviceConnect → StartSession → repeat once
```
Смежные вызовы-обёртки: `AMDeviceStartService` (0x13a4a8, без-SSL вариант) — тот же путь.

Конкретика порта: plist отдаёт порт как host-order число; перед `_connect_to_port`
MobileDevice **меняет местами байты 16-бит**: `(port<<8 | port>>8)` — так как внутри
`_USBMuxConnectByPort` (0xc3c24) ожидают port в network order (наследие дремучей
либэмуx-legacy, где порт в LE…). Для нашего mux (v2/DeviceLink) слать порт плонетвом-числом,
операция байтового порядка на нашем стеке не понадобится. Дальнейшая примечание для libirm:
не даем host принудительно размер больше 0x7fffffff (`AMDServiceConnectionSend` проверяет).

## 5. `_connect_to_port` (0x132e05) — выбор тракта

```
dev+0x94 == 1?
  да → если есть RemoteXPC/companion ref (+0xf8, +0x30!=0) → _USBMuxConnectByPort(devID, port, &socket)
           (0xc3c24 использует legacy-протокол LIBUSBmux; socket создаётся DEMON-ом usbmuxd)
       если есть network sockaddr (самба handed, сохранён в dev) → connect() / AF_INET/AF_INET6
           (SO_NOSIGPIPE через setsockopt)
           ошибка SO → 0xe8000003 (kAMDNoResourcesError)
       нет → «No network address available for device.»
не connected → 0xe8000084 (kAMDDeviceDisconnectedError)
NULL dev/ref  → 0xe8000007
broken socket → 0xe8000004 (kAMDReadError)
```

## 6. AMDServiceConnection: поверхность после старта (0x10ddfe/0x10e4a8/0x10e58c)

- `AMDServiceConnectionCreate(fd, sslctx, options)`: флаг `CloseOnInvalidate`;
  структура: `+0x10` socket, `+0x18` SSL.
- `AMDServiceConnectionSend` (0x10e4a8): raw `send()` или `SSL_write()` — **без какого-либо
  фрейминга**.ケットка должна быть не менее 0 и меньше 0x7fffffff.
- `AMDServiceConnectionReceive` (0x10e58c): `recv()` / `SSL_read()` — тоже без фрейминга.
  ⇒ **Фрейминг `[BE32 len][payload]` делает ВЫШЕСТОЯЩИЙ слой**: DeviceLink (XML; E06) или
  lockdown (bplist00) – мобильная защита выбирается на lockconn-уровне.
- `AMDServiceConnectionInvalidate` (0x10e1fe): SSL_free + close(fd).

## 7. Информация: полный список kAMD*-ошибок

Числовой дискаунт: `_AMDErrorString` (0x145329) — switch на 219 позиций.
Файл: `analysis/amd-errors.tsv`. Ключевые для libirm:

```
0x1..0xe 0xe8000001 kAMDUndefinedError … 0xe800000e kAMDEOFError
0xe800000b kAMDNotConnectedError          — «нет lockconn»
0xe800000d kAMDOverrunError
0xe800000f kAMDUnsupportedError           — RemoteXPC-фолбек
0xe8000013 kAMDInvalidResponseError       — invalid checkin.resp
0xe800001b/1c Missing/Invalid HostID      — сессия:регистр
0xe800001d..0x20 SessionActive/Inactive/MissingSessionID/InvalidSessionID
0xe8000021/22 MissingService/InvalidService (StartService без Service)
0xe8000023/24 Checkin invalid/timeout
0xe8000025 kAMDMissingPairRecordError
0xe800002c kAMDWrongDroidError
0xe800002f..0x34 StartService-семью (options/digest/start)
0xe8000035..0x66 mux-errors + install-family
0xe8000068 kAMDSavePairRecordFailedError
0xe8000069..0x6a Checkin OOM/DeviceTooNew; 0xe800006b DeviceRefNoGood
0xe8000080..0x83 EscrowLocked/PairingProhibited/ProhibitedBySupervision
0xe8000084 kAMDDeviceDisconnectedError    — dev+0x94!=1 в connect_to_port
0xe8000095/96 UserDeniedPairing/PairingDialogResponsePending
0xe80000e8..0xed CUPairing-семья (0xe80000ed RequireCUPairing)
0xe8000104..120 MobileImageMounter-network (TATSU/персонализированные образы)
0xe8000112 kAMDRemoteConnectError
```
Маска для сравнения кода в логах: `0x17ffffff` (положительный REST).

## 8. Хранение пар-рекордов на маке: usbmuxd — санитарный store

`USBMuxSavePairingRecordWithDeviceID` (0xc5fd8) открывает unix-socket на демон и шлёт:
```
{"MessageType":"SavePairRecord", "PairRecordID":<UDID>, "PairRecordData":<bplist data>,
 "DeviceID":<int>;}
→ usbmuxd отвечает {"ResultNum": <errno>} (default при отсутствиответ = 0x16=22=EINVAL)
```
⇒ **паринг-рекорд на хосте хранит usbmuxd** (на macOS — `/var/db/lockdown/<UDID>.plist`,
root-only), а не сам фреймворк. Значит arm-libirm: собственный формате store —
`var/lib/irm/lockdown/<UDID>.plist` под контролем `irmctl`/`irmd` (не root —iliate midi
нужно переопределить только владение store). Чтение — тот же демон
(`USBMuxReadPairingRecord`⼼; см. E01b: ReadPairRecord).

## 9. Выводы для libirm

- Wire-checkin: `[BE32 len][bplist00]` обе стороны, ProtocolVersion="2", Label=getprogname();
  последовательность запросов как выше. Нужен наш bplist-writer (XML писать не обязательно
  для lockdown — только bplist).
- Фрейминг как правило: bsplist на lockdown, XML на DeviceLink, raw на сервисных сокетах.
- Слои раздемы: `irm_muxd` (наш демо mux) ← `irm_connect_to_port` ← `irm_service_start`
  ← `irm_service_connection` (cache fd+SSL).
- kAMD-коды — наш enum от 0xe8000000N (использовать полный list из analysis/amd-errors.tsv).
