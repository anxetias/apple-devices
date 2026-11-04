# E08 (v2) — AppleMobileBackup: полный словарь backup2-протокола

Источник-addon: бинарь
`MobileDevice.framework/Versions/A/AppleMobileDeviceHelper.app/Contents/Resources/AppleMobileBackup`
(x86_64+arm64e, 326 КБ) — DeviceLink-клиент, запускаемый Helper на host (CLI
`--pipe`, классы MBComputerManager{,1,2}/MBConnectionManager/MBFileManager).
В репо: `analysis/apple-mobile-backup-strings.txt` (1195 строк),
фильтр ключей `analysis/am-backup-keys.txt` (312).

## 1. Инициация (после DLMessageVersionExchange 400 из E06)

```
устройство → ["DLMessageDeviceReady"]
host      → { "MessageName": "Hello",     // строка в strings: 'Hello'
              "SupportedProtocolVersions": [ … ] }
устройство→ { "MessageName": "Response",
              "ProtocolVersion": <double> }
  ошибка несовпадения → "Device selected an unsupported protocol version: %0.1f";
  DLErrorConnectingLocked — «device is locked» (KB 401?).
Опции запроса — {"MessageName":"Backup", "TargetIdentifier":…,
                 "Options":{...RootDirectory…}}
```

## 2. Сообщения backup (BackupMessageTypeKey = "BackupMessageType")

Host↔device в DLMessageProcessMessage payload (dict):
```
BackupMessageBackupRequest        – goahead
BackupMessageBackupReplyOK        – device ок
BackupMessageBackupReplyRefused   – с BackupErrorReasonKey
BackupMessageError                – {BackupRestoreError, BackupRestoreFileName}
BackupMessageBackupFinished       – финал: {BackupManifestKey,
                                      BackupFilesToDeleteKey, BackupTotalSizeKey,
                                      BackupAtomicManifestKey?}
BackupMessageSendFilePiece        – host→dev: {BackupFileInfoKey, BackupFileDataKey}
BackupMessageRestoreReplyOK / …Refused
BackupMessageRestoreFileReceived
BackupMessageRestoreApplicationReceived/Sent
BackupMessageRestoreComplete
```
Старые (legacy mobilebackup v1.4) сигналы: `BackupMigrateReadyForBackup`
(„deprecated signal“), `BackupErrorSpringboardNotReady`, `FindMyiPhoneEnabled`.

## 3. Файлы в хранилище (host-side)

```
mdbackup  – куски данных (sha1/sha256 digest: классы MBDigest{,SHA1,SHA256})
mdinfo    – метаданные файла (BackupFileInfo)
mddata    – содержимое (kMBErrorDateKey, kMBUnderlyingErrorsKey)
mbbackup  – atomic-manifest wrapper
файлы Manifest.db inner manifest: версии 5.0–5.2 → legacy обход; <6.1 →
   «throwing out inner manifest и fresh backup» (строки в бинаре!)
```
Status.plist поля: `Backup Success` (bool), `SnapshotState`,
`BackupState`, `Version` («Using version 1 since Version=%@, BackupState=%@ …»).

## 4. Команды CLI AppleMobileBackup (полный словарь):

```
backupWithTargetIdentifier:options:, restoreWithSourceIdentifier:...,
cancelBackupWithTargetIdentifier:, changePasswordWithTargetIdentifier:fromPassword:toPassword:,
extractWithSourceIdentifier:targetIdentifier:domainName:relativePath:password:,
infoWithSourceIdentifier:targetIdentifier:outputFile:, list…, remove…
```
AMSRequests (XPC-сигнатуры в dict: `{AMSRequestKey, AMSMessageSignatureKey}`):
```
AMSBackupRequest, AMSRestoreWithApplicationsRequest, AMSChangeBackupPassword,
AMSEnableCloudBackup, AMSEraseDeviceRequest, AMSBackupCancelTarget,
AMSBackupPercentageKey (прогресс).
```
Restore-опции (перенесены из E08 v1): `RestoreDontCopyBackup`,
`RestorePreserveSettings`, `RestoreSystemFiles`, `ShouldPerformSplitRestore`,
`Password`, `BackupAfterMigrate`, Source/Target Identifier, `ApplicationIDs`.

## 5. mobilebackup2-современный путь

Тот же бинарь говорит и с `com.apple.mobilebackup2` (строки «Backing up from
BackupAgent version %@. Our version: %@», «BackupProtocolVersion»,
«SupportedProtocolVersions»). Это значит — AppleMobileBackup абстрагирует ОБЕ
версии протокола (старая com.apple.mobile.backup запускает backup-protocol v1.4,
новая mobilebackup2 — DL400+«Hello»). Полная семантика каждой ProcessMessage v2 —
на device-стороне, но **ключи хоста уже зафиксированы** (§1–2), плюс
DLMessages из E06 §4 (DLMessageProcessMessage payload, DLRequestFile/DLSendFile).
→ достаточного словаря транспортно-функционального слоя достаточно для
  C-реализации begin-backup/restore без Apple DeviceAgent.

## 6. Хранилище бэкапов на маке (v1)

