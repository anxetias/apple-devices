# E04 — lockdown-TLS: как MobileDevice включает SSL (served services и session)

Цель: тот же корпус `analysis/mobiledevice-decomp/`. Все наблюдения — pseudocode调试 привязки.

## 1. Кто вызывает TLS

- **НаPAIRervice-сокетах**: `AMDeviceSecureStartService` (0x131822) при `"EnableServiceSSL": true`
  в ответе StartService → `__TurnOnSSLOverSocket` (0x133743).
- **На lockconn (checkin)**: `AMDeviceStartSession` (0x12eec1) — если ответ StartSession содержит
  `HostCertificate` + `HostCertificateHostPrivateKey` + `DeviceCertificate` (CFData!!)
  → `lockssl_handshake` (0x110c44) ПРОТИВ lockconn-сокета (сертифик бы оки境 — session-TLS,
  модельный для новых iOS; наблюдаемо live).
- **Push-usbmuxd-certs**: RemotePairing/wireless-cert ветки (SrpConnection -, outside эту E-).
- Функции: `lockssl_handshake` (0x110c44) ЕДИНСТВЕННАЯ реализация. Параметры:
  `(dev, connectionID, rootCertData, deviceCertData, rootPrivateKeyData) → SSL*`.

## 2. `__TurnOnSSLOverSocket` (0x133743) — источник сертификатов

```
iPhone: CreatePairingRecordFromRecordOnDiskForIdentifier(UDID, &record)
  (рекорд берётся через usbmuxd ReadPairRecord; см. E02 §8)
record = {
  RootCertificate: CFData(оперативный DER),       // X509 корня хоста
  DeviceCertificate: CFData,                       // X509 хост-сертификата "device" поименовано
  RootPrivateKey: CFData (PEM RSA-ключ корня)
}
lockssl_handshake(dev, socket, RootCert, DeviceCert, RootPrivateKey)
```
(заметь: имена полей исторические — «DeviceCertificate» в момент handshake используется
как КЛИЕНТский сертификат, хотя в рекорде host's cert-цепочки записаны наоборот; это
артефакт Apple — не догадка, а имена полей из декомпила).

## 3. `lockssl_handshake` (0x110c44) — точный порядок

```
1. BIO_new(BIO_s_socket()); BIO_int_ctrl(BIO_CTRL=0x6, SET_NBIO…) — уп.CREATED non-blocking
2. SSL_CTX_new(SSLv23_method())                      // НЕ TLS_method!
      SSL_CTX_ctrl(SSL_CTX, SET_OPTIONS=0x20, options, NULL), где
      options = 0x3000000   (SSL_OP_NO_SSLv3|SSL_OP_NO_TLSv1)  — всегда
      iOS < 9.0 → +0x8000000 (NO_TLSv1_2)  — «ios version is older than 9.0. Disabling tls version 1.2.»
      iOS < 4.0 → +0x1000000 (NO_TLSv1_1) — «…older than 4.0. Disabling tls version 1.1.»
      ⇒ современные i-device (9.0+): TLS 1.2 и старше только (NO_SSLv3, NO_TLSv1),
        TLS 1.3 в опциях не управлен (не запрещён) — на старом OpenSSL 1.x его не было в фреймворке…
        (внутренний BoringSSL-слой; уточнить live-выводом)
3. Сертификаты: X509 из DER-данных (d2i_X509) → SSL_CTX_use_certificate
   RSA-ключ: PEM_read_bio_RSAPrivateKey → SSL_CTX_use_RSAPrivateKey
4. SSL_new; SSL_set_connect_state (клиент!)
5. SSL_set_verify(SSL, verify_mode=3, __ssl_verify_callback)
      3 = SSL_VERIFY_PEER | SSL_VERIFY_FAIL_IF_NO_PEER_CERT (обе стороны обязаны показать серт)
   SSL_set_verify_depth(0)
   SSL_set_ex_data(idx = _peer_certificate_data_index, expectedPeerDER)
6. SSL_do_handshake цикл:
   while ((ret = SSL_do_handshake()) != 1):
        err = SSL_get_error(...)
        select(WANT_READ/WRITE) c таймаутом; возвращаемся в цикл («following a retry»)
        0/timeout → «select timeout (socket %d)», SSL_shutdown x2 + SSL_free
        фатальная ошибка → SSL_shutdown x2 + SSL_free, лог «SSL handshake fatal lower level error %d»
```
Замечания:
- Это **КЛИEНТский** handshake (SSL_set_connect_state) — хотя после StartService со стороны
  хоста подключаются к двум розеточным port'ам; на lockconn-сокете роль client а в
  опиоиды handshake 中心城区.
- Сертификат проверки пенного pipelined: дело не в ОС-сто Rolex CA — всё ВЫШЛО из пейр-рекорда.

## 4. Пиннинг: `__ssl_verify_callback` (0x11153e)

```
X509_STORE_CTX_get_error(ctx) ∈ {ok}; CERT = X509_STORE_CTX_get_current_cert
procured SSL Из X509_STORE_CTX_get_ex_data(ctx, SSL_get_ex_data_X509_STORE_CTX_idx())
expected = SSL_get_ex_data(ssl, _peer_certificate_data_index)
i2d_X509(cert) → DER; memcmp(DER, expectedDER, len) == 0 → verify=1 (ok)
иначе → 0 («Error verifying cert: unable to compare»)
```
⇒ пиннинг не по цепочке CA, а по **байт-эквивалентности peer-сертификата** сертификату,
который хранится в пар-рекорде ( поменённый при Pairing). Для libirm достаточно
сравнить SHA-256 DER peer-сертификата с кодом из рекорда (или полную DER-строку).

## 5. Политический вывод для libirm

- Собственный TLS-слой: TLS 1.2 client, клиентский серт+ключ из нашего рекорда;
  дез-phonenumber: NO_SSLv3/NO_TLSv1 (соответствие версий iOS). Настройки:
  - младше 9.0.0 → NO_TLSv1.2 (только TLS1.1/1.0)
  - младше 4.0.0 → NO_TLSv1.1
  - Модерн (9.0+) → TLS1.2+  (м.UserID TLS 1.3 live)
- Сительский verify(NEEDPeer) + pinning DER==record-DER (или SHA-256), Никаких CA-root ввод_data.
- Крипто-RSA-ключи: PEM RSA 2048 — генерировать сами (E05) или mbedTLS/generик библиотека.
- Select-loop retry нужен (nonblocking BIO), т.к. дексcriptor мультиплексируется.

## 6. Непроверено (проверить live; Q4-фолбек)

- SSL опции BoringSSL-level (соответствие версии; TLS1.3 support) — не светится из
  середины 15.8 x86_64 MobileDevice; нужно фид через Live TLS sniff (frida/E02-lav).
- Использование SessionCertificate от ответа StartSession в отдельно ветке — модельная
  схема (host-cert+private-key в ANSWERе: вещь STRICTсом для personalization); сравнить на live.
