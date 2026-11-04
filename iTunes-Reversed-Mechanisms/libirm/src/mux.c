/* libirm/src/mux.c — mux-клиент системного usbmuxd.
 * Формат и семантика — E01b §1-4; заголовок — mux.h. */
#include "libirm/mux.h"
#include "libirm/xmlplist.h"

#include <errno.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/time.h>
#include <sys/un.h>
#include <unistd.h>

/* ------------------------------------------------------------------ */
/* Ошибки                                                              */
/* ------------------------------------------------------------------ */

static char g_err[128] = "";

static void set_err(const char *fmt, ...)
{
	va_list ap;
	va_start(ap, fmt);
	vsnprintf(g_err, sizeof g_err, fmt, ap);
	va_end(ap);
}

const char *irm_mux_error(void)
{
	return g_err;
}

/* ------------------------------------------------------------------ */
/* LE-байты                                                            */
/* ------------------------------------------------------------------ */

static void put_le32(uint8_t *p, uint32_t v)
{
	p[0] = (uint8_t)(v & 0xFFu);
	p[1] = (uint8_t)((v >> 8) & 0xFFu);
	p[2] = (uint8_t)((v >> 16) & 0xFFu);
	p[3] = (uint8_t)((v >> 24) & 0xFFu);
}

static uint32_t get_le32(const uint8_t *p)
{
	return (uint32_t)p[0] | ((uint32_t)p[1] << 8) |
	       ((uint32_t)p[2] << 16) | ((uint32_t)p[3] << 24);
}

/* ------------------------------------------------------------------ */
/* Тег                                                                 */
/* ------------------------------------------------------------------ */

static uint32_t g_tag;

uint32_t irm_mux_tag_next(void)
{
	return ++g_tag;
}

/* ------------------------------------------------------------------ */
/* Транспорт (unix stream, точные чтения/записи)                       */
/* ------------------------------------------------------------------ */

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

static int read_full(int fd, uint8_t *b, size_t n)
{
	while (n > 0) {
		ssize_t r = read(fd, b, n);
		if (r < 0) {
			if (errno == EINTR)
				continue;
			return -1;
		}
		if (r == 0)
			return -1; /* EOF посреди кадра */
		b += (size_t)r;
		n -= (size_t)r;
	}
	return 0;
}

/* ------------------------------------------------------------------ */
/* Открытие/закрытие                                                   */
/* ------------------------------------------------------------------ */

int irm_mux_open(const char *path, int timeout_sec)
{
	g_err[0] = 0;
	if (!path || !*path) {
		set_err("%s", "no socket path");
		return -1;
	}
	int fd = socket(AF_UNIX, SOCK_STREAM, 0);
	if (fd < 0) {
		set_err("socket: %s", strerror(errno));
		return -1;
	}
	struct sockaddr_un sa;
	memset(&sa, 0, sizeof sa);
	sa.sun_family = AF_UNIX;
	size_t plen = strlen(path);
	if (plen >= sizeof sa.sun_path) {
		set_err("%s", "socket path too long");
		close(fd);
		return -1;
	}
	memcpy(sa.sun_path, path, plen + 1);
	if (connect(fd, (struct sockaddr *)&sa, sizeof sa) < 0) {
		set_err("connect %s: %s", path, strerror(errno));
		close(fd);
		return -1;
	}
	if (timeout_sec > 0) {
		struct timeval tv;
		tv.tv_sec = timeout_sec;
		tv.tv_usec = 0;
		if (setsockopt(fd, SOL_SOCKET, SO_RCVTIMEO, &tv, sizeof tv) < 0) {
			set_err("setsockopt: %s", strerror(errno));
			close(fd);
			return -1;
		}
	}
	return fd;
}

void irm_mux_close(int fd)
{
	if (fd >= 0)
		close(fd);
}

