/* libirm/src/lockdown.c — lockdown-клиент (checkin/запросы).
 * Форматы и семантика — E02 §2-4 (MobileDevice.framework), заголовок — lockdown.h. */
#include "libirm/lockdown.h"
#include "libirm/mux.h"
#include "libirm/tls.h"
#include "libirm/xmlplist.h"

#include <errno.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/time.h>
#include <unistd.h>

#include <stdlib.h> /* getprogname() в POSIX-наборе BSD/mac */
/* Портирование на Linux (apple-devices): glibc не имеет BSD getprogname(),
 * но имеет эквивалент program_invocation_short_name() из <errno.h>. */
#if defined(__linux__) && !defined(getprogname)
#include <errno.h>
#define getprogname() program_invocation_short_name
#define IRM_HAVE_GETPROGNAME 1
#endif

#if defined(__APPLE__) || defined(__BSD__)
#define IRM_HAVE_GETPROGNAME 1
#endif

/* ------------------------------------------------------------------ */
/* Ошибки                                                              */
/* ------------------------------------------------------------------ */

static char g_err[192] = "";

static void set_err(const char *fmt, ...)
{
	va_list ap;
	va_start(ap, fmt);
	vsnprintf(g_err, sizeof g_err, fmt, ap);
	va_end(ap);
}

const char *irm_lk_error(void)
{
	return g_err;
}

/* ------------------------------------------------------------------ */
/* Состояние соединения                                                */
/* ------------------------------------------------------------------ */

struct irm_lk {
	int fd;              /* сырой туннель к lockdown-у (владение) */
	uint32_t device_id;  /* mux DeviceID (StartService→Connect на сервис) */
	char label[64];
	int tls;             /* 1 = fd обёрнут в TLS (session-TLS после StartSession) */
	int timeout_sec;     /* SO_RCVTIMEO-аналог для TLS-цикла (0 = без лимита) */
};

/* ------------------------------------------------------------------ */
/* BE32-фрейминг (точные чтения/записи, E02 §2)                        */
/* ------------------------------------------------------------------ */

static void put_be32(uint8_t *p, uint32_t v)
{
	p[0] = (uint8_t)(v >> 24);
	p[1] = (uint8_t)(v >> 16);
	p[2] = (uint8_t)(v >> 8);
	p[3] = (uint8_t)v;
}

static uint32_t get_be32(const uint8_t *p)
{
	return ((uint32_t)p[0] << 24) | ((uint32_t)p[1] << 16) |
	       ((uint32_t)p[2] << 8) | (uint32_t)p[3];
}

static int write_full(int fd, const uint8_t *b, size_t n)
{
	while (n > 0) {
		ssize_t w = write(fd, b, n);
		if (w < 0) {
			if (errno == EINTR)
				continue;
			return -1;
		}
		if (w == 0)
			return -1;
		b += (size_t)w;
		n -= (size_t)w;
	}
	return 0;
}

/* 0 — ок; -1 — EOF; -2 — таймаут; -3 — errno-ошибка. */
static int read_full(int fd, uint8_t *b, size_t n)
{
	while (n > 0) {
		ssize_t r = read(fd, b, n);
		if (r < 0) {
			if (errno == EINTR)
				continue;
			if (errno == EAGAIN || errno == EWOULDBLOCK)
				return -2;
			return -3;
		}
		if (r == 0)
			return -1;
		b += (size_t)r;
		n -= (size_t)r;
	}
	return 0;
}

static void apply_rcvtimeo(int fd, int timeout_sec)
{
	if (timeout_sec <= 0)
		return;
	struct timeval tv = { timeout_sec, 0 };
	setsockopt(fd, SOL_SOCKET, SO_RCVTIMEO, &tv, sizeof tv);
}

/* Единая точка записи: при session-TLS — через irm_tls_write_full (тот же
 * BE32-фрейминг, но внутри TLS), иначе сырой fd. */
static int lk_wr(irm_lk_t *lk, const uint8_t *b, size_t n)
{
	return lk->tls ? irm_tls_write_full(lk->fd, b, n)
		       : write_full(lk->fd, b, n);
}

