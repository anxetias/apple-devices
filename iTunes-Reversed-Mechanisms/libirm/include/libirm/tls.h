/* libirm — TLS-слой (E04 §3-6, декомпиляция MobileDevice.lockssl).
 * Возьмём OpenSSL (система) вместо mbedTLS на этой фазе: docs/10 допускает оба.
 * Модель: паринг-рекорд → клиентский сертификат+ключ, handshake клиента,
 * пиннинг peer-сертификата (байт-эквивиект DER, E04 §4).
 *
 * Контракт: обёртку берёт irm_tls_wrap_fd(); после успеха чтение/запись fd
 * ИДУТ через irm_tls_read/irm_tls_write (semantika read/write), оригинальные
 * read/write на обёрнутом fd вызывать НЕЛЬЗЯ (сольётся с несоот ветствующими TLS-байтами). */
#ifndef LIBIRM_TLS_H
#define LIBIRM_TLS_H

#include <stddef.h>
#include <stdint.h>
#include <sys/types.h> /* ssize_t */

#ifdef __cplusplus
extern "C" {
#endif

/* TLS client-hфқ handshake E04 §3:
 *   client_cert_pem / client_key_pem — PEM текст (пейр-рекорд, как лежит);
 *   pin_peer_pem                     — ожидаемый peer-сертификат (PEM);
 *   timeout_sec                      — контур handshake (=-без: 10 по умолчанию? строгое значение).
 * 0 — ok (fd обёрнут); -1 — ошибка (irm_tls_error()). После неудачи fd обычно
 * битый (handshake начался) — закрывать стартовым close. */
int         irm_tls_wrap_fd(int fd,
			    const uint8_t *client_cert_pem, size_t cl,
			    const uint8_t *client_key_pem, size_t kl,
			    const uint8_t *pin_peer_pem, size_t pl,
			    int timeout_sec);

/* Все пять I/O-функции возвращают nbytes>=0, 0 = EOF, -1 — ошибка (ERM). */
ssize_t     irm_tls_read(int fd, uint8_t *b, size_t n, int timeout_sec);
ssize_t     irm_tls_write(int fd, const uint8_t *b, size_t n);
/* Эквивалент read_full/write_full lockdown.c: read_full — 0 (ровно n),
 * -1 (EOF/ошибка), -2 (таймаут); write_full — 0 / -1. */
int         irm_tls_read_full(int fd, uint8_t *b, size_t n, int timeout_sec);
int         irm_tls_write_full(int fd, const uint8_t *b, size_t n);

int         irm_tls_active(int fd);
/* Снизить обёртку (SSL_shutdown×2, E04 §3:6); fd НЕ закрывается — его снесёт владелец. */
void        irm_tls_disarm(int fd);

const char *irm_tls_error(void);

#ifdef __cplusplus
}
#endif
#endif /* LIBIRM_TLS_H */
