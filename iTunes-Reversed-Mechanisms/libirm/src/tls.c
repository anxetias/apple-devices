/* libirm/src/tls.c — TLS по E04 §3-6 на OpenSSL.
 * Точный порядок Apple-lockssl_handshake (E04 §3):
 *   1) BIO над fd (неблокирующий режим необязателен — работаем через poll);
 *   2) контекст TLS (модерню = TLS1.2+; SSLv23-метод Apple на новых不舒服
 *      сумме всё равно спрашивает TLS 1.2 — E04 §3:2);
 *   3) клиентский сертификат + RSA-ключ из пейр-рекорда (PEM);
 *   4) SSL_new + SSL_set_connect_state (КЛИЕНТ, E04 §3:4);
 *   5) handshake в цикле с select/poll (WANT_READ/WRITE, E04 §3:6);
 *   6) пиннинг: SHA-256 DER peer-сертификата == SHA-256 DER pin-сертификата
 *      (E04 §4: байт-эквивалентность; SHA-256 достаточно — заголовок E04 §4). */
#include "libirm/tls.h"

#include <errno.h>
#include <poll.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

#include <openssl/ssl.h>
#include <openssl/err.h>
#include <openssl/evp.h>
#include <openssl/x509.h>

/* ------------------------------------------------------------------ */
/* Ошибки                                                              */
/* ------------------------------------------------------------------ */

static char g_tls_err[128] = "";
/* Флаг последнего таймаута для irm_tls_read_full (контракт read_full). */
static int g_tls_timed_out;

static void set_err(const char *fmt, ...)
{
	va_list ap;
	va_start(ap, fmt);
	vsnprintf(g_tls_err, sizeof g_tls_err, fmt, ap);
	va_end(ap);
}

const char *irm_tls_error(void)
{
	return g_tls_err;
}

#ifdef IRM_OPENSSL

/* ------------------------------------------------------------------ */
/* Реестр обёрнутых fd (мало соединений — динамический маленький)        */
/* ------------------------------------------------------------------ */

struct tlsent {
	int fd;
	SSL *ssl;
};
static struct tlsent *g_reg;
static size_t g_reg_n, g_reg_cap;

static struct tlsent *reg_find(int fd)
{
	for (size_t i = 0; i < g_reg_n; i++)
		if (g_reg[i].fd == fd)
			return &g_reg[i];
	return NULL;
}

static int reg_add(int fd, SSL *ssl)
{
	if (g_reg_n == g_reg_cap) {
		size_t nc = g_reg_cap ? g_reg_cap * 2 : 8;
		struct tlsent *p = (struct tlsent *)realloc(
			g_reg, nc * sizeof *p);
		if (!p)
			return -1;
		g_reg = p;
		g_reg_cap = nc;
	}
	g_reg[g_reg_n].fd = fd;
	g_reg[g_reg_n].ssl = ssl;
	g_reg_n++;
	return 0;
}

static void reg_del(int fd)
{
	for (size_t i = 0; i < g_reg_n; i++) {
		if (g_reg[i].fd == fd) {
			g_reg[i] = g_reg[g_reg_n - 1];
			g_reg_n--;
			return;
		}
	}
}

int irm_tls_active(int fd)
{
	return reg_find(fd) != NULL;
}

/* ------------------------------------------------------------------ */
/* PEM-помощники (сертификат/ключ из памяти)                            */
/* ------------------------------------------------------------------ */

static X509 *pem_to_x509(const uint8_t *pem, size_t n)
{
	BIO *b = BIO_new_mem_buf((const void *)pem, (int)n);
	if (!b)
		return NULL;
	X509 *x = PEM_read_bio_X509(b, NULL, NULL, NULL);
	BIO_free(b);
	return x;
}

static EVP_PKEY *pem_to_key(const uint8_t *pem, size_t n)
{
	BIO *b = BIO_new_mem_buf((const void *)pem, (int)n);
	if (!b)
		return NULL;
	EVP_PKEY *k = PEM_read_bio_PrivateKey(b, NULL, NULL, NULL);
	BIO_free(b);
	return k;
}

