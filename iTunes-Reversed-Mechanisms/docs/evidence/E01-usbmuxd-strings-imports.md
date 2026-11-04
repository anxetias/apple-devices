# E01 — usbmuxd: карта протокола (этап 1: строки+импорты)

## Цель/идентичность
- Путь на диске: `/System/Library/PrivateFrameworks/MobileDevice.framework/Versions/A/Resources/usbmuxd`
  (через symlink Versions/Current), формат: Mach-O universal, исследуемый срез **x86_64**.
- sha256: `0f671730d42b41789bd977a4ef6b26cfcaeab40caa6daa9c12bb9a1b8435008d` (universal);
  срез x86_64 отдельно: 176 928 байт.
- Идентификация: `@(#)PROGRAM:usbmuxd PROJECT:AppleUSBDeviceMux-543.0.0.700.1`,
  строка-версия `usbmuxd-543.0.0.700.1`, bundle id `com.apple.usbmuxd`.
- Символы: бинарник striped (только импорты nm U); **внутренние имена функций восстановимы** из
  `__PRETTY_FUNCTION__`-строк (см. секцию «функции»).

## Публичный сокет
- Unix-сокет: **`/var/run/usbmuxd`, `socket(AF_UNIX, SOCK_STREAM)`** (подтверждено строками).
- Также работает как launchd-сервис с ключами «CheckIn»/«Sockets»/«Listeners»
  («launch_msg(%s) IPC failure», «Check-in failed»).
- Профиль-превычек: `/Library/Preferences/com.apple.usbmuxd.plist`; наблюдаемые ключи настроек:
  `ProtocolVersion` (число; при `!number`/`invalid` — журнал; `Explicitly requesting version %ld`),
  `BlackList` (array!), `DisallowNCMMode`, `WirelessPairingEnabled`, `DisallowNetwork`,
  `AllowNCMBonjour`, `DebugLevel`, `DebugTesting`, `LogPackets`, `DumpCorrupt`, `LogNotifications`,
  `DisallowTCP`, `TestTooNew`, `DontCleanup`, `DropPacketsIn/Out`, `USBKDPSupport`,
  `LogBonjourActivity`. (Это же — наша карта для «режима демона на Linux/Win».)

## plist-протокол клиента (версия 1) — названия MessageType
Найдены ровно такие значения: **Listen, Connect, Result, Attached, Detached, Paired, Logs,
ListDevices, ListListeners, ReadBUID, ReadPairRecord, SavePairRecord, DeletePairRecord**.

## Ключи plist-сообщений
`kLibUSBMuxVersion`, `ClientVersionString`, `Number`, `String`, `DeviceID`, `LocationID`,
`PortNumber`, `ProgName`, `ProcessID`, `BundleID`, `DeviceList`, `ListenerList`, `ConnType`,
`BUID`, `PairRecordID`, `PairRecordData`, `Properties`, `ProductID`, `SerialNumber`,
`USBSerialNumber`, `UDID`, `ConnectionType`, `ConnectionSpeed`, `EscapedFullServiceName`,
`InterfaceIndex`, `NetworkAddress`, `Network`.

> Вывод: паринг-рекорды теперь живут в **usbmuxd** (Read/Save/DeletePairRecord + ключи
> PairRecordID/PairRecordData/BUID) — источник правды постепенно переехал от `/var/db/lockdown`
> к мускулу паринга в usbmuxd. Для нашего клиента это значит: паринг-рекорд мы должны сохранять
> в собственном файле хоста и отдавать устройство-парность через SavePairRecord/ReadPairRecord.
> 🔎 (подтверждение формата сообщений — после декомпиляции; сейчас только строковый уровень.)

## Подключения
- Есть-mode: network-режим (`MuxNetworkInitiateConnect`), USB-режим (`MuxTCPInitiateConnect`),
  журнал «Received tcp packet from %s, %d->%d has no matching local client».
- Bonjour/доступ Wi-Fi: сервисы `_apple-mobdev._tcp` и `_apple-mobdev2._tcp,%08x`
  (= «LOCKDOWN_V2_BONJOUR_SERVICE_NAME»), класс `USBMuxBonjourDeviceListenerCreate/...`; класс
  режим «Bonjour over NCM», `EscapedFullServiceName`, `AttachedInterfaceIndex`, `NetworkAddress`.
  `_apple-mobdev2` несёт `%08x` (похоже на хэш/LabelText-серивис-инстаnс).

