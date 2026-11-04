# 00 — Дорожная карта реверсинга (путь)

Цель: получить **доказательные** знания обо всех «механизмах iTunes / Apple Music» и реализовать их на C.

## Легенда меток

- ✅ — факт подтверждён публичными исходниками/документацией (либимобильдевайс, pymobiledevice3 и т.п.); повторно сверим в REA-прогоне;
- 🔎 — требуется подтверждение декомпиляцией/наблюдением (основной режим работы);
- ⚠️ — гипотеза, нуждающаяся в проверке.

## Этап 0. Рекогносцировка артефактов

Чек-лист «что анализируем» — в `docs/02-artifacts.md`. На этой машине (macOS 15.8.2) уже локализованы:
Apple Music (Music.app), Finder, MobileDevice.framework (включая бинарник usbmuxd, AppleMobileDeviceHelper,
AppleMobileSync, XPC-сервисы privileged USB / remote), AMPDevices.framework, AMPDesktopUI.framework,
Backup.framework.

## Этап 1. Транспорт: USB → usbmuxd (обязательный фундамент)

Вопросы:
1. Формат сообщений демона usbmuxd (plist-версия протокола ~v1): MessageType, поля Listen / Connect /
   Result, события DeviceAdd / DeviceRemove / Paired / Attached / ConsistencyCheck.
   ✅ известно из libusbmuxd; 🔎 сверим с локальным
   `/System/Library/PrivateFrameworks/MobileDevice.framework/Versions/Current/Resources/usbmuxd`.
2. Байтовый порядок порта в Connect (легендарный swap для legacy-протокола; как именно в plist-режиме). 🔎
3. Протокол «device-mode mux» (когда мы НЕ используем системный демон, а сами говорим по USB bulk
   эндпоинтам): TCP-over-USB фрейминг (mux-заголовки, sync/establish, перенос TCP-потока). 🔎
   Это главная база «не зависеть от ОС»: Windows без демона-драйвера, Linux без системного usbmuxd.
4. Подключение на Windows без Apple-драйвера: libusb-1.0 / WinUSB поверх интерфейсов
   «Apple Mobile Device USB». ✅ в целом известно; 🔎 сверим VID/PID/классы интерфейсов.

Результат этапа: `irmctl list` видит устройства и `irmctl connect 62078` открывает туннель к порту устройства.

## Этап 2. Lockdown: hello, паринг, TLS, сервисы

1. Обмен hello / QueryType, ответ `com.apple.mobile.lockdown`. ✅
2. Паринг: `Pair` с HostID/SystemBUID/HostCertificate..., возврат PairRecord, EscrowBag; хранение
   рекорда (`/var/db/lockdown/<UDID>.plist`, root-only на macOS). ✅/🔎 уточнить состав рекорда на iOS 17/18.
3. TLS внутри lockdown-сессии: чьи сертификаты, TLS 1.2 или 1.3, «session»-дизайн (SessionCertificate,
   SessionKey). 🔎 — ключевое для всех защищённых сервисов.
4. Таблица сервисов: на устройстве — встроенный plist `__services` внутри бинарника lockdownd
   (метод: `segedit lockdownd -extract __TEXT __services ...`); на macOS — кто и как стартует сервисы
   (AppleMobileDeviceHelper? AMPDevices?). 🔎

Результат: `irmctl pair` — полный паринг без Apple-софта; `irmctl info` — чтение значений lockdown.

## Этап 3. Чтение/запись файлов: AFC (+ house_arrest)

1. Полный набор опкодов/ошибок AFC (точные числа). ✅/🔎
2. Служебные файлы синка: `/com.apple.itunes.lock_sync` + оповещения notification_proxy
   (NP_SYNC_WILL_START / SYNC_LOCK_REQUEST / SYNC_DID_START / SYNC_CANCEL_REQUEST...). ✅ из idevicebackup2.
3. Ограничения jailed-AFC (корень Media = /var/mobile/Media; что доступно/запрещено). 🔎

Результат: `irmctl fs` — файловый доступ к Media.

## Этап 4. Музыка: оффлайн-треки (ключевой сценарий пользователя)

Известные механизмы (подробно — в `docs/07-music-sync.md`):
- классический: запись медиафайлов через AFC в `Media/iTunes_Control/...` и управление БД библиотеки;
- лок синка `com.apple.itunes.lock_sync` + notification_proxy;
- **ATC** (`com.apple.atc`, `com.apple.atc2`) — сервис, о котором в FAQ libimobiledevice заявляют, что
  музыка на новых iOS синкается через него; 🔎 высший приоритет исследования;
- фреймворки/демоны macOS движка синка: AppleMobileSync.app, AppleMobileDeviceHelper.app,
  AMPDevices.framework; 🔎 разбираем последовательность сообщений именно из них.

Результат: `irmctl push-music` кладёт свои треки на устройство, и они появляются в приложении «Музыка».