/* Единая точка чтения; контракт read_full (0/-1 EOF/-2 таймаут/-3 errno). */
static int lk_rd(irm_lk_t *lk, uint8_t *b, size_t n)
{
	if (!lk->tls)
		return read_full(lk->fd, b, n);
	int rc = irm_tls_read_full(lk->fd, b, n, lk->timeout_sec);
	return rc == 0 ? 0 : (rc == -2 ? -2 : -1);
}

/* ------------------------------------------------------------------ */
/* Open/close                                                          */
/* ------------------------------------------------------------------ */

irm_lk_t *irm_lk_attach_fd(int fd, int timeout_sec)
{
	g_err[0] = 0;
	if (fd < 0) {
		set_err("%s", "bad fd");
		return NULL;
	}
	irm_lk_t *lk = calloc(1, sizeof *lk);
	if (!lk) {
		set_err("%s", strerror(ENOMEM));
		return NULL;
	}
	lk->fd = fd;
	lk->device_id = 0;
	lk->label[0] = 0;
	lk->tls = 0;
	lk->timeout_sec = timeout_sec > 0 ? timeout_sec : 0;
	apply_rcvtimeo(fd, timeout_sec);
#if defined(IRM_HAVE_GETPROGNAME)
	const char *pn = getprogname();
	snprintf(lk->label, sizeof lk->label, "%s",
		 pn && *pn ? pn : "libirm");
#else
	snprintf(lk->label, sizeof lk->label, "libirm");
#endif
	return lk;
}

irm_lk_t *irm_lk_open(const char *mux_path, uint32_t device_id, uint16_t port,
		      int timeout_sec)
{
	g_err[0] = 0;
	/* mux v1 Connect: {"MessageType":"Connect","DeviceID":SInt32,
	 * "PortNumber":SInt16} → Result==0. Порядок байт порта и доп-поля
	 * кадра (ClientVersionString/ProgName/kLibUSBMuxVersion) —
	 * внутри irm_mux_connect (E01b §3/§10). */
	int fd = irm_mux_connect(mux_path ? mux_path : IRM_MUX_DEFAULT_SOCKET,
				 device_id, port, timeout_sec);
	if (fd < 0) {
		set_err("mux Connect: %s", irm_mux_error());
		return NULL;
	}

	irm_lk_t *lk = irm_lk_attach_fd(fd, timeout_sec);
	if (!lk) {
		irm_mux_close(fd);
		return NULL;
	}
	lk->device_id = device_id;
	return lk;
}

void irm_lk_close(irm_lk_t *lk)
{
	if (!lk)
		return;
	if (lk->fd >= 0) {
		if (lk->tls)
			irm_tls_disarm(lk->fd); /* SSL_*flare до close */
		close(lk->fd);
	}
	free(lk);
}

int irm_lk_fd(const irm_lk_t *lk)
{
	return lk ? lk->fd : -1;
}

uint32_t irm_lk_device_id(const irm_lk_t *lk)
{
	return lk ? lk->device_id : 0;
}

void irm_lk_set_label(irm_lk_t *lk, const char *label)
{
	if (!lk)
		return;
	snprintf(lk->label, sizeof lk->label, "%s",
		 label && *label ? label : "libirm");
}

/* ------------------------------------------------------------------ */
/* Отправка / приём                                                    */
/* ------------------------------------------------------------------ */

int irm_lk_send(irm_lk_t *lk, const irm_bp_node *dict)
{
	g_err[0] = 0;
	if (!lk || !dict || irm_bp_type_of(dict) != IRM_BP_DICT) {
		set_err("%s", "internal: send expects dict");
		return -1;
	}
	uint8_t *payload = NULL;
	size_t plen = 0;
	if (irm_bp_write(dict, &payload, &plen) != 0) {
		set_err("%s", "bplist write failed");
		return -1;
	}
	if (plen == 0 || memcmp(payload, "bplist00", 8) != 0) {
		set_err("%s", "internal: payload is not bplist00");
		free(payload);
		return -1;
	}
	if (plen > IRM_LK_RECV_LIMIT) {
		set_err("payload %zu > 0x%x", plen, IRM_LK_RECV_LIMIT);
		free(payload);
		return -1;
	}

	uint8_t hdr[4];
	put_be32(hdr, (uint32_t)plen);
	int rc = lk_wr(lk, hdr, sizeof hdr);
	if (rc == 0)
		rc = lk_wr(lk, payload, plen);
	free(payload);
	if (rc != 0) {
		set_err("send: %s", lk->tls ? irm_tls_error() : strerror(errno));
		return -1;
	}
	return 0;
}