/* Порядок байта PortNumber в Connect-кадре (E01b §3/§10):
 *   Linux-usbmuxd (live 04.11, strace libusbmuxd): ждёт порт в СЕТЕВОМ
 *   порядке — 62078 := htons(62078) = 0x7EF2 = 32498; сырой 0xF27E даёт
 *   Result=3 на обоих «свапнутых» пробных значениях пробника.
 *   macOS-демон принимает значение КАК ЕСТЬ. */
static uint16_t wire_port_of(uint16_t port)
{
#if defined(__linux__)
	return (uint16_t)(((port & 0xFFu) << 8) | ((port >> 8) & 0xFFu));
#else
	return port;
#endif
}

/* имя процесса для ProgName (как у demux-кадра ideviceinfo, E01b §10). */
static const char *progname(void)
{
#if defined(__linux__) && !defined(getprogname)
	return program_invocation_short_name; /* <errno.h>, см. _GNU_SOURCE */
#elif defined(__APPLE__) || defined(__BSD__)
	return getprogname();
#else
	return "libirm";
#endif
}

/* Туннель к сервису: mux Connect (E01b §3) — тот же кадр, что у lockdown-а,
 * только PortNumber = порт сервиса из StartService. Live-факты Linux
 * (E01b §10, strace libusbmuxd 2.1.1 04.11): демона ждёт ПЛЮС поля
 * ClientVersionString/ProgName/kLibUSBMuxVersion=3, PortNumber=htons(port),
 * запросы — XML-телом (irm_mux_send уже так шлёт). */
int irm_mux_connect(const char *path, uint32_t device_id, uint16_t port,
		    int timeout_sec)
{
	uint16_t wport = wire_port_of(port);
	int fd = irm_mux_open(path, timeout_sec);
	if (fd < 0)
		return -1;
	irm_bp_node *req = irm_bp_dict();
	if (!req ||
	    irm_bp_dict_set(req, "MessageType", irm_bp_string("Connect")) != 0 ||
	    irm_bp_dict_set(req, "DeviceID", irm_bp_uint(device_id)) != 0 ||
	    irm_bp_dict_set(req, "PortNumber", irm_bp_uint(wport)) != 0 ||
	    irm_bp_dict_set(req, "ClientVersionString",
			    irm_bp_string("libirm 0.1")) != 0 ||
	    irm_bp_dict_set(req, "ProgName", irm_bp_string(progname())) != 0 ||
	    irm_bp_dict_set(req, "kLibUSBMuxVersion", irm_bp_uint(3)) != 0) {
		irm_bp_free(req);
		set_err("%s", "oom");
		irm_mux_close(fd);
		return -1;
	}
	uint32_t tag = irm_mux_tag_next();
	if (irm_mux_send(fd, tag, req) != 0) {
		set_err("mux(send Connect): %s", irm_mux_error());
		irm_bp_free(req);
		irm_mux_close(fd);
		return -1;
	}
	irm_bp_free(req);
	irm_bp_node *resp = irm_mux_recv(fd, NULL);
	if (!resp) {
		set_err("mux(recv Result): %s", irm_mux_error());
		irm_mux_close(fd);
		return -1;
	}
	irm_bp_node *num = irm_bp_dict_get(resp, "Number");
	uint64_t code = 1;
	if (num)
		code = irm_bp_uint_value(num);
	irm_bp_free(resp);
	if (code != 0) {
		set_err("mux Connect Result=%llu",
			(unsigned long long)code);
		irm_mux_close(fd);
		return -1;
	}
	return fd;
}

/* ------------------------------------------------------------------ */
/* Отправка/приём кадра                                                */
/* ------------------------------------------------------------------ */