/* DER-дайджест X509 (SHA-256) — для пиннинга E04 §4. */
static int x509_der_sha(X509 *x, unsigned char out[32])
{
	unsigned int n = 32;
	return X509_digest(x, EVP_sha256(), out, &n) == 1 ? 0 : -1;
}

/* ------------------------------------------------------------------ */
/* Wrap                                                                 */
/* ------------------------------------------------------------------ */

int irm_tls_wrap_fd(int fd,
		    const uint8_t *client_cert_pem, size_t cl,
		    const uint8_t *client_key_pem, size_t kl,
		    const uint8_t *pin_peer_pem, size_t pl,
		    int timeout_sec)
{
	g_tls_err[0] = 0;
	if (!client_cert_pem || !client_key_pem) {
		set_err("%s", "tls: пустой сертификат/ключ");
		return -1;
	}
	if (timeout_sec <= 0)
		timeout_sec = 10;

	SSL_CTX *ctx = SSL_CTX_new(TLS_client_method());
	if (!ctx) {
		set_err("%s", "tls: SSL_CTX_new");
		return -1;
	}
	/* E04 §5: модер uninterruptible >= TLS1.2 (NO_SSLv3/NO_TLSv1 Apple). */
	SSL_CTX_set_min_proto_version(ctx, TLS1_2_VERSION);

	X509 *xc = pem_to_x509(client_cert_pem, cl);
	EVP_PKEY *xk = pem_to_key(client_key_pem, kl);
	if (!xc || !xk) {
		set_err("%s", "tls: PEM сертификат/ключ не разобраны");
		X509_free(xc);
		EVP_PKEY_free(xk);
		SSL_CTX_free(ctx);
		return -1;
	}
	if (SSL_CTX_use_certificate(ctx, xc) != 1 ||
	    SSL_CTX_use_PrivateKey(ctx, xk) != 1) {
		set_err("tls: подключение сертификата/ключа (SSL err %lu)",
			ERR_peek_last_error());
		X509_free(xc);
		EVP_PKEY_free(xk);
		SSL_CTX_free(ctx);
		return -1;
	}
	if (SSL_CTX_check_private_key(ctx) != 1) {
		set_err("%s", "tls: ключ не соответствует сертификату");
		X509_free(xc);
		EVP_PKEY_free(xk);
		SSL_CTX_free(ctx);
		return -1;
	}

	/* E04 §5: пиннинг — свою CA-верификацию не включаем; сверим peer
	 * после handshake вручную (SSL_CTX_set_verify(NONE)). */
	SSL_CTX_set_verify(ctx, SSL_VERIFY_NONE, NULL);

	unsigned char pin_sha[32];
	unsigned char peer_sha[32];
	int have_pin = 0;
	if (pin_peer_pem) {
		X509 *px = pem_to_x509(pin_peer_pem, pl);
		if (!px || x509_der_sha(px, pin_sha) != 0) {
			set_err("%s", "tls: pin-сертификат не разобран");
			if (px)
				X509_free(px);
			X509_free(xc);
			EVP_PKEY_free(xk);
			SSL_CTX_free(ctx);
			return -1;
		}
		if (px)
			X509_free(px);
		have_pin = 1;
	}

	SSL *ssl = SSL_new(ctx);
	if (!ssl) {
		set_err("%s", "tls: SSL_new");
		X509_free(xc);
		EVP_PKEY_free(xk);
		SSL_CTX_free(ctx);
		return -1;
	}
	SSL_set_fd(ssl, fd);
	SSL_set_connect_state(ssl);

	time_t dl = time(NULL) + timeout_sec;
	int rc;
	for (;;) {
		rc = SSL_connect(ssl);
		if (rc == 1) {
			break;
		}
		int e = SSL_get_error(ssl, rc);
		if (e == SSL_ERROR_WANT_READ || e == SSL_ERROR_WANT_WRITE) {
			time_t left = dl - time(NULL);
			if (left <= 0) {
				set_err("tls: handshake timeout");
				goto fail;
			}
			struct pollfd pfd;
			pfd.fd = fd;
			pfd.events = (e == SSL_ERROR_WANT_READ ? POLLIN :
				      POLLOUT);
			int r = poll(&pfd, 1, (int)(left * 1000));
			if (r < 0 && errno != EINTR) {
				set_err("tls: poll: %s", strerror(errno));
				goto fail;
			}
			continue;
		}
		set_err("tls: handshake ошибся (SSL err %u)",
			(unsigned)ERR_peek_last_error());
		goto fail;
	}

	/* Пиннинг peer (E04 §4): SHA-256 DER против SHA-256 DER pin-сертификата. */
	if (have_pin) {
		X509 *peer = SSL_get_peer_certificate(ssl);
		if (!peer) {
			set_err("%s", "tls: handshake без peer-сертификата");
			goto fail;
		}
		int ok = x509_der_sha(peer, peer_sha) == 0 &&
			 memcmp(peer_sha, pin_sha, sizeof peer_sha) == 0;
		X509_free(peer);
		if (!ok) {
			set_err("%s", "tls: peer-сертификат не совпал с пейр-рекордом (pinning)");
			goto fail;
		}
	}

	X509_free(xc);
	EVP_PKEY_free(xk);
	SSL_CTX_free(ctx); /* ssl хранит внутренние ссылки до SSL_free */
	if (reg_add(fd, ssl) != 0) {
		set_err("%s", "tls: oom реестра");
		SSL_free(ssl);
		return -1;
	}
	return 0;
fail:
	SSL_shutdown(ssl);
	SSL_shutdown(ssl);
	SSL_free(ssl);
	SSL_CTX_free(ctx);
	X509_free(xc);
	EVP_PKEY_free(xk);
	return -1;
}

