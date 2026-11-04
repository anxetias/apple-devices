# 05 — lockdownd / lockdown-протокол

Порт **62078** на устройстве. Протокол поверх TCP: каждая сторона шлёт 4 байта длины (big-endian),
затем **plist-сообщение** (режим: XML или bplist00 — оба валидны; устройство обычно шлёт bplist).
После первичного hello включается **TLS**, и далее всё идёт внутри TLS-сессии.

## Фазы общения

1. **Hello / QueryType**: `{Request:"QueryType"}` → `{Type:"com.apple.mobile.lockdown"}`. ✅
2. **Pair** (одноразово, устройство разблокировано, «Trust» нажат):
   `{Request:"Pair", PairingRecord:{HostID, SystemBUID, HostCertificate, HostRootCertificate}}` →
   `{Error:"...", EscrowBag, DeviceCertificate, PairRecord?}`. Известный двухшаговый артефакт:
   первый Pair отвечает «PairingDialogResponsePending», повторный вызов после «Trust» завершает. ✅/🔎
3. **Session** (при каждом подключении): ValidatePair, затем StartSession — устройство присылает
   SessionCertificate/SessionKey, обе стороны строят TLS; точная формулировка — 🔎.
4. **Обычные запросы**: GetValue/SetValue/RemoveValue (домены: пустой домен — корень;
   ключи `com.apple.mobile.*`, например ProductVersion, ProductType, SerialNumber, UniqueDeviceID,
   ActivationState, IntegratedCircuitCardIdentity...), StartService → {Port, EnableServiceSSL},
   EnterRecovery, StartSession/StopSession, Goodbye, Pair, Unpair. ✅/🔎

## Паринг-рекорд (хост)

Путь macOS: `/var/db/lockdown/<UDID>.plist` (root-only). Примерный состав (iOS 17/18): HostID,
HostPrivateKey/HostCertificate, RootPrivateKey/RootCertificate (итолк — «issuer»-цепочка),
DeviceCertificate, SessionCertificate/SessionPrivateKey, EscrowBag. 🔎 — фактический перечень
ключей прочтем из рекорда после настоящего паринга на машине.

## TLS-сессия

- Клиентский серт — HostCertificate из рекорда; серверный — DeviceCertificate. Проверка цепочки
  RootAuthority; SessionCertificate/SessionPrivateKey выдаются при GetSessionCertificate. 🔎
- После TLS: включая чеки-в формы `checkin` — уточняем реальные поля. 🔎

## Сервисы (порт-мапа конкретной iOS)

- Устройство: бинарник lockdownd из IPSW, метод `segedit lockdownd -extract __TEXT __services`.
- Хост: строки `com.apple.` в `MobileDevice`/`AMPDevices`; в ответе StartService флаг
  EnableServiceSSL: некоторые сервисы требуют TLS (file_relay,Extended и др.), afc и др. — без. 🔎

## Чистка известных легенд

- Различные мифические поля («DHPH», странно-названные флаги) — выверяются только через REA + живые пробы.

## Реализация C (lockdown)

`irm_lockdown_t`: hello, TLS через mbedTLS, словарь значений, `start_service(name)->port+ssl`,
полный паринг (генерация рекорда, сохранение EscrowBag), проверка trust.
