# E03 — Оркестрация синка: кто, что и в каком порядке стартует

Наблюдения из декомпиляции AppleMobileDeviceHelper (127 КБ), AppleMobileSync (203 КБ; уже
E-разобран ранее, `/T/irm/re/sync-decomp`, 511 функций) и строк AMPDevicesAgent (18 МБ,
AMPDevices.framework — современный движок; полный декомпил позже). Псевдокод в
`analysis/devicelink-decomp/`, `analysis/`… (helper: `/T/irm/re/helper-decomp` 388 функций).

## 1. Легаси-цепочка (SyncServices-календари/контакты эпохи iTunes): helper — форкер

`AppleMobileDeviceHelper` (`AppleMobileDeviceHelper.m`) — родитель-менеджер AMS-запросов.

Диспетчер `_messageCallback` (0x100001a75) строит таблицу AMS*Request → обработчик:
```
AMSIsSyncEnabledRequest / AMSEnableSyncRequest
AMSGetSupportedDataClassNamesRequest
AMSGetLastSyncDateForDataClassRequest
AMSRegisterClientWithTargetIdentifierAndDisplayNameRequest (0x100002609)
AMSUnregisterTargetRequest (0x100003340)
AMSGetClientIdentifierAndDisplayNameForTargetRequest (0x10000347d)
AMSGetDataClassInfoForTargetRequest / AMSSetDataClassInfoForTargetRequest (0x100003c60 —
     внутри ISyncManager, kAMSDataClassName/kAMSDataClassEnabled/kAMSDataClassReset)
AMSSetRefreshForAllDataClassesForTargetRequest
AMSGetCalendarDayLimit / AMSSetCalendarDayLimit / AMSGetNewRecordCalendarName …
AMSBeginSyncRequest → _sync (0x10000613c)
```

`_sync` (0x10000613c) — главный ход:
```
clientID = CFStringFormat("com.apple.MobileSync.%@", targetID)   // ИДЕНТИФИКАТОР КОМПОНЕНТА
fork();
  ребёнок: execl(path_в_AppleMobileSync_, path,
                 "--device", <UDID кстр>, "--target", <targetID кстр>,
                 ["--reset"|"--clear"], 0);
родитель: iPodSyncWaiter pid=… running тайный runloop:
 distributed-NOTIFICATIONS:
   - com.apple.MobileDeviceSync_progress          (прогресс ребёнка)
   - com.apple.SyncServices.iPodSync.syncVersionMismatchComputerGreater / …DeviceGreater
 отправляет в родителя {AMSStatus: ProgressSyncStarting → ProgressSyncCompleted}
```
⇒ **чтобы повторить контакт/кальсинк, нам нужен собственный AMS-клиент, НЕ форк Apple: всё,
что делает AppleMobileSync, — DeviceLink → `com.apple.mobilesync` (см. E06), плюс SyncServices.**

## 2. Lock-файл MobileSync (mac-side): `/tmp/MobileSync_lock.<target>`

`AppleMobileSync` SyncClient (0x100011138):
```
path = "/tmp/MobileSync_lock.<targetID>"
DLGetFlockForFileWithCancel(timeout=0x43960000 /* float 300.0 — ждать до 5 минут */, path, cancelFn, ctx)
→ flock; стал пустым? постит постнотификацию SyncClient::postNotificationForTargetId…
```
Старая документированная гипотеза «com.apple.itunes.lock_sync» на Mac НЕ укрепляется:
**у SyncServices-синка файл = `/tmp/MobileSync_lock.<target>` (flock)**.

## 3. Современная цепочка медиа-синка: AMPDevicesAgent (lock_sync по классике)

