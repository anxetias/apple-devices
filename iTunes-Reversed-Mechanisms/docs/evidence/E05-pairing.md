# E05 — Paired трафарет: как MobileDevice парит Mac кандидатом к iOS-устройству

Цель: корпус `analysis/mobiledevice-decomp/`. Ключевые функции:
`_AMDeviceExtendedPairWithOptions` (0x1359c6), `_CreatePairingMaterial` (0x17020c),
`_CreatePairingGoo` (0x170f0e), `_USBMuxSavePairingRecordWithDeviceID` (0xc5fd8),
`_AMDevicePairWithoutOptions(const)` (0x136f78 → 0x135745 AMDevicePairWithCallback).

Counters (связь со всеми предыдущими E): pairing создает пейр-рекорд, который E04
использует при TLS, а E01b читает/сохраняет через usbmuxd.

## 1. Что лежит в пар-рекорде: `CreatePairingMaterial` (0x17020c)

Инициатор: хосту нужно `DevicePublicKey` — берётся locksmith GET `GetValue` (Domain:null,
Key:"DevicePublicKey") из `AMDeviceExtendedPairWithOptions` (0x1359c6, ~line 128):
```
_invalid_device → 0xe8000084
нет CUPairing-сессицы на новой модели → 0xe80000ed (RequireCUPairing)
copy_lockdown_value(dev, NULL, "DevicePublicKey") → ошибка — bail «Failed to query public key»
не CFData → «Invalid public key.»
```
Далее (0x17020c) — всеoste со стороны host:
```
1. pem_read_bio_RSAPublicKey(DevicePublicKey CFData) — большой PEM «-----BEGIN RSA PUBLIC KEY-----»
   (2048-битный RSA ключ устройства)
2. если у host PROT есть: opts HostCert/.hostPrivateKey/RootCert/RootPrivateKey (PEM, CFData)
   PEM_read_bio_RSAPrivateKey(...) / PEM_read_bio_X509(...) — переисползуют стреящие ключи
   (escape-в: E05-живой дож: реиспользование им по опции RECORD hosted pairing)
   Иначе: rootKey = RSA_generate_key(2048, 0x10001)
          hostKey = RSA_generate_key(2048, 0x10001)
3. 3 сертификата (X509 v3, serial 0, notBefore=now, notAfter=now+0x12cc0300=315360000с=10 лет):
      root:  issuer/subject = root; pub=rootKey
             ext 0x57 (NID 87, basicConstraints) "critical,CA:TRUE"      (без key_usage)
             ext 0x52 (NID 82, subjectKeyIdentifier) "hash"
      host:  issuer = root, subject = host; pub=hostKey
             ext 0x57 "critical,CA:FALSE"
             ext 0x52 "hash"
             ext 0x53 (NID 83, keyUsage) "critical,digitalSignature,keyEncipherment"
      device: issuer = root, subject = device; pub=**DevicePublicKey**
             ext 0x57 "critical,CA:FALSE"
             ext 0x52 "hash"
             ext 0x53 "critical,digitalSignature,keyEncipherment"
4. Подписи: root-серт — EVP_sha1 + rootKey (self-signed);
            host/device серты — EVP_sha1 + rootKey (подписаны root)
   (!) Даже на «новых» Macах подпись вот SHA1 — страшная легаси-легитимность Apple
       (iDevice сверяет только sha1? — это закрыто openssl-старым? проверить live Q16)
5. PEM-serialisation выход (X509 → PEM, ключ → PEM) → в регистр «goo»
```

## 2. Рекорд-«goo»: `CreatePairingGoo` (0x170f0e)

```
record = {
  "RootCertificate":    DER(root cert),     // CFData
  "HostCertificate":    DER(host cert),
  "DeviceCertificate":  DER(device cert),
  "RootPrivateKey":     PEM(root key),      // через CreateDataFromPrivateKey
  "HostPrivateKey":     PEM(host key),
  "HostID":             CreateUUID()        // hex-UUID строка — случайный!
}
```
В выводе также добавляются (в `_AMDeviceExtendedPairWithOptions`, 0x1359c6 ~470-520):
```
  "SerialNumber":   [спрошенный device через lockdown (или soft MG IODeviceTree:/product)]
  "WiFiAddress":    [("WiFiMACAddress" в рекорде) с device; если есть]
```
Лог straight: `"SerialNumber: %@\nParingMaterial: %@\nDeviceID: %u"` (typо Apple).

## 3. Отправка на устройство: запрос `Pair` (0x1359c6 ~line 217-260)