int irm_mux_send(int fd, uint32_t tag, const irm_bp_node *payload)
{
	g_err[0] = 0;
	if (!payload || irm_bp_type_of(payload) != IRM_BP_DICT) {
		set_err("%s", "fork payload must be dict");
		return -1;
	}
	/* Тело запроса — XML plist (E01b §1: mac-демон принимает bplist00,
	 * но ЛИНУКС-демон (usbmuxd, /usr/sbin) при header.version==1 читает
	 * ТОЛЬКО XML; bplist-тело при ver=1 он молчит и кадр не отвечает —
	 * промерено live 04.11. mac-демон — CF-Plaist (XML+bplist умеет оба)). */
	int rc = 0;
	uint8_t *body = NULL;
	size_t bn = 0;
	if (irm_xml_write(payload, &body, &bn) != 0) {
		set_err("%s", "payload XML encode failed");
		return -1;
	}
	uint8_t hdr[16];
	put_le32(hdr + 0, (uint32_t)(bn + 16)); /* totallen с header */
	put_le32(hdr + 4, 1);                   /* version */
	put_le32(hdr + 8, 8);                   /* msg */
	put_le32(hdr + 12, tag);
	rc = write_full(fd, hdr, sizeof hdr) |
	     (bn ? write_full(fd, body, bn) : 0);
	free(body);
	if (rc != 0) {
		set_err("send: %s", strerror(errno));
		return -1;
	}
	return 0;
}

irm_bp_node *irm_mux_recv(int fd, uint32_t *tag)
{
	g_err[0] = 0;
	if (tag)
		*tag = 0;
	uint8_t hdr[16];
	if (read_full(fd, hdr, sizeof hdr) != 0) {
		set_err("recv header: %s",
			errno == EAGAIN ? "timeout" : strerror(errno));
		return NULL;
	}
	uint32_t totallen = get_le32(hdr + 0);
	uint32_t ver = get_le32(hdr + 4);
	uint32_t rtag = get_le32(hdr + 12);
	if (totallen < sizeof hdr) {
		set_err("%s", "frame shorter than 16B");
		return NULL;
	}
	if (totallen > IRM_MUX_FRAME_MAX) {
		set_err("%s", "frame too big");
		return NULL;
	}
	if (ver == 0 && get_le32(hdr + 8) == 1) {
		/* Легаси-ответ демона (Linux: неверно выбрали version):
		 * ver=0 msg=1 RESULT + LE u32 код тела. */
		uint8_t rb[4];
		size_t rbn = totallen - sizeof hdr;
		if (read_full(fd, rb, rbn ? (rbn < 4 ? rbn : 4) : 0) != 0) {
			set_err("%s", "legacy result: чтение тела");
			return NULL;
		}
		set_err("muxd legacy Result=%u (ver=0: тело запроса не подошло на этой версии)", get_le32(rb));
		return NULL;
	}
	if (ver != 1) {
		set_err("frame version %u (ожидается 1)", ver);
		return NULL;
	}
	size_t bn = totallen - sizeof hdr;
	uint8_t *body = (uint8_t *)malloc(bn ? bn : 1);
	if (!body) {
		set_err("%s", "oom");
		return NULL;
	}
	if (read_full(fd, body, bn) != 0) {
		free(body);
		set_err("recv body: %s",
			errno == EAGAIN ? "timeout" : strerror(errno));
		return NULL;
	}
	/* macOS-демон отвечает XML (E01b §1.5 live), Windows-bundle — binary;
	 * наш запрос всегда binary. Различаем по префиксу. */
	irm_bp_node *n = NULL;
	if (bn >= 8 && memcmp(body, "bplist00", 8) == 0) {
		n = irm_bp_read(body, bn);
		if (!n) {
			snprintf(g_err, sizeof g_err, "bplist payload: %s",
				 irm_bp_error());
			free(body);
			return NULL;
		}
	} else if (bn >= 5 && memcmp(body, "<?xml", 5) == 0) {
		n = irm_xml_read(body, bn);
		if (!n) {
			snprintf(g_err, sizeof g_err, "xml payload: %s",
				 irm_xml_error());
			free(body);
			return NULL;
		}
	} else {
		free(body);
		set_err("%s", "payload не bplist00 и не <?xml");
		return NULL;
	}
	free(body);
	if (irm_bp_type_of(n) != IRM_BP_DICT) {
		irm_bp_free(n);
		set_err("%s", "payload not a dict");
		return NULL;
	}
	if (tag)
		*tag = rtag;
	return n;
}