Строки-логи AMPDevicesAgent дают точный порядок (ноты Q6/Q7):
```
sync> posting com.apple.itunes-mobdev.syncWillStart notification     // через notification_proxy!
sync> opening com.apple.itunes.lock_sync file
sync> start waiting for com.apple.itunes.lock_sync lock
sync>   timeout → posting com.apple.itunes-mobdev.syncLockRequest notification
sync> locking com.apple.itunes.lock_sync file
sync> posting com.apple.itunes-mobdev.syncDidStart notification
sync> creating com.apple.itunes.syncing file
… (синк) …
sync> deleting com.apple.itunes.syncing file
sync> unlocking com.apple.itunes.lock_sync file
sync> closing com.apple.itunes.lock_sync file
sync> posting com.apple.itunes-mobdev.syncDidFinish notification
   failure → posting com.apple.itunes-mobdev.syncFailedToStart notification
```
Файлы называются **com.apple.itunes.lock_sync** и **com.apple.itunes.syncing** — имя файла
(локация на Mac уточняется декомпилом AMPDevicesAgent; рядом поле isHomeMusicLibrary,
хэндлер iTunesSyncLockFileRefNum — файл открывается в домашней папке библиотеки).
Device-side ноты идут через сервис **`com.apple.mobile.notification_proxy`** (имя есть
в амп-строках, `handlerData->notificationProxyConnection` — обязательно != nullptr).

## 4. Сервисы/ключи устройства, найденные в AMPDevicesAgent

- `com.apple.mobile.iTunes` + `com.apple.mobile.iTunes.SQLMusicLibraryPostProcessCommands`
  и `com.apple.mobile.iTunes.store` / `.accessories` — domain/серверы iTunes-медиа;
- `com.apple.mobile.tethered_sync`, `com.apple.mobile.sync_data_class`,
  `com.apple.mobile.backup`, `com.apple.mobile.data_sync` (+ domain_changed),
  `com.apple.mobile.wireless_lockdown`, `com.apple.mobile.integrity_relay`,
  `com.apple.mobile.application_installed/_uninstalled`, `installation_proxy`,
  `com.apple.mobile.battery`, `com.apple.mobile.user_preferences`, restriction.
- Папки устройства (файловые константы агента): `iPod_Control`, `iTunes_Control`,
  `Recordings`, `iTunes`, `Music`, `Device`, `Photos`, `DCIM`, `Thumbs`, `Full Resolution`,
  `Videos`, `Contacts`.
- Media-библиотека: `MLMediaLibrary`-обёртки (фото/кального тетвора — tethered_sync),
  **SQLMusicLibraryPostProcessCommands** — кров知识的 SQL-команды для media-библиотеки устройства
  (кандидат на участие в построении библиотеки — проверка на live).
- Внутренности транскодирования в агенте: AAC/LAME-строки → конвертация на mac-side в агенте.
- `deviceInfo.supportsMobileSync` — флаг телефона.

## 5. ATC-гипотеза (Q6): bulk-update

`com.apple.atc*` НЕ нашёлся ни в helper, ни в sync, ни в amp.strings (2026-11, macOS 15.8.2).
⇒ ATC-канал не задаётся строкой в agent'е — либо он внутри MediaLibrary.framework внешней
MLMediaLibrary.*Nothing, либо живёт в Music.app/Finder (Q14). Пока: **приоритет live-теста** —
лочить llogdnd?抓 AFCDump во время живого синка Finder'ом.

## 6. Что получили для libirm

1. Полный список AMS-запросов для синки совместимости календаря/контактов (для полного
   повторения свага не нужен).
2. Lock-порядок: `/tmp/MobileSync_lock.<target>` (flock) + файловые ноты.
3. Modern: `com.apple.itunes.lock_sync`/`.syncing` + ноты в notification_proxy — по порядку,
   как выше; **без соблюдения этого протокола синк медиа может не под[]>
   (точно проверить на live-тесте: если не постить, будет ли синк срываться?)**
4. Каналы устройства: `com.apple.mobile.iTunes*`, `mobile.tethered_sync`, `notification_proxy`.

## 6.5 Бэкап-директория (helper-функция, FYI)

`FUN_10000a951` (helper 0x10000a951): база бэкапов = `NSHomeDirectory() +
"Library/Application Support/MobileSync/Backup"`, `DLEnsureDirectoryExists`;
`FUN_10000a9d3` = кэш-прокладка `<база>/<UDID>` по ключу. Структура old-fashân iTunes
backup — пригодится для E08/Q9.

## 7. Источники



- Псевдокод AppleMobileDeviceHelper: `analysis/helper-decomp/functions/` (388 функций, Ghidra 12.1.4, REA);
- AppleMobileSync — `analysis/sync-decomp/` (ранее), 0x100011138 — flock;
- строки AMPDevicesAgent: `analysis/helper-decomp/AMPDevicesAgent.strings.txt` (полный декомпил позже).

