# 08 — Резервные копии (mobilebackup2)

Сервис: `com.apple.mobilebackup2` (iOS 4+). Использует надстройку **DeviceLink** поверх plist-канала.

## Структура бэкапа на диске (формат папки)

```
<backup>/
  Info.plist            устройство/атрибуты бэкапа
  Status.plist          статус последнего сессии (SnapshotState?/IsFullBackup...) 🔎
  Manifest.db  (sqlite)  таблица Files: fileID(text, SHA256-hex) | domain | relativePath |
                          flags | file BLOB(plist записи со SnapshotVersion?...)
  <fileID>/<файл>/<data> содержимое (файлы лежат по своим SHA256-ID)
  Manifest.mbdb  (старый iOS 3.x бинарный индекс)
  Файлы доменов в зашифрованном бэкапе: если WillEncrypt — шифруются классы данных? 🔎
```

✅ структура известна (форензика); 🔎 тонкости свежих iOS.

## Флоу сессии (идея из idevicebackup2, сверяем динамикой)

1. StartService `com.apple.mobilebackup2` (+ AFC для lock-файла, + notification_proxy для
   «system suspend»-протокола).
2. DeviceLink-handshake (`DLMessageVersionExchange` версии 300), `DLMessagePing`.
3. `BackupAll/...` команды: Message между хостом и устройством «Send_files...»: `DLMessageGetRequest`
   (устройство шлёт файлы), `DLContentsOfDirectoryRequest`, `DLMessageMoveItems/RenameItems/
   RemoveItems`, `DLMessageProcessMessage` (свойства бэкапа: IsFullBackup...).
4. Полнота/инкрементальность (флаг SnapshotState? «Finished»); ввод пароля для
   бэкапа-с-шифрованием (WillEncrypt: AES; вывод ключей из пароля + EscrowBag/keystore) 🔎.

## Restore-применение

- Обратный порядок: «restore device from backup» (вижу в Apple Devices/Finder):
  → `DLMessageMoveItems`/«Send_files» от хост к устройству + «system» финальные домены.
  Insets: «restore без подготовки» (HFP» domain wipe) — только остальным дата-доменам

## Шифрование бэкапа (WillEncrypt)

- Файли бэкапа отдельного домена AES-CBC?? + PBKDF2?? от пароля («Backup keybag» =
  `Manifest.db`→`keybag` элемент — классический ven:VEN»...). 🔎 E08 — несумнение деталей;
  waypoint: либрари «apple_backup» Python проекте (chrisblask?) — сверим interace split.

## Наши use-case'ы

1. `irmctl backup --full` / инкрементальный: свои данные.
2. `irmctl restore-backup` (только  данные).
3. Читатель бэкапа (просмотр/экспорт содержимого) — bonus.
