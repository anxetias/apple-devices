# 02 — Артефакты для реверсинга (инвентаризация этой машины)

Система: **macOS 15.8.2, x86_64** (Mac — значит цели универсальные; смотрим срез x86_64 или
arm64-срез, если найдём; REA открывает оба среза Mach-O).

## Цели уровня «протокол» (высший приоритет)

| Артефакт | Путь | Что даёт |
|---|---|---|
| usbmuxd | `/System/Library/PrivateFrameworks/MobileDevice.framework/Versions/Current/Resources/usbmuxd` | точная спецификация mux-протокола (Listen/Connect/Result, события) |
| MobileDevice | `/System/Library/PrivateFrameworks/MobileDevice.framework/Versions/Current/MobileDevice` | AMDevice*-API: паринг, TLS, StartService, тайминги |
| AppleMobileDeviceHelper.app | `.../MobileDevice.framework/Versions/Current/AppleMobileDeviceHelper.app` | старт сервисов, синк-хеллпер |
| AppleMobileSync.app | `.../MobileDevice.framework/Versions/Current/AppleMobileSync.app` | движок синка контента (данные/музыка) |
| MobileDeviceUpdater.app | `.../MobileDevice.framework/Versions/Current/Resources/MobileDeviceUpdater.app` | обновление прошивки «device support» |
| MDPrivilegedUSBSupport.xpc | `.../Versions/Current/XPCServices/MDPrivilegedUSBSupport.xpc` | privileged USB (claim интерфейсов) |
| MDRemoteServiceSupport.xpc | `.../Versions/Current/XPCServices/MDRemoteServiceSupport.xpc` | remote-pairing/tunnels (iOS 17+) |

## Цели уровня «приложение» (музыкальный синк, UI-поток)

| Артефакт | Путь | Что даёт |
|---|---|---|
| Music.app | `/System/Applications/Music.app/Contents/MacOS/Music` | медиатека, параметры синка, что вызывает AM-движок |
| Finder | `/System/Library/CoreServices/Finder.app/Contents/MacOS/Finder` | панель устройства, синк-пайплайн Finder |
| AMPDevices | `/System/Library/PrivateFrameworks/AMPDevices.framework` | «новый» слой Devices (общий с Windows Apple Devices!) |
| AMPDesktopUI | `/System/Library/PrivateFrameworks/AMPDesktopUI.framework` | UI-обёртка того же стека |
| Backup.framework | `/System/Library/PrivateFrameworks/Backup.framework` | бэкап-модель (Manifest/Status/Info) |
| DeviceDiscoveryUI / DeviceDiscoveryUICore | `/System/Library/PrivateFrameworks/DeviceDiscovery*.framework` | обнаружение устройств, Wi-Fi |

## Цели уровня «ОС» и «сеть»

- Демон сокета: `/var/run/usbmuxd` (живой сокет на машине) — **наблюдаем в рантайме** (frida-хуки на
  usbmuxd; трафик dump), не дизасмим системный процесс — декомпилируем бинарник из п.1 выше.
- `/System/Library/PrivateFrameworks/iTunesCloud.framework` — облачная часть Apple Music (не в фокусе).
- usbd / ippusbd (`/usr/libexec/usbd`, `/usr/libexec/ippusbd`) — Wi-Fi-модальность / USB-провижининг
  Apple, вторичны, но для tunnels (iOS 17+) полезно знать.

## Цели уровня «устройство» (после получения IPSW)

- Достаётся бесплатно: **Demo/firmware архив Apple** (публичный IPSW) → внутри `usr/local/standalone/...`,
  `dmg` → `lockdownd` с секцией `__TEXT,__services` (полная таблица сервисов конкретной iOS),
  `mobilebackup2`/`afc`-демоны. Метод извлечения сервис-плиста lockdownd:
  `segedit lockdownd -extract __TEXT __services services.plist` (как в доке pymobiledevice3).
- Дополнительно: sysdiagnose с самого устройства.

## Windows (для полного набора)

- Apple Devices / Apple Music из Microsoft Store → содержат `AppleMobileDeviceSupport`-пакет:
  `AMDevices*` DLL, `usbmuxd.exe`, `AppleMobileDeviceService.exe` — удобные x86_64-унифицированные
  сравнительные цели (справка: Wikipedia «Apple Devices — utilizes embedded Apple Application Support»).

## Куда пишем результаты

- `docs/evidence/E##.md` — по одной находке/протокол-вопросу, с:
  - «что искали», «что увидели» (functions/pseudocode/стринги,adresse),
  - «что реализуем в C», «осталось непонятным».
- В конце каждого рабочего дня — краткий отчёт в `docs/evidence/README.md` (сводка).