## Device-mode mux (USB bulk, «без демона») — ВАЖНО для OS-независимости
Свидетельства из строк демона (то, что он сам делает поверх USB):
- **V handshake**: `MuxInterfaceVersionSend`, `MuxVersionInput` («version packet too small»,
  «non-version packet received», «message from %s spanned more than one buffer»),
  результат: «Detected version %u features %x on interface %s»; «Device %s reported version %u
  which is too new»; «device %d@%#x supports TCP resend» (фичи-бит «TCP resend»!).
- **Фрейминг v1**: `MuxInterfacev1Receive`/`v1Send` — «Dropping packet ... Received %d, expected %d
  bytes», «unexpected protocol %d».
- **Фрейминг v2**: `MuxInterfacev2Receive`/`v2Send` — пере-прием: «Error: detected duplicate packet.
  Expected %d received %d», «expected sequence %d got %d from %s» (нумерация пакетов + ACK),
  `MuxInterfaceZLPSent` (zero-length packet), `MuxInterfaceLogLevelSend` (лог-канал «Log from %s://%s»).
- USB-низ: `MuxClearPipeStall`, «Need contiguous memory for isoch», BOS descriptor чтение,
  `GetMaxOutstandingReads` («max outstanding reads for %s running at %s speed is %u»,
  скорости `full`/`high`), serial из IORegistry-ключа **«USB Serial Number» → UDID**.
- KDP: `KDPStartListening` — демон **также** слушает kernel-debug USB devices («Listening for
  KDP USB devices...») если `USBKDPSupport`.
- Windows-режим NCM: `MuxNetwork*` + Bonjour-over-NCM (подсказка к Windows Wi-Fi).

## Интеграция с MobileDevice.framework (импорты nm)
```
_AMDGetPairingRecordDirectoryPath
_AMDServiceConnectionGetSecureIOContext
_AMDServiceConnectionGetSocket
_AMDServiceConnectionReceive
_AMDServiceConnectionSend
_AMDevicePreflightOperationCreate
_AMDevicePreflightOperationGetRunLoopSource
```
+ `SystemBUID`, `SystemConfiguration` (получение SystemBUID), «preflighting failed for WiFi device».

> Вывод: даже сам демон остаётся «клиентом» AMD-слоя для защищённых сервисных
> соединений (SecureIOContext) и preflight-паринга. Значит большая логика «настоящего»
> паринга/секьюрити живёт в MobileDevice.framework (след. цель E02/E04).

## Внутренние имена функций (из `__PRETTY_FUNCTION__`-строк)
HandleDeviceAttach / HandleDeviceDetach / HandleDevicePaired / HandleDeviceFree / HandleNewClient /
HandleNewBlacklist / ClientStartListening / ClientSendDictionary / ClientDeviceArrayResult /
ClientResult / StartListeningForClients / StartListeningForUSBDevices / StartListeningForUSBInterfaces /
StartListeningForBonjourDevices / USBMuxConfigureNewClientSocket / USBMuxExamineEnvironment /
USBMuxBonjourDeviceListenerCreate|ScheduleWithRunLoop|UnscheduleFromRunLoop / MuxTCPInput /
MuxTCPInitiateConnect / MuxNetworkInitiateConnect / MuxInterface(VersionSend|VersionSent|v1Receive|
v1Send|v2Receive|v2Send|WriteComplete|LogLevelSend|ZLPSent|Notification) / WriteAsyncInternal /
GetDeviceProduct|Metadata|SerialNumber / prefs_create_watch_event|file_changed|dir_changed /
parse_settings_file / shutdown_timer_fired / handle_sig_term / KDPStartListening / KDPInterfacesFound /
USBHeartbeat / AttachDeviceToNCM «[Override - Bonjour over NCM] Attaching DeviceID %lu (%@)(%@)».

## Чего требует следующий проход (после Ghidra)
1. Точный байтовый layout: plist-протокол (сначала 4 байта длины, и bplist00 потом? — «spanned
   more than one buffer» намекает на префикс), легаси-протокол, TCP-v1/v2 фрейминг и «порт-байты».
2. Порядок и семантика `Result` (Number/String) для ошибок.
3. Демо-материалы: лог-строки готовы к перекрестной проверке при реализации.

## Как мы это зафиксировали
- Нативные инструменты: `lipo -thin x86_64`, `strings -a`, `nm -a/-ua`, `otool -L`.
- Грепы строк: `/private/var/folders/.../T/irm/re/usbmuxd.strings` (сохранён).
- Следующий шаг: REA+Ghidra (после рестарта OpenCode, чтобы GHIDRA_INSTALL_DIR подхватился)
  → псевдокод HandleNewClient / ClientStartListening / обработка MessageType → E01 часть 2.
