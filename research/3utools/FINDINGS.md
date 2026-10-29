# Реверс 3uTools: протокол передачи музыки

Исследование того, как 3uTools передаёт музыку на устройство и правит
`MediaLibrary.sqlitedb`, для сравнения с нашей прямой записью базы.
Основной код Apple Devices в этой ветке не трогается.

## Окружение

- 3uTools **9.03.003** (deb `com.3u.3utools`, нативный Linux-билд, Qt5),
  установлен в `/opt/apps/com.3u.3utools` (пользователь ставил сам, deb в
  `~/Загрузки/`). Уже запускался 27.10 — артефакты в
  `~/Загрузки/3uToolsDownloads/` (`record.db`, `setting.cfg`, `cache/`).
- Инструменты: `strace`, `gdb` — есть. `ltrace` — нет (sudo из среды агента
  недоступен: песочница с `no new privileges`; пользователь доустановит при
  необходимости). `sqlite3` CLI нет, но есть `python3` с модулем `sqlite3`.
- `run.sh` 3uTools: работает с **системным usbmuxd**; умеет перезапускать
  его с root при подключении устройства (`usbmuxd --user usbmux`).

## Статические находки (strings/nm по бинарникам)

### Транспорт — тот же стек, что у нас

3uTools несёт собственные копии: `libimobiledevice.so.1`,
`libusbmuxd.so`, `libplist-2.0.so.3`, `libimobiledevice-glue.so`,
`libusb-1.0.so`. Протоколы — стандартные usbmuxd/lockdown/AFC.
Прочее в `lib/`: `libidevicerestore.so`, `libirecovery.so` (прошивки),
`libsqlcipher.so` (шифрованный sqlite), `libcurl`, `libffmpegCore`.

### Чтение медиатеки — прямые SQL к MediaLibrary.sqlitedb

В главном бинарнике зашиты SELECT-запросы к базе устройства:

```sql
SELECT A.item_pid, C.title, B.album, C.total_time_ms, C.year, C.file_size,
       C.location, A.base_location_id, C.media_kind, A.album_artist_pid,
       E.path, H.item_artist AS artist, AA.album_artist AS album_artist
FROM item A
LEFT JOIN album B        ON A.album_pid = B.album_pid
LEFT JOIN item_extra C   ON A.item_pid = C.item_pid
LEFT JOIN base_location E ON A.base_location_id = E.base_location_id
LEFT JOIN item_artist H  ON H.item_artist_pid = A.item_artist_pid
LEFT JOIN album_artist AA ON AA.album_artist_pid = A.album_artist_pid
WHERE C.media_kind = 1
```

- Схема: `item`, `item_extra`, `album`, `base_location`, `item_artist`,
  `album_artist` — та же база, которую правим мы.
- `media_kind = 1` — музыка; отдельные выборки `media_kind = 2 or 1024`
  и `media_kind = 8` (видео/ТВ-шоу).
- Ключевые поля: `item_pid`, `title`, `total_time_ms`, `file_size`,
  `location`, `base_location_id`, `path` (из `base_location`).
- Там же SELECT-ы к фото (`Photos.sqlite`, `ZGENERICASSET`), заметкам,
  записям звонков — всё читается тем же способом (скачивание баз).

### Пути и маркеры

- `/iTunes_Control/iTunes/MediaLibrary.sqlitedb` — целевая база.
- `/iTunes_Control/iTunes/3utools.acc` и `/Documents/3utools.acc` —
  файл-маркер 3uTools на устройстве (назначение выясняется).
- `/iTunes_Control` — корень медиа-раздела.

### Запись в MediaLibrary — в статике НЕ найдена

- INSERT/UPDATE в главном бинарнике — только к локальной `record.db`
  (таблицы `Download`, `Messages`, `Config`; история загрузок, пустая).
- INSERT-ов к `item`/`item_extra` нет → либо SQL генерируется динамически,
  либо база скачивается на диск, правится локально и заливается обратно
  (как делаем мы) — решит динамика (strace).
- `libitab.so` — ложный след: Go/cgo-модуль магазина 3uTools
  (`login`/`buyapp`/`get_region`/`aes_gcm_decrypt`), не медиатека.
- `libidm.so` — AES/cJSON-крипто для серверов 3uTools, не медиатека.
- Упоминания `AFC2`/`InstallAFC2`/`getUrlHowToAfc2` — jailbreak-сервис
  полного доступа к ФС; для музыки на стоковом iOS вряд ли используется.

## Открытые вопросы (закрываются динамикой)

1. Как пишется MediaLibrary.sqlitedb: «скачал → правлю локально → заливаю»
   (как у нас) или иначе?
2. Какие lockdown-сервисы запрашиваются при импорте музыки
   (`com.apple.afc`? `house_arrest`? `com.apple.mobile.???`)?
3. Что лежит в `3utools.acc` и зачем он нужен?
4. Раскладка файлов в `/iTunes_Control/Music` (бакеты `F*/…`?) и формат
   `location` в базе.

## План динамического этапа

1. Запустить 3uTools под `strace -f -e trace=connect,openat,read,write
   -s 8192` (лог в /tmp/opencode), наблюдать:
   - connect к `/var/run/usbmuxd` и первый write — там XML-plist с именем
     запрашиваемого lockdown-сервиса (читаемо в трассе);
   - openat/чтение-запись файлов в кэше 3uTools — поиск локальной копии
     MediaLibrary.sqlitedb;
   - сетевую активность (телеметрия — отдельно отметить).
2. Пользователь делает импорт одной песни через GUI 3uTools (устройство
   подключено), трасса пишется.
3. Разобрать трассу: сервисы, файлы, размеры записей; сравнить с нашей
   схемой записи (медиа-файлы в `/iTunes_Control/Music/F*/`, база —
   скачал/правил/залил, бэкап перед записью).
4. Сверить `3utools.acc` на устройстве (read-only AFC-зонд) до/после.
