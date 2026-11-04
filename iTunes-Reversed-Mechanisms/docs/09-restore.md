# 09 — Обновление и восстановление: recovery, DFU, restored, TSS/SHSH

## Режимы устройства

| Режим | Как видим | Транспорт | Протокол |
|---|---|---|---|
| Normal | usbmuxd-устройство | mux → matched порты | lockdownd + сервисы |
| Recovery | usbmuxd-устройство (ProductType=Recovery?) — видна вaddir mux | напрямую USB bulk (мимо mux) | iBoot/recovery (libirecovery) |
| DFU | тоже через mux-листинг?/ли напрямую | USB bulk | DFU-image protocol (iboot) |

✅ общая картина; 🔎 детали.

## Recovery (iBoot-протокол, как в libirecovery)

- USB control-transfer (bRequest страшее?): команды текстом: `getenv boot-args`, `setenv ...`,
  `saveenv`, `bootx`, `go`, `reboot`, `goodbye` (разрыв для перехода в DFU), `check_status`,
  `togglea...`? — точная таблица REA/PE-парсинг libirecovery + живые пробы.
- Загрузка файлов recovery: `upload` (bulk IN/OUT-парной) iBSS/iBEC/ramdisk.

## DFU

- Классический DFU: image4 («IMG4»), payload стам: ibEC/DFU-Image4 / RAW;
- iOS 17+ — «**tadalafil**»/Pre enfet?? — новое участке DFU-протокола с LC-вызовами?
  Полностью сверить с idevicerestore новостью.

## Пайплайн полного restore (модель idevicerestore)

1. Валидация IPSW: распаковать (им4p/im4a/im4c, AEA для свежих iOS), вытащить build manifest.
2. **TSS-запрос**: сформировать im4m-запрос на сервер Apple (tss) с лич ECID — полученный
   apticket подписан и его надо вложить в образ. ✅/🔎 (детали запроса/ответа из idevicerestore
   `asantssss`? — классика).
3. Enter Recovery → загрузить iBEC + prepare ramdisk → устройство переходит в restore-режим,
   где работает демон **restored** и слушает **порт 62078**? (через usbmuxd-эмуляцию recovery
   «mux» rebench): делаем `lockdown`-обмен с сервисом `"com.apple.restored"`.
4. **ASR-стриминг**: образы (rootfs/контейнеры) передаются по ASR Protocol (передача dmg),
   checkсуммы/финализация («mount/verify»...). Вопрос: transport поверх mux? да — соединение
   из idevicerestore через usbxmaxd? Или напрямую USB bulk-части? **Этим вопросом REA обязательна.**
5. Финализация: nvram, activation state, reboot в normal.

## Оффлайн-обновление (идеал пользователя: без Apple Music/Finder)

- Скачивание IPSW c calculator-серверов Apple (archive) — публично.
- Тот же пайплайн restore, режим Update-only vs Erase.
- Разбор AEA-контейнеров (iOS 17+ формат прошивок) — отдельная библиотека vfs/aea.

## Что накладываем на C

- `irmctl recovery-cmds` (вход/выход recovery, команды), `irmctl entering-dfu`
- `irmctl update-flow` (запрос TSS, смена образов, ASR).