irm_bp_node *irm_lk_recv(irm_lk_t *lk)
{
	g_err[0] = 0;
	if (!lk) {
		set_err("%s", "internal: recv without conn");
		return NULL;
	}
	uint8_t hdr[4];
	int rc = lk_rd(lk, hdr, sizeof hdr);
	if (rc != 0) {
		set_err("recv hdr: %s",
			rc == -2 ? "timeout (kAMDTimeOutError 0xe800000c)"
			: rc == -1 ? (lk->tls ? (irm_tls_error() && *irm_tls_error() ? irm_tls_error() : "EOF (TLS-канал)")
					      : "EOF (kAMDReadError 0xe8000004)")
				   : strerror(errno));
		return NULL;
	}
	uint32_t len = get_be32(hdr);
	if (len > IRM_LK_RECV_LIMIT) {
		set_err("incoming 0x%x > limit 0x%x", len, IRM_LK_RECV_LIMIT);
		return NULL;
	}
	if (len < 8) {
		/* bplist00 минимум 8 байт; осушаем поток целиком, иначе
		 * остаток «съест» следующий header как свой. */
		uint8_t drain[64];
		size_t to_read = len;
		while (to_read > 0) {
			size_t chunk = to_read < sizeof drain ? to_read : sizeof drain;
			if (lk_rd(lk, drain, chunk) != 0)
				break;
			to_read -= chunk;
		}
		set_err("incoming %u < bplist00 header", len);
		return NULL;
	}
	uint8_t *buf = malloc(len);
	if (!buf) {
		set_err("%s", strerror(ENOMEM));
		return NULL;
	}
	rc = lk_rd(lk, buf, len);
	if (rc != 0) {
		set_err("recv body: %s",
			rc == -2 ? "timeout (kAMDTimeOutError 0xe800000c)"
			: rc == -1 ? (lk->tls ? (irm_tls_error() && *irm_tls_error() ? irm_tls_error() : "EOF (TLS-канал)")
					      : "EOF (kAMDReadError 0xe8000004)")
				   : strerror(errno));
		free(buf);
		return NULL;
	}
	/* payload — bplist00 (format=100, E02 §2); «<?xml» — на всякий случай
	 * (разные сборки lockdownd-са), парсим xmlplist-ом. */
	irm_bp_node *node = NULL;
	if (memcmp(buf, "bplist00", 8) == 0) {
		node = irm_bp_read(buf, len);
	} else if (memcmp(buf, "<?xml", 5) == 0) {
		node = irm_xml_read(buf, len);
	} else {
		set_err("unexpected magic %02x %02x %02x %02x",
			buf[0], buf[1], buf[2], buf[3]);
	}
	free(buf);
	if (!node) {
		const char *why = irm_bp_error();
		if (why && *why)
			set_err("parse: %s", why);
		else
			set_err("%s", "parse failed");
		return NULL;
	}
	if (irm_bp_type_of(node) != IRM_BP_DICT) {
		irm_bp_free(node);
		set_err("%s", "response is not a dict");
		return NULL;
	}
	return node;
}

/* ------------------------------------------------------------------ */
/* Сборка и высокоуровневые запросы                                    */
/* ------------------------------------------------------------------ */

