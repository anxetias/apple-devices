# iTunes Reversed Mechanisms (IRM)

Портативная **C-библиотека**, полностью заменяющая «механизмы iTunes» (в эпоху Apple Music — это
Apple Music / Apple Devices / Finder) для управления iPhone/iPad/iPod с ПК: подключение,
синк/оффлайн-загрузка своих треков, резервные копии, обновление и восстановление устройства.

## Принципы

1. **Только C** — ядро на C11, никаких Python/скриптовых зависимостей в ядре.
2. **Независимость от ОС и Apple-софта** — не требуем MobileDevice.framework, iTunesHelper,
   «Apple Mobile Device Service», Apple Application Support. Всё общение с устройством реализуем сами:
   - напрямую через **libusb** (собственный usbmuxd-движок в процессе: режим «device-mode mux»
     поверх USB, плюс режим клиента системного `usbmuxd`, когда тот есть);
   - свой **plist** (XML + binary plist) серилизатор/парсер;
   - свой **TLS** (vendored mbedTLS) для сессий lockdown;
   - свои клиенты каждого сервиса (afc, house_arrest, mobilebackup2, …).
3. **Знания получаем реверсингом** — декомпилируем и наблюдаем реальные бинарники Apple
   (macOS: Apple Music.app, Finder, MobileDevice.framework, usbmuxd, AMPDevices.framework;
   устройство: lockdownd и его встроенный Services.plist внутри IPSW), фиксируем факты с
   Evidence-ссылками в `docs/evidence/`.
4. **Границы легальности**: мы реверсим *протоколы* (транспорт/сервисы), чтобы работать с
   устройством и **собственными файлами пользователя**. Мы **не обходим FairPlay-DRM** и не трогаем
   оффлайн-кэш подписки Apple Music — это защищённый контент, дешифровка не входит в проект.
   В зоне действия: своя медиатека пользователя (mp3/m4a без DRM), бэкапы своих данных,
   восстановление из публичных архивов прошивок Apple с подписанными SHSH/apticket в момент установки.

## Структура репозитория (план)

```
docs/                 полный путь реверсинга (см. docs/00-roadmap.md)
  evidence/           реестр фактов: декомпилированные доказательства, хуки, дампы сообщений
src/                  C-код (libirm)
  core/      ошибки, буферы, io, конфигурация
  plist/     свой plist (XML + bplist)
  mux/       usbmuxd-протокол: клиент системного демона + собственный mux поверх libusb
  lockdown/  паринг, TLS-сессии, StartService, таблица сервисов
  services/  afc, house_arrest, installation_proxy, notification_proxy, syslog, diagnostics...
  music/     оффлайн-треки: запись в библиотеку устройства (AFC/ATC, лок-файлы, БД)
  backup/    mobilebackup2 (DeviceLink), манифест, шифрование
  restore/   recovery/DFU (irecovery-протокол), ASR, restored, TSS/SHSH
  vfs/       сборка/разбор .ipsw, im4p/im4a/im4c, aea, dmg/hfs
  tone/      конвертация аудио в m4a (AAC) для синка
vendor/       libusb, mbedTLS
tools/irmctl  CLI (наш аналог idevice_*: list, pair, fs, push-music, backup, restore)
tests/
```

## Статус

Стадия: **рекогносцировка/документация → транспорт (usbmuxd+lockdown) → afc → музыка → бэкап → restore**.

Точки входа: `docs/00-roadmap.md` (путь реверсинга) и `docs/02-artifacts.md` (что именно декомпилируем).