`_getBackupDirPath` (helper 0x10000a951):
```
path = NSHomeDirectory()/Library/Application Support/MobileSync/Backup
DLEnsureDirectoryExists(path)                    // кэш статический DAT_1000166e0
кэш-прокладка <udid>: FUN_10000a9d3(udid) →
     base/UDID + (DLEnsureDirectoryExists) — без-канонирование, dictcache
```
Внутри бэкапа (старый формат, helper _dateOfBackup 0x100006e7e):
```
<backupdir>/<udid>/Manifest.plist     // NSPropertyListSerialization data
   прочесть → ключ даты (_dateOfBackup) = Last Backup Date/… via NSDictionary
```
(Строка `MobileSync.plist` тоже присутствует в/utility контексте, а фраза agent-строк:
`Backup Path`, `LastBackupComputerName/Type`, `com.apple.iTunes.backup`, iBooksData3.plist…)

## 7. AMS-модель управления бэкапами (легаси, helper)

Методные имена и ключи из helper.strings (`AppleMobileDeviceHelper.m`):
```
AMSGetSourcesForRestoreRequest / AMSGetCompatibleSourcesForRestoreRequest
AMSSourcesForRestoreKey
AMSGetBackupApplications / AMSBackupApplicationsKey
AMSGetBackupInfo / _getBackupInfoForTarget
AMBArchiveBackupRequest / _archiveBackup
_dateOfBackup (0x100006e7e) — читает Manifest.plist
_copyApplicationsInBackup
Backup version is "%@" (%@ vs %@): %@
Backup type is "%@" (%@ vs %@): %@      // legacy sanityLIKE-валидации
Restore Compatibility                    // совместимость restore
```
('Backup речется старым API — "Backup version/Backup type" — это тесты того, что рекорт
совместим, соответственно тип отличен от «create-new».)

## 8. Движок бэкапа (новый; Dulcimer-агент)

В AMPDevicesAgent (глубоко в strings, порядок смежный):
```
BackupMobileDeviceFiber / BackupMobileDeviceThread   // fiber-оркестрация
backupDevice:withReply: (XPC-метод агента, 40208)
didStartBackupForDeviceWithIdentifier:  (40379)
options: backupOptions {ForceFullBackup, EraseDevice}
deviceInfo.supportsBackupRestore / gAppContext->deviceBackupsDisabled
AMSStatus_OK == helperStatus            ← ОПЕРАЦИЯ ИДЁТ ЧЕРЕЗ HELPER-ПУТЬ (E03 fork/фантом)
MobileSync.plist (backup приложение-settings)
iTunesPrefs / SyncSettings / Installed Applications / Applications
iBooksData.plist (1/2/3”), com.apple.iTunes.backup (домен для GetValue?)
```
Бэкап протокол: DL (E06) — сервис `com.apple.mobilebackup2`, классический стек mensajes:
DLMessageProcessMessage {…}, DLRequestFile/DLSendFile, DLCreateDirectory и т.д.
**Иные данные протокола (диагностика) уходят с устройства**: файл на mac приходит через
DLRequestFile пути (E06 §5) — STATUS в infodict per-file.

## 9. Restore (из бэкапа) — options-набор

Строки agent: `restoreOptions != nullptr` + значаения:
```
RestoreDontCopyBackup     / RestorePreserveSettings
RestoreSystemFiles        / ShouldPerformSplitRestore
Password                  / BackupAfterMigrate
Source Identifier         / Target Identifier
SyncedApplications        / restoreOptions
RestoreApplications.plist + RestoreApplications
amsStatus == AMSStatus_OK (helperStatus == confirmation)
```
XPC методы агента (индекс corpus):
```
100655d0f  isRestoreFromBackupInProgressForDevice:withReply:
10065606f  restoreDevice:fromBackup:withPassword:setPasswordInKeychain:eraseDevice:withReply:
100656764  completeRestoreFromBackupForDevice:withReply:
100657cbb  registerForRestoreProgressForDevice:withReply:
(backup-restore progress: 100647c8f backupRestoreProgressInfoForObjectID: …)
```
restore флаги: isBackingUp / isErasing / isRestoringFromLocalBackup (Dulcimer handlerData).

## 10. Полный restore (DFU/Recovery/ASR) — это E09, рядом:

`_AMRestore*` экспортируются из агент-корпуса (методы MobileDevice, перечислены в index):
AMRestoreCreateDefaultOptions, AMRestorePerformDFU/RecoveryMode/RestoreModeRestore,
AMRestorableDeviceRestore, AMRestoreModeDeviceCreate, AMRestoreModeGetLastFailureLog…

## 11. libirm — план по бэкапу

- Мы делаем СВОЙ store: `~/Library/Application Support/MobileSync/Backup/<UDID>` —
  совместимо для ворк-флperiences инструментов (iMazing-style layer): Manifest.plist/Info.plist
  должны писать мы (ручками), по базам/файлам — из DLRequestFile потока.
- Администрация AMS: сами iMAgent-opерации (не пере-используем AMS).
- Мощнее и практичнее реализовать: `irm backup [start|list|info]` →
  StartService(com.apple.mobilebackup2) → DL-фрейминг → DLMessageProcessMessage-ответы.
  Точный словарь фраз 4 DL-таблиц (BackupPhase/BackupDomainVersion…) — задача v2
  (ищется в sync/agent corpus по строкам "Backup"… или через живой тест).

## 12. Остатки для v3

- Semantika каждого ProcessMessage v2 (точные запросы/ответы) — проверить на живом обмене
  (Q13), лишь при расхождении с §1–2 корректировать.
- Дигг `MobileDeviceBackupContext`-объекта в агент-корпусе.
- Проверка «AMSStatus через helper» — как helper получает backup-задание
  (распределённые нотификации, аналогично E03 sync).
- Manifest.db (new-style, iOS-13+): присутствие в mac-side storage — live.