int irm_lk_make_request(irm_lk_t *lk, const char *request, irm_bp_node **out)
{
	/* {"Request":<имя>, "ProtocolVersion":"2", "Label":<progname>}
	 * (0x10f2d2: ВСЕ значения — СТРОКИ). */
	if (out)
		*out = NULL;
	irm_bp_node *d = irm_bp_dict();
	int rc = irm_bp_dict_set(d, "Request", irm_bp_string(request));
	if (rc == 0)
		rc = irm_bp_dict_set(d, "ProtocolVersion",
				     irm_bp_string(IRM_LK_PROTOCOL_VERSION));
	if (rc == 0)
		rc = irm_bp_dict_set(d, "Label",
				     irm_bp_string(lk ? lk->label : "libirm"));
	if (rc != 0) {
		set_err("%s", "make request failed");
		irm_bp_free(d);
		return -1;
	}
	if (out)
		*out = d;
	else
		irm_bp_free(d);
	return 0;
}

/* внутренний: отправить готовый запрос (переходит владением), получить ответ. */
static irm_bp_node *send_recv(irm_lk_t *lk, irm_bp_node *req)
{
	int rc = irm_lk_send(lk, req);
	irm_bp_free(req);
	if (rc != 0)
		return NULL;
	return irm_lk_recv(lk);
}

irm_bp_node *irm_lk_query_type(irm_lk_t *lk)
{
	g_err[0] = 0;
	if (!lk) {
		set_err("%s", "internal: no conn");
		return NULL;
	}
	irm_bp_node *req = NULL;
	if (irm_lk_make_request(lk, "QueryType", &req) != 0)
		return NULL;
	return send_recv(lk, req);
}

irm_bp_node *irm_lk_get_value(irm_lk_t *lk, const char *domain, const char *key)
{
	g_err[0] = 0;
	if (!lk) {
		set_err("%s", "internal: no conn");
		return NULL;
	}
	irm_bp_node *req = NULL;
	if (irm_lk_make_request(lk, "GetValue", &req) != 0)
		return NULL;
	if (domain && *domain &&
	    irm_bp_dict_set(req, "Domain", irm_bp_string(domain)) != 0) {
		irm_bp_free(req);
		set_err("%s", "oom");
		return NULL;
	}
	if (key && *key &&
	    irm_bp_dict_set(req, "Key", irm_bp_string(key)) != 0) {
		irm_bp_free(req);
		set_err("%s", "oom");
		return NULL;
	}
	irm_bp_node *resp = send_recv(lk, req);
	if (!resp)
		return NULL;
	irm_bp_node *err = irm_bp_dict_get(resp, "Error");
	if (irm_bp_type_of(err) == IRM_BP_STRING) {
		size_t elen = 0;
		const char *es = irm_bp_string_ptr(err, &elen);
		set_err("device: %.*s", (int)(elen > 128 ? 128 : elen), es);
	} else {
		g_err[0] = 0; /* чистый ответ — строка ошибки не слышна */
	}
	return resp;
}

int irm_lk_start_service(irm_lk_t *lk, const char *service,
			 uint16_t *port_out, int *ssl_out)
{
	g_err[0] = 0;
	if (port_out)
		*port_out = 0;
	if (ssl_out)
		*ssl_out = 0;
	if (!lk || !service || !*service) {
		set_err("%s", "internal: start_service args");
		return -1;
	}
	irm_bp_node *req = NULL;
	if (irm_lk_make_request(lk, "StartService", &req) != 0)
		return -1;
	if (irm_bp_dict_set(req, "Service", irm_bp_string(service)) != 0) {
		irm_bp_free(req);
		set_err("%s", "oom");
		return -1;
	}
	irm_bp_node *resp = send_recv(lk, req);
	if (!resp)
		return -1;

	irm_bp_node *err = irm_bp_dict_get(resp, "Error");
	if (irm_bp_type_of(err) == IRM_BP_STRING) {
		size_t elen = 0;
		const char *es = irm_bp_string_ptr(err, &elen);
		set_err("lockdown: %.*s", (int)(elen > 128 ? 128 : elen), es);
		irm_bp_free(resp);
		return -1;
	}

	/* {"Port":<CFNumber int>, "EnableServiceSSL":<bool>} (E02 §4).
	 * Значение Port НЕ переставляем (🔴 Q14 — сверим live-у). */
	irm_bp_node *portn = irm_bp_dict_get(resp, "Port");
	uint64_t pv = irm_bp_uint_value(portn);
	if (portn && pv > 0xFFFF) {
		set_err("Port %llu > u16", (unsigned long long)pv);
		irm_bp_free(resp);
		return -1;
	}
	if (portn && pv > 0 && port_out)
		*port_out = (uint16_t)pv;
	if (ssl_out)
		*ssl_out = irm_bp_bool_value(irm_bp_dict_get(resp, "EnableServiceSSL"));
	irm_bp_free(resp);
	return 0;
}