void irm_tls_disarm(int fd)
{
	struct tlsent *e = reg_find(fd);
	if (!e)
		return;
	SSL *ssl = e->ssl;
	e->fd = -1; /* вычеркнуть ДО SSL_free (recursive disarm не случится) */
	e->ssl = NULL;
	reg_del(fd);
	SSL_shutdown(ssl);
	SSL_shutdown(ssl);
	SSL_free(ssl);
}

ssize_t irm_tls_read(int fd, uint8_t *b, size_t n, int timeout_sec)
{
	g_tls_err[0] = 0;
	g_tls_timed_out = 0;
	struct tlsent *e = reg_find(fd);
	if (!e) {
		set_err("%s", "tls: fd не обёрнут");
		return -1;
	}
	if (!n)
		return 0;
	time_t dl = time(NULL) + (timeout_sec < 0 ? 1000000 : (timeout_sec ? timeout_sec : 1000000));
	size_t got = 0;
	while (got < n) {
		int rc = SSL_read(e->ssl, (char *)b + got, (int)(n - got));
		if (rc > 0) {
			got += (size_t)rc;
			continue;
		}
		int er = SSL_get_error(e->ssl, rc);
		if (er == SSL_ERROR_ZERO_RETURN) {
			set_err("%s", "tls: EOF (close_notify)");
			break;
		}
		/* SSL_ERROR_SYSCALL с errno EAGAIN/EWOULDBLOCK/EINTR — не ошибка
		 * канала: дожимаем poll'ом (живой GnuTLS/OpenSSL STP на nonblocking
		 * fd так себя и ведёт; иначе получаем ложный EOF посреди сессии). */
		if (er == SSL_ERROR_SYSCALL &&
		    (errno == EAGAIN || errno == EWOULDBLOCK ||
		     errno == EINTR)) {
			errno = 0;
			time_t left = dl - time(NULL);
			if (left <= 0) {
				g_tls_timed_out = 1;
				set_err("%s", "tls: timeout чтения (syscall)");
				break;
			}
			struct pollfd pfd;
			pfd.fd = fd;
			pfd.events = POLLIN;
			(void)poll(&pfd, 1, (int)(left * 1000));
			continue;
		}
		if (er == SSL_ERROR_WANT_READ || er == SSL_ERROR_WANT_WRITE) {
			time_t left = dl - time(NULL);
			if (left <= 0) {
				g_tls_timed_out = 1;
				set_err("%s", "tls: timeout чтения");
				break;
			}
			struct pollfd pfd;
			pfd.fd = fd;
			pfd.events = (er == SSL_ERROR_WANT_READ ? POLLIN :
				      POLLOUT);
			int r = poll(&pfd, 1, (int)(left * 1000));
			if (r < 0 && errno != EINTR) {
				set_err("tls: poll: %s", strerror(errno));
				break;
			}
			continue;
		}
		if (rc == 0 ||
		    (er == SSL_ERROR_SSL || er == SSL_ERROR_SYSCALL)) {
			set_err("tls: read r=%d er=%u (%s)", rc, (unsigned)er,
				er == SSL_ERROR_SYSCALL ?
					strerror(errno) :
					"ssl-lib");
			break;
		}
		set_err("tls: неизвестное состояние чтения (%u)", er);
		break;
	}
	return got;
}