## Этап 5. Резервные копии: mobilebackup2

1. DeviceLink-протокол поверх mobilebackup2 (MoveObjects, GetFreeDiskSpace, Ping, SetBackupRoot...),
   структура бэкапа (`Manifest.db` sqlite, файлы с именами-SHA256, Info.plist, Status.plist),
   WillEncrypt/пароль. ✅/🔎
2. Изменения в свежих iOS / что делает Apple Devices (Windows). 🔎

Результат: `irmctl backup` / `irmctl restore-backup`.

## Этап 6. Обновление / восстановление: recovery, DFU, restored, TSS

Первичный ориентир — открытый исходник idevicerestore, затем сверка с macOS-стеком:
контроль-запросы recovery, im4m/SHSH (TSS-серверы Apple), ASR-стриминг образов, финализация
восстановления, режимы Erase All / update-only. Подробно — в `docs/09-restore.md`.

Результат: `irmctl restore --ipsw ...` (update-only и erase-install).

## Этап 7. Полировка OS-независимости

Windows: установка WinUSB-драйвера (libusb-1.0 умеет работать поверх WinUSB-интерфейса);
Linux: правила udev; macOS: согласие пользователя на доступ к USB (macOS блокирует USB-произвольные
claim'ы впервые — просто один раз разрешить в настройках).

## Порядок работ в REA (декомпиляторы)

1. `usbmuxd` (маленький, точно даст протокол mux) → 2) `MobileDevice` (AM*: паринг/TLS/сервисы) →
3) `AppleMobileSync.app` + AMPDevices (музыкальный синк) → 4) Finder/AMPDesktopUI (UI-поток) →
5) `Music.app` (участие в синке). Каждая находка → `docs/evidence/E##.md`.

## Статус реверс-очереди (сводка, 2026-11)

**E01–E10 написаны** (см. `docs/evidence/README.md`). Итог по слоям:

| Слой | E-доки | Ключевой вывод |
|---|---|---|
| Демон mux | E01/E01b | `[BE16 ver][BE16 msg][BE32 len]` legacy; v2: `[BE32][bplist00]{...}`; device-mode: TCP-over-USB bulk |
| Lockdown | E02 | checkin `[BE32][bplist00]` + QueryType; StartService→Port(CFNumber, host-order)+EnableServiceSSL; 219 kAMD-кодов (`analysis/amd-errors.tsv`) |
| Паринг | E05 | RSA-2048/SHA1-сертификаты, Pair-record через usbmuxd (SavePairRecord) |
| TLS | E04 | TLS по версии iOS (1.2/1.1n); pinning = memcmp DER peer-cert и record |
| Синк-оркестрация | E07 v1+v2 | Dulcimer: notification_proxy-канал sync*; lock `com.apple.itunes.lock_sync`+flock; `com.apple.itunes.syncing` маркер; PostProcess-SQL от устройства в `UserVersionCommandSets 1..26` |
| Медиа-транспорт | E06 | DeviceLink (`[BE32][XML]`, kDLProtocolVersion=400) — база mobilesync/mobilebackup2/ATC |
| Бэкап/рестор-данных | E08 | store `~/Library/Application Support/MobileSync/Backup/<UDID>`; DL-слой mobilebackup2; restore-options |
| Полный restore | E09 | DFU (USB req 0x21/5/ZLP), Recovery (bulk-pipe, iboot-cmds), RestoreMode (port 62078 + ramrod `[BE32][XML]`), ASR (raw-TCP XML, 128 KiB+digest). TSS-подпись Apple → full restore вне C-плана |
| Транскодинг | E10 | host-side CoreAudio (aace/aach, 'brat'); для libirm — своя C-кодек-библиотека (опция) |

**Порядок C-реализации (`libirm` + `irmctl`):**
1. `irm mux` — libusb-claims Apple-интерфейсов, device-mode TCP-over-USB (E01b) + fallback системного демона;
2. `irm plist` — bplist00 (writer/reader, формат=100);
3. `irm lockdown` — checkin/QueryType/StartService/Pair (E02/E05), таблица сервисов из IPSW (Q8);
4. `irm pair` — материал (E05) + хранение рекорда;
5. `irm lockssl`/TLS — ограниченный TLS-клиент с пиннингом (E04);
6. `irm afc` + `irm notify` — файлы Media и notification_proxy (E07);
7. `irm sync` — lock_sync/`syncing` + DL-канал музыки (E07/E06);
8. `irm backup` — mobilebackup2 (E08 v2: словарь закрыт — это последний реверс-догг, он закрыт);
9. `irm transcode` — опционально (E10).

**Live-вопросы** (решаются только с реальным устройством): Q2 (device-mux window/seq),
Q4-tls1.3, Q12 (путь lock-файла), Q13 (живой снимок ATC/DL-обмена). Вторичное: E08 v2 full-DL-словарь.
