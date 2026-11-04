# 06 — plist (XML + binary plist)

Фундамент ВСЕХ протоколов выше AFC (framework обмена lockdown/mobilebackup2/mux — plist).

## Что реализуем в C (свой код, без зависимых либ)

1. **XML-plist**: докт. сущности - минимальный SAX-парсер тамда `plist`-элементов
   (dict/array/string/integer/real/data/date/true/false), энкоды UTF-8. Вывод валидного
   `<?xml version="1.0" encoding="UTF-8"?>` + `<!DOCTYPE plist...>`.
2. **Binary plist (bplist00)**: точная формат-спека (✅ публичная, реализация libplist/apple GS):
   заголовок "bplist00", oflex-таблица, serиализATO rесурсо-объектная таблица, unique-UTF16BE строки,
   TRAILER (offset size, ref size, num objects, top object, offset table offset). И reading + writing
   (устройство принимает и то и свобди; бэкапы пишут bplist).
3. Маппинг типов: `<data>` ↔ base64 (в XML), в bplist — raw.

## Тесты

- Круг: XML↔Dom↔bplist с вложенными dict/array/data/date.
- Байт-соответствие с образцами: берём реальный `Status.plist`/рекорд паринга с машины и сверяем
  наш писатель с libplist (установка brew libplist только для ТЕСТОВ, не для ядра).

## Замечания из практики

- В maxMessages mux-протокола всегда bplist00.
- : исключение «plist мапины» — товары AFC (ниже) НЕ plist-энкоде их сообщение (см. docs/07).
- В им4m/apticket/SHSH-мире — DER/ASN.1, не plist (упомянем в restore).