/* ------------------------------------------------------------------ */
/* StartSession + session-TLS (E04 §2-4, §6)                           */
/* ------------------------------------------------------------------ */

/* Клиентская пара для handshake: вариант lbD (libimobiledevice-стиль) и
 * вариант Apple (E04 §2 — имена полей исторические). */
static int start_session_tls(irm_lk_t *lk, const irm_pair_t *p)
{
	struct cand {
		const uint8_t *cert, *key, *pin;
		size_t cn, kn, pn;
		const char *name;
	} cand[2] = {
		{ p->host_cert, p->host_key, p->device_cert,
		  p->host_cert_n, p->host_key_n, p->device_cert_n,
		  "HostCertificate+HostPrivateKey (pin DeviceCertificate)" },
		{ p->device_cert, p->root_key, p->device_cert,
		  p->device_cert_n, p->root_key_n, p->device_cert_n,
		  "DeviceCertificate+RootPrivateKey (E04 §2, Apple)" },
	};
	char last[128] = "";
	for (int i = 0; i < 2; i++) {
		if (!cand[i].cert || !cand[i].key)
			continue;
		if (irm_tls_wrap_fd(lk->fd, cand[i].cert, cand[i].cn,
				    cand[i].key, cand[i].kn,
				    cand[i].pin, cand[i].pn,
				    10) == 0) {
			lk->tls = 1;
			return 0;
		}
		snprintf(last, sizeof last, "%.*s",
			 (int)sizeof last - 1, irm_tls_error());
		set_err("TLS %s: %s", cand[i].name, last);
	}
	if (!last[0])
		set_err("%s", "TLS: в рекорде нет пригодной пары серт+ключ");
	return -1;
}

int irm_lk_start_session(irm_lk_t *lk, const irm_pair_t *pair)
{
	g_err[0] = 0;
	if (!lk || !pair) {
		set_err("%s", "start_session: args");
		return -1;
	}
	if (lk->tls) {
		set_err("%s", "start_session: TLS уже активен");
		return -1;
	}
	irm_bp_node *req = NULL;
	if (irm_lk_make_request(lk, "StartSession", &req) != 0)
		return -1;
	/* E02 §: StartSession (+ HostID, SystemBUID) — значения СТРОКИ. */
	if (irm_bp_dict_set(req, "HostID", irm_bp_string(pair->host_id)) != 0 ||
	    irm_bp_dict_set(req, "SystemBUID",
			    irm_bp_string(pair->sys_buid)) != 0) {
		irm_bp_free(req);
		set_err("%s", "oom");
		return -1;
	}
	irm_bp_node *resp = send_recv(lk, req);
	if (!resp)
		return -1;

	irm_bp_node *err = irm_bp_dict_get(resp, "Error");
	if (irm_bp_type_of(err) == IRM_BP_STRING) {
		size_t elen = 0;
		const char *es = irm_bp_string_ptr(err, &elen);
		set_err("lockdown: %.*s", (int)(elen > 128 ? 128 : elen), es);
		irm_bp_free(resp);
		return -1;
	}

	int enssl = irm_bp_bool_value(irm_bp_dict_get(resp, "EnableSessionSSL"));
	irm_bp_free(resp);
	if (!enssl) {
		/* Модель E04 §6: старые iOS отвечают SessionID без TLS —
		 * канал остаётся сырым, но сессия для нас не проверена live. */
		set_err("%s", "start_session: EnableSessionSSL не пришёл");
		return -1;
	}
	/* Live-факт 04.11 (strace ideviceinfo): апгрейд — на ТОМ ЖЕ
	 * lockconn-сокете сразу после ответа StartSession. */
	return start_session_tls(lk, pair);
}

