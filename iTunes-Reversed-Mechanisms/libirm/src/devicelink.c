/* libirm/src/devicelink.c — DeviceLink-транспорт (см. devicelink.h, факты E06). */
#include "libirm/devicelink.h"
#include "libirm/mux.h"
#include "libirm/xmlplist.h"

#include <errno.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/time.h>
#include <unistd.h>

static char g_err[192] = "";

static void set_err(const char *fmt, ...)
{
	va_list ap;
	va_start(ap, fmt);
	vsnprintf(g_err, sizeof g_err, fmt, ap);
	va_end(ap);
}

const char *irm_dl_error(void)
{
	return g_err;
}

struct irm_dl {
	int fd;
};

/* ------------------------------------------------------------------ */
/* BE32-фрейминг                                                       */
/* ------------------------------------------------------------------ */

static void put_be32(uint8_t *p, uint32_t v)
{
	p[0] = (uint8_t)(v >> 24); p[1] = (uint8_t)(v >> 16);
	p[2] = (uint8_t)(v >> 8);  p[3] = (uint8_t)v;
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

/* ------------------------------------------------------------------ */
/* Open/close                                                          */
/* ------------------------------------------------------------------ */

irm_dl_t *irm_dl_attach_fd(int fd, int timeout_sec, int wait_ready)
{
	g_err[0] = 0;
	if (fd < 0) {
		set_err("%s", "bad fd");
		return NULL;
	}
	irm_dl_t *dl = calloc(1, sizeof *dl);
	if (!dl) {
		set_err("%s", strerror(ENOMEM));
		return NULL;
	}
	dl->fd = fd;
	apply_rcvtimeo(fd, timeout_sec);

	/* версионный обмен (E06 §2): device → [DLMessageVersionExchange,
	 * verMajor, verMinor]; host → [DLMessageVersionExchange,
	 * "DLVersionsOk", 400]. Допускаем и XML-«хвост» демона — только
	 * XML (payload честный DL). */
	irm_bp_node *ver = irm_dl_recv(dl);
	if (!ver) {
		set_err("version exchange recv: %s", irm_dl_error());
		free(dl);
		return NULL;
	}
	const irm_bp_node *name = irm_bp_array_get(ver, 0);
	size_t nlen = 0;
	const char *nm =
		(name && irm_bp_type_of(name) == IRM_BP_STRING)
			? irm_bp_string_ptr(name, &nlen) : NULL;
	if (!nm || strcmp(nm, "DLMessageVersionExchange") != 0) {
		set_err("ожидаем DLMessageVersionExchange, получено %s",
			nm ? nm : "?");
		irm_bp_free(ver);
		free(dl);
		return NULL;
	}
	const irm_bp_node *maj = irm_bp_array_get(ver, 1);
	const irm_bp_node *min = irm_bp_array_get(ver, 2);
	uint64_t vmaj = irm_bp_uint_value(maj);
	uint64_t vmin = irm_bp_uint_value(min);
	irm_bp_free(ver);
	if (vmaj > IRM_DL_PROTOCOL_VERSION) {
		set_err("версия device %llu > нашей %u",
			(unsigned long long)vmaj, IRM_DL_PROTOCOL_VERSION);
		free(dl);
		return NULL;
	}
	(void)vmin; /* minor — версия приложения; принимаем без отказа */

	/* host → [DLMessageVersionExchange, "DLVersionsOk", 400]:
	 * name идёт первым аргументом от irm_dl_send, в хвосте — только
	 * '', «DLVersionsOk» и версия. */
	irm_bp_node *ok = irm_bp_array();
	irm_bp_array_add(ok, irm_bp_string("DLVersionsOk"));
	irm_bp_array_add(ok, irm_bp_uint(IRM_DL_PROTOCOL_VERSION));
	int rc = irm_dl_send(dl, "DLMessageVersionExchange", ok);
	irm_bp_free(ok);
	if (rc != 0) {
		free(dl);
		return NULL;
	}

	if (wait_ready) {
		irm_bp_node *m = irm_dl_recv(dl);
		if (!m) {
			set_err("DeviceReady recv: %s", irm_dl_error());
			free(dl);
			return NULL;
		}
		const irm_bp_node *n0 = irm_bp_array_get(m, 0);
		const char *mn = (n0 && irm_bp_type_of(n0) == IRM_BP_STRING)
					 ? irm_bp_string_ptr(n0, NULL) : NULL;
		if (!mn || strcmp(mn, "DLMessageDeviceReady") != 0) {
			set_err("ожидаем DLMessageDeviceReady, получено %s",
				mn ? mn : "?");
			irm_bp_free(m);
			free(dl);
			return NULL;
		}
		irm_bp_free(m);
	}
	return dl;
}

irm_dl_t *irm_dl_open_service(irm_lk_t *lk, const char *service,
			      const char *mux_path, int timeout_sec,
			      int wait_ready)
{
	g_err[0] = 0;
	if (!lk || !service || !*service) {
		set_err("%s", "internal: open_service args");
		return NULL;
	}
	uint16_t port = 0;
	int ssl = 1;
	if (irm_lk_start_service(lk, service, &port, &ssl) != 0)
		return NULL;
	if (ssl) {
		set_err("%s запрашивает SSL — TLS не реализован "
			"(шаг 5 дорожки)", service);
		return NULL;
	}
	uint32_t device_id = irm_lk_device_id(lk);
	if (!device_id) {
		set_err("%s", "неизвестен DeviceID (attach_fd-коннект)");
		return NULL;
	}
	int fd = irm_mux_connect(mux_path, device_id, port, timeout_sec);
	if (fd < 0) {
		set_err("mux connect %s: %s", service, irm_mux_error());
		return NULL;
	}
	irm_dl_t *dl = irm_dl_attach_fd(fd, timeout_sec, wait_ready);
	if (!dl) {
		irm_mux_close(fd);
		return NULL;
	}
	g_err[0] = 0;
	return dl;
}

void irm_dl_close(irm_dl_t *dl)
{
	if (!dl)
		return;
	if (dl->fd >= 0)
		close(dl->fd);
	free(dl);
}

int irm_dl_fd(const irm_dl_t *dl)
{
	return dl ? dl->fd : -1;
}

/* ------------------------------------------------------------------ */
/* Отправка/приём                                                      */
/* ------------------------------------------------------------------ */

int irm_dl_send(irm_dl_t *dl, const char *name, irm_bp_node *args_array)
{
	g_err[0] = 0;
	if (!dl || !name || !*name ||
	    (args_array &&
	     irm_bp_type_of(args_array) != IRM_BP_ARRAY)) {
		set_err("%s", "internal: send args");
		return -1;
	}
	/* root = ["<name>", ...args] */
	irm_bp_node *msg = irm_bp_array();
	if (irm_bp_array_add(msg, irm_bp_string(name)) != 0) {
		irm_bp_free(msg);
		set_err("%s", "oom");
		return -1;
	}
	if (args_array) {
		size_t n = irm_bp_array_len(args_array);
		for (size_t i = 0; i < n; i++) {
			const irm_bp_node *a = irm_bp_array_get(args_array, i);
			if (irm_bp_array_add(msg, irm_bp_dup(a)) != 0) {
				irm_bp_free(msg);
				set_err("%s", "oom");
				return -1;
			}
		}
	}
	uint8_t *xml = NULL;
	size_t n = 0;
	int rc = irm_xml_write(msg, &xml, &n);
	irm_bp_free(msg);
	if (rc != 0) {
		set_err("%s", "xml write failed");
		return -1;
	}
	if (n < 16 || n > IRM_DL_FRAME_MAX) {
		free(xml);
		set_err("payload %zu вне диапазона", n);
		return -1;
	}
	uint8_t hdr[4];
	put_be32(hdr, (uint32_t)n);
	rc = write_full(dl->fd, hdr, sizeof hdr);
	if (rc == 0)
		rc = write_full(dl->fd, xml, n);
	free(xml);
	if (rc != 0) {
		set_err("send: %s", strerror(errno));
		return -1;
	}
	return 0;
}

irm_bp_node *irm_dl_recv(irm_dl_t *dl)
{
	g_err[0] = 0;
	if (!dl) {
		set_err("%s", "internal: recv без conn");
		return NULL;
	}
	uint8_t hdr[4];
	int rc = read_full(dl->fd, hdr, sizeof hdr);
	if (rc != 0) {
		set_err("recv hdr: %s",
			rc == -2 ? "timeout" :
			rc == -1 ? "EOF" : strerror(errno));
		return NULL;
	}
	uint32_t len = get_be32(hdr);
	if (len == 0 || len > IRM_DL_FRAME_MAX) {
		set_err("incoming 0x%x — отказ (лим 0x%x)", len,
			IRM_DL_FRAME_MAX);
		return NULL;
	}
	uint8_t *buf = malloc(len);
	if (!buf) {
		set_err("%s", strerror(ENOMEM));
		return NULL;
	}
	rc = read_full(dl->fd, buf, len);
	if (rc != 0) {
		set_err("recv body: %s",
			rc == -2 ? "timeout" :
			rc == -1 ? "EOF" : strerror(errno));
		free(buf);
		return NULL;
	}
	/* E06 §1: payload — ТОЛЬКО XML (CFPropertyListCreateFromXMLData).
	 * Терпим «хвост» в стиле <?xml / начального < (строгое правило:
	 * иные первые байты — ошибка). */
	irm_bp_node *msg = NULL;
	if (buf[0] == '<') {
		msg = irm_xml_read(buf, len);
	} else {
		set_err("DL payload не XML (magic %02x)", buf[0]);
	}
	free(buf);
	if (!msg) {
		set_err("parse: %s", irm_xml_error());
		return NULL;
	}
	if (irm_bp_type_of(msg) != IRM_BP_ARRAY) {
		irm_bp_free(msg);
		set_err("%s", "DL payload не массив-кортеж");
		return NULL;
	}
	return msg;
}