```
msg = CreateMessageDict("Pair")   // {"Request":"Pair", "ProtocolVersion":"2","Label":progname}
msg["PairRecord"]         = созданный рекорд БЕЗ приватных ключей хоста:
                            (RootCertificate, HostCertificate, DeviceCertificate, HostID…,
                             — точный набор = CFDictionary copy минус RootPrivateKey/HostPrivateKey;
                              подводимая копия промотана при live-захвате)
msg["PermissionSlip"]     = (если отдали в options)  // есть вариант при защищённом режиме
msg["PairingOptions"]     = (если есть)
msg["HostName"]           = SCDynamicStoreCopyComputerName()
→ lockconn_send_message;  в ответе слушаем:
      {"Error":…} → bail
      {"EscrowBag": CFData}            // + "SessionID"?? — cf_EscrowBag в окрестности
      {"ExtendedResponse": dict}       → out-param *(out) для ExtendedPair
```
Capture: `msg["PairRecord"]` может содержать ключи cert'ов, которые тот защитил,
но приватный ключ — только хостовый (иначе iCloud-пыль, невероятно верх). Их live-точно.

## 4. Ответ и «после»: reconnect + session

```
      EscrowBag (CFData) — device's encrypted rights;    хранится в хост-рекорде
      Extо Response (dict) → out param
      AMDeviceDisconnect(dev)
      AMDeviceConnect(dev)          // новая lockconn-checkin
      AMDeviceStartSession(dev)     // подтверждение, что device принял HostID
   ошибка → «Failed to re-connect to device %u / Failed to restart session», итог
   var2 = -0x17ffffff (0xe8000001) в особOnChange; errno от SavePairRecord (-0x17fffff6 = 0xe800000a kAMDPermissionError)
```

## 5. Хранение хоста: `__SavePairingRecordWithDeviceID` → usbmuxd

(см. `USBMuxSavePairingRecordWithDeviceID`, 0xc5fd8 и E02 §8)
```
socket → usbmuxd:
  {"MessageType":"SavePairRecord", "PairRecordID": "<UDID>",
   "PairRecordData": <bplist record>, "DeviceID": <id>}
  → {"ResultNum": <errno>}   (0 = ok)
```
Замечания: рекорд хранится usbmuxd-ом, НЕ, папку на raw чтении вручную ПРИ潢 host. На macOS
usbmuxd хранит их в `/var/db/lockdown/<UDID>.plist` (нужно root; для наблюдения live).

## 6. Ветрно-нет телефоны: удаленные/的儿子 CUPairing

- `forceLegacy` bool в options → тот же старый протокол. Не задаем для libirm.
- Если dev+0xe0/-remoteXPC создан → «CUPairing required with device %u: 0xe80000ed» (0x1359c6):
  **COVERY intimacy локально лоб** (прим. smart-wifi) — вне libirm-scope (сначала USB).
- ChaperoneCertificate-ветка (TV/Watch) → отдельная воспит scheme; замечено только (не port!).

## 7. Conclusions для libirm

1. `irm_pair` (CLI `irm pair`):
   - GetValue Domain:null Key DevicePublicKey (PEM RSA-损坏)
   - RSA 2048: root+host ключи, 3 серта v3(serial 0, +10 лет, sha1-подписи, ext NIDs 87/82/83)
   - рекорд = {RootCertificate,HostCertificate,DeviceCertificate,RootPrivateKey,HostPrivateKey,
     HostID(uuid),SerialNumber,WiFiAddress}
   - lockconn msg `Pair` (без/host private keys!) → EscrowBag, ExtendedResponse
   - сохранение рекорда в нашем store (`irmd`); повторно startSession→disconnect→
     reconnect→StartSession как подтверждение.
2. Копирайт данные: пайр-рекорды — «полный host master keys» только в HOST store; ейEDIENT-копия на device —
   только публичные серты (Legacy-факт задокументирован).
3. После pairing — TLS handshake из E04 хочет THESE same рекорд-cert'ы (RootCertificate как
   CA, DeviceCertificate как клиентский серт; нет CA-store).
4. Ошибки: RequireCUPairing (0xe80000ed), UserDeniedPairing (0xe8000095),
   PairingDialogResponsePending (0xe8000096), PermissionError (0xe800000a при сбое store).

## 8. Открытые вопросы (Q5-остатки)

- Точный набор ключей в PairRecord, уходящий на устройство (проверка live-захватом
  `irm pair`-имитации; раздельно: проверка EscrowBag-типа CFData? size?).
- Дистанção/совмест�� отдельности ForceLegacy для Wi-Fi — сейчас только presumably.
- Просмотреть, как HostID принимает usbmuxd-пей-запис disclaim (BE установк/NO-об путчах)
  при live.