ssize_t irm_tls_write(int fd, const uint8_t *b, size_t n)
{
	g_tls_err[0] = 0;
	struct tlsent *e = reg_find(fd);
	if (!e) {
		set_err("%s", "tls: fd не обёрнут");
		return -1;
	}
	size_t sended = 0;
	while (sended < n) {
		int rc = SSL_write(e->ssl, (const char *)b + sended,
				   (int)(n - sended));
		if (rc > 0) {
			sended += (size_t)rc;
			continue;
		}
		int er = SSL_get_error(e->ssl, rc);
		if (er == SSL_ERROR_WANT_READ || er == SSL_ERROR_WANT_WRITE) {
			struct pollfd pfd;
			pfd.fd = fd;
			pfd.events = (er == SSL_ERROR_WANT_READ ? POLLIN :
				      POLLOUT);
			int r = poll(&pfd, 1, 5000);
			if (r < 0 && errno != EINTR) {
				set_err("tls: poll записи: %s", strerror(errno));
				return sended > 0 ? (ssize_t)sended : -1;
			}
			continue;
		}
		set_err("tls: write (SSL err %u)", (unsigned)ERR_peek_last_error());
		return sended > 0 ? (ssize_t)sended : -1;
	}
	return (ssize_t)sended;
}

/* Контракт как у read_full в lockdown.c: 0 — ровно n; -1 — EOF/ошибка;
 * -2 — таймаут (частичные данные теряются — рамка битая всё равно). */
int irm_tls_read_full(int fd, uint8_t *b, size_t n, int timeout_sec)
{
	g_tls_timed_out = 0;
	size_t got = 0;
	while (got < n) {
		ssize_t r = irm_tls_read(fd, b + got, n - got, timeout_sec);
		if (r < 0)
			return g_tls_timed_out ? -2 : -1;
		if (r == 0)
			return -1; /* clean EOF посреди сообщения */
		got += (size_t)r;
	}
	return 0;
}

int irm_tls_write_full(int fd, const uint8_t *b, size_t n)
{
	size_t got = 0;
	while (got < n) {
		ssize_t r = irm_tls_write(fd, b + got, n - got);
		if (r <= 0)
			return -1;
		got += (size_t)r;
	}
	return 0;
}

#else /* !IRM_OPENSSL */

int irm_tls_wrap_fd(int fd, const uint8_t *c, size_t cl, const uint8_t *k,
		    size_t kl, const uint8_t *p, size_t pl, int ts)
{
	(void)fd; (void)c; (void)cl; (void)k; (void)kl; (void)p; (void)pl; (void)ts;
	g_tls_err[0] = 0;
	set_err("%s", "tls: собрано без IRM_TLS_OPENSSL");
	return -1;
}
ssize_t irm_tls_read(int fd, uint8_t *b, size_t n, int t)
{
	(void)fd; (void)b; (void)n; (void)t;
	set_err("%s", "tls: не собрано");
	return -1;
}
ssize_t irm_tls_write(int fd, const uint8_t *b, size_t n)
{
	(void)fd; (void)b; (void)n;
	set_err("%s", "tls: не собрано");
	return -1;
}
int irm_tls_read_full(int fd, uint8_t *b, size_t n, int t)
{
	(void)fd; (void)b; (void)n; (void)t;
	set_err("%s", "tls: не собрано");
	return -1;
}
int irm_tls_write_full(int fd, const uint8_t *b, size_t n)
{
	(void)fd; (void)b; (void)n;
	set_err("%s", "tls: не собрано");
	return -1;
}
int irm_tls_active(int fd)
{
	(void)fd;
	return 0;
}
void irm_tls_disarm(int fd)
{
	(void)fd;
}

#endif
