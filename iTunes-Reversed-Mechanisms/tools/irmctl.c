/* irmctl — CLI поверх libirm (C-фаза iTunes-Reversed-Mechanisms).
 *
 *   irmctl [-s PATH] list          — устройства через системный usbmuxd
 *   irmctl [-s PATH] info [УДИД|i] — lockdown-инфо устройства: QueryType,
 *                                    GetValue-ключи, пробы StartService
 *                                    (сервисы music-sync: notification_proxy,
 *                                     afc, atc — E02/E03/E07)
 *   IRM_MUX_SOCKET=...             — тот же эффект, что -s
 * Дорожка docs/00-roadmap.md: bplist✓ mux✓ lockdown → pair → tls → afc → sync.
 */
#include "libirm/bplist.h"
#include "libirm/lockdown.h"
#include "libirm/mux.h"
#include "libirm/pairing.h"
#include "libirm/tls.h"
#include "libirm/afc.h" /* E14: afc-ls/stat/music-id/atc-delta */
#include "libirm/grappa.h" /* 9f: подпись .cig от ReadyForSync-ответа */
#include "libirm/xmlplist.h"
/* Vendored sqlite (../vendor/sqlite, Makefile даёт -I) — только для music-id:
 * чтение ЛОКАЛЬНОЙ копии MediaLibrary.sqlitedb (на телефон sqlite не открываем,
 * E14 §3). */
#include "sqlite3.h"

#include <errno.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <sys/time.h>
#include <time.h>
#include <unistd.h>

static const char *str_of(const irm_bp_node *d, const char *key)
{
	const irm_bp_node *v = irm_bp_dict_get(d, key);
	size_t n;
	return (v && irm_bp_type_of(v) == IRM_BP_STRING) ? irm_bp_string_ptr(v, &n) : NULL;
}

static uint64_t uint_of(const irm_bp_node *d, const char *key)
{
	const irm_bp_node *v = irm_bp_dict_get(d, key);
	return (v && irm_bp_type_of(v) == IRM_BP_UINT) ? irm_bp_uint_value(v) : 0;
}

static const char *dash(const char *s)
{
	return s ? s : "-";
}

/* ListDevices и выбор устройства (UDID-подстрока, «i»-индекс или единственный).
 * 0 — ок (device_id_out/udid_buf заполнены); -1 — отказ/не найдено. */
static int select_device(const char *path, const char *selector,
			 uint32_t *device_id_out, char *udid_buf, size_t bufsz)
{
	int fd = irm_mux_open(path, 5);
	if (fd < 0) {
		fprintf(stderr, "irmctl: %s: %s\n", path, irm_mux_error());
		return -1;
	}
	irm_bp_node *msg = irm_bp_dict();
	irm_bp_node *resp = NULL;
	int rc = -1;
	if (msg &&
	    irm_bp_dict_set(msg, "MessageType",
			    irm_bp_string("ListDevices")) == 0)
		irm_mux_send(fd, irm_mux_tag_next(), msg);
	resp = irm_mux_recv(fd, NULL);
	irm_bp_free(msg);
	if (!resp) {
		fprintf(stderr, "irmctl: recv: %s\n", irm_mux_error());
		goto out;
	}
	const irm_bp_node *dl = irm_bp_dict_get(resp, "DeviceList");
	if (!dl || irm_bp_type_of(dl) != IRM_BP_ARRAY) {
		fprintf(stderr, "irmctl: нет DeviceList в ответе\n");
		goto out;
	}
	size_t n = irm_bp_array_len(dl);
	if (!selector && n != 1) {
		fprintf(stderr, "irmctl info: устройств %zu; укажите UDID или "
				"индекс (см. irmctl list)\n", n);
		goto out;
	}

	size_t picked = 0;
	int ok = 0;
	if (!selector) {
		picked = 0;
		ok = 1;
	} else if (*selector >= '0' && *selector <= '9' && !selector[1]) {
		picked = (size_t)(selector[0] - '0');
		if (picked >= n) {
			fprintf(stderr, "irmctl info: нет устройства %zu\n",
				picked);
		} else {
			ok = 1;
		}
	} else {
		for (size_t i = 0; i < n; i++) {
			const irm_bp_node *d = irm_bp_array_get(dl, i);
			const irm_bp_node *p =
				d ? irm_bp_dict_get(d, "Properties") : NULL;
			const char *u = p ? str_of(p, "UDID") : NULL;
			/* Linux-usbmuxd кладёт UDID в SerialNumber
			 * (E01b §10: Properties {SerialNumber: <UDID>,
			 * UDID-ключа нет}); mac — в UDID. */
			if (!u)
				u = p ? str_of(p, "SerialNumber") : NULL;
			if (u && strstr(u, selector)) {
				picked = i;
				ok = 1;
				break;
			}
		}
		if (!ok)
			fprintf(stderr, "irmctl info: UDID «%s» не найден\n",
				selector);
	}
	if (ok) {
		const irm_bp_node *d = irm_bp_array_get(dl, picked);
		if (d && irm_bp_type_of(d) == IRM_BP_DICT) {
			const irm_bp_node *p = irm_bp_dict_get(d, "Properties");
			*device_id_out = (uint32_t)uint_of(d, "DeviceID");
			const char *u = p ? str_of(p, "UDID") : NULL;
			if (!u)
				u = p ? str_of(p, "SerialNumber") : NULL;
			snprintf(udid_buf, bufsz, "%s", u ? u : "-");
			rc = 0;
		} else {
			fprintf(stderr, "irmctl: сломанный DeviceList\n");
		}
	}
out:
	irm_bp_free(resp);
	irm_mux_close(fd);
	return rc;
}

static int cmd_list(const char *path)
{
	int fd = irm_mux_open(path, 5);
	if (fd < 0) {
		fprintf(stderr, "irmctl list: %s: %s\n", path, irm_mux_error());
		return 1;
	}
	irm_bp_node *msg = irm_bp_dict();
	int rc = 1;
	uint32_t tag = irm_mux_tag_next();
	if (!msg ||
	    irm_bp_dict_set(msg, "MessageType",
			    irm_bp_string("ListDevices")) != 0) {
		fprintf(stderr, "irmctl: oom\n");
		goto out;
	}
	if (irm_mux_send(fd, tag, msg) != 0) {
		fprintf(stderr, "irmctl list: send: %s\n", irm_mux_error());
		goto out;
	}
	uint32_t rtag = 0;
	irm_bp_node *resp = irm_mux_recv(fd, &rtag);
	if (!resp) {
		fprintf(stderr, "irmctl list: recv: %s\n", irm_mux_error());
		goto out;
	}
	if (rtag != tag)
		fprintf(stderr, "irmctl list: tag %u (запрос %u)\n", rtag, tag);
	const irm_bp_node *dl = irm_bp_dict_get(resp, "DeviceList");
	if (dl && irm_bp_type_of(dl) == IRM_BP_ARRAY) {
		size_t n = irm_bp_array_len(dl);
		printf("devices: %zu\n", n);
		for (size_t i = 0; i < n; i++) {
			const irm_bp_node *d = irm_bp_array_get(dl, i);
			if (!d || irm_bp_type_of(d) != IRM_BP_DICT)
				continue;
			const irm_bp_node *p = irm_bp_dict_get(d, "Properties");
			printf("  [%zu] DeviceID=%llu Type=%s UDID=%s Serial=%s\n",
			       i,
			       (unsigned long long)uint_of(d, "DeviceID"),
			       dash(p ? str_of(p, "ConnectionType") : NULL),
			       dash(p ? str_of(p, "UDID") : NULL),
			       dash(p ? str_of(p, "SerialNumber") : NULL));
		}
		rc = 0;
	} else {
		const char *mt = str_of(resp, "MessageType");
		uint64_t code = uint_of(resp, "Number");
		if (mt && strcmp(mt, "Result") == 0 && code == 0) {
			printf("devices: 0 (Result 0)\n");
			rc = 0;
		} else {
			fprintf(stderr,
				"irmctl list: отказ демона: MessageType=%s Number=%llu\n",
				dash(mt), (unsigned long long)code);
		}
	}
	irm_bp_free(resp);
out:
	irm_bp_free(msg);
	irm_mux_close(fd);
	return rc;
}

/* Поиск устройства: UDID-подстрока или однозначный индекс «i».
 * (см. select_device). */
static int find_device(const char *path, const char *selector,
		       uint32_t *device_id_out, char *udid_buf, size_t bufsz)
{
	return select_device(path, selector, device_id_out, udid_buf, bufsz);
}

/* ================================================================ */
/* atc-probe: пара → StartSession+TLS → StartService(atc/atc2) →     */
/* новый mux-туннель → TLS сервиса → кадры сервера (обследования      */
/* протокола ATC для дорожки музыки; результат — в E11).             */
/* ================================================================ */

/* Ровно n байт из сервиса: 0 — ок; -2 — таймаут; -3 — EOF/ошибка канала
 * (для TLS деталей — irm_tls_error()). timeout — секунды. */
static int svc_read_full_t(int fd, int tls, uint8_t *b, size_t n, int timeout)
{
	if (tls) {
		int rc = irm_tls_read_full(fd, b, n, timeout);
		if (rc == 0)
			return 0;
		return rc == -2 ? -2 : -3;
	}
	size_t got = 0;
	while (got < n) {
		ssize_t r = read(fd, b + got, n - got);
		if (r < 0) {
			if (errno == EINTR)
				continue;
			if (errno == EAGAIN || errno == EWOULDBLOCK)
				return -2; /* SO_RCVTIMEO */
			return -1;
		}
		if (r == 0)
			return -3;
		got += (size_t)r;
	}
	return 0;
}

#define SVC_TO_DEFAULT 12
static int svc_read_full(int fd, int tls, uint8_t *b, size_t n)
{
	return svc_read_full_t(fd, tls, b, n, SVC_TO_DEFAULT);
}

/* TLS сервиса: той же парой (lbD-стиль → Apple-стиль, E04 §2).
 * Возврат 1 = lbD, 2 = Apple, 0 = не поднялся (текст на stderr). */
static int svc_tls_start(int fd, const irm_pair_t *p)
{
	if (irm_tls_wrap_fd(fd, p->host_cert, p->host_cert_n,
			    p->host_key, p->host_key_n, p->device_cert,
			    p->device_cert_n, 10) == 0)
		return 1;
	char first[128];
	snprintf(first, sizeof first, "%s",
		 irm_tls_error() ? irm_tls_error() : "?");
	if (p->device_cert && p->root_key &&
	    irm_tls_wrap_fd(fd, p->device_cert, p->device_cert_n,
			    p->root_key, p->root_key_n, p->device_cert,
			    p->device_cert_n, 10) == 0)
		return 2;
	fprintf(stderr, "atc-probe: TLS сервиса: [%s] затем [%s]\n", first,
		irm_tls_error() && *irm_tls_error() ? irm_tls_error() : "?");
	return 0;
}

/* Один сервис: StartService → подключение → (TLS) → первые байты. */
static void probe_service(irm_lk_t *lk, const irm_pair_t *pair,
			  const char *path, uint32_t device_id,
			  const char *svc)
{
	uint16_t port = 0;
	int ssl = 0;
	printf("[%s]\n", svc);
	if (irm_lk_start_service(lk, svc, &port, &ssl) != 0) {
		printf("  StartService: %s\n", irm_lk_error());
		return;
	}
	printf("  StartService: port=%u EnableServiceSSL=%d\n", port, ssl);
	if (!port) {
		printf("  порт не получен — нет туннеля\n");
		return;
	}
	int fd = irm_mux_connect(path, device_id, port, 5);
	if (fd < 0) {
		printf("  Connect: %s\n", irm_mux_error());
		return;
	}
	int tls = ssl ? svc_tls_start(fd, pair) : 0;
	printf("  канал: %s\n",
	       tls == 1 ? "TLS (lbD-комбо HostCert+HostKey)"
	       : tls == 2 ? "TLS (Apple-комбо DeviceCert+RootKey)"
	       : ssl ? "TLS не поднялся, читаю сырой fd"
		     : "сырой (EnableServiceSSL=false)");

	/* ATC-фрейминг (факт E11, 04.11): [LE32 len][bplist00 payload];
	 * сервер САМ открывает обмен (два приветственных кадра 184/146 B). */
	for (int k = 1; k <= 3; k++) {
		uint8_t lb[4] = { 0, 0, 0, 0 };
		int rc = svc_read_full(fd, tls, lb, sizeof lb);
		if (rc != 0) {
			printf("%s\n",
			       rc == -3 ? "  обмен закрыт (EOF) — кадров больше нет" :
			       rc == -2 ? "  тишина — сервер ждёт от клиента" :
					  "  ошибка чтения заголовка кадра");
			break;
		}
		uint32_t len = (uint32_t)lb[0] | ((uint32_t)lb[1] << 8) |
			       ((uint32_t)lb[2] << 16) | ((uint32_t)lb[3] << 24);
		printf("  кадр %d: len=%u", k, len);
		if (len < 8 || len > (1u << 20)) {
			printf(" — вне разумных границ, стоп\n");
			break;
		}
		uint8_t *body = (uint8_t *)malloc(len);
		if (!body)
			break;
		if (svc_read_full(fd, tls, body, len) != 0) {
			printf(" — тело недочитано\n");
			free(body);
			break;
		}
		printf(" magic=%.8s\n", (const char *)body);
		irm_bp_node *d =
			(memcmp(body, "bplist00", 8) == 0)
				? irm_bp_read(body, len)
			: (memcmp(body, "<?xml", 5) == 0)
				? irm_xml_read(body, len)
				: NULL;
		free(body);
		if (!d || irm_bp_type_of(d) != IRM_BP_DICT) {
			printf("  (не plist-dict — фрагмент протокола?)\n");
			irm_bp_free(d);
			break;
		}
		uint8_t *xm = NULL;
		size_t xn = 0;
		if (irm_xml_write(d, &xm, &xn) == 0) {
			printf("  dump:\n");
			fwrite(xm, 1, xn, stdout);
			printf("\n");
			free(xm);
		}
		irm_bp_free(d);
	}
	if (tls)
		irm_tls_disarm(fd);
	irm_mux_close(fd);
}

/* Короткая строка для summary (усечение по ASCII-границе). */
static void clip_print(const char *s, size_t n, size_t max)
{
	if (n > max) {
		fwrite(s, 1, max, stdout);
		printf("…");
	} else {
		fwrite(s, 1, n, stdout);
	}
}

static const char *bp_type_name(irm_bp_type t)
{
	switch (t) {
	case IRM_BP_NULL: return "null";
	case IRM_BP_BOOL: return "bool";
	case IRM_BP_UINT: return "uint";
	case IRM_BP_REAL: return "real";
	case IRM_BP_DATE: return "date";
	case IRM_BP_STRING: return "string";
	case IRM_BP_DATA: return "data";
	case IRM_BP_ARRAY: return "array";
	case IRM_BP_DICT: return "dict";
	}
	return "?";
}

/* Структура узла одной строкой: с дочерними — до depth, глубже — типы
 * (обрезки: массив >8 пунктов, словарь >16 ключей, строка >64 байт). */
static void atc_summary(const irm_bp_node *d, int depth)
{
	if (!d) {
		printf("null");
		return;
	}
	irm_bp_type t = irm_bp_type_of(d);
	switch (t) {
	case IRM_BP_DICT: {
		size_t n = irm_bp_dict_count(d);
		printf("dict[%zu]{", n);
		size_t show = n < 16 ? n : 16;
		for (size_t i = 0; i < show; i++) {
			if (i)
				printf(", ");
			printf("%s=", irm_bp_dict_key_at(d, i));
			irm_bp_node *v = irm_bp_dict_val_at(d, i);
			if (depth > 0)
				atc_summary(v, depth - 1);
			else
				printf("%s", bp_type_name(irm_bp_type_of(v)));
		}
		if (show < n)
			printf(", …+%zu", n - show);
		printf("}");
		break;
	}
	case IRM_BP_ARRAY: {
		size_t n = irm_bp_array_len(d);
		printf("array[%zu]{", n);
		size_t show = n < 8 ? n : 8;
		for (size_t i = 0; i < show; i++) {
			if (i)
				printf(", ");
			irm_bp_node *v = irm_bp_array_get(d, i);
			if (depth > 0)
				atc_summary(v, depth - 1);
			else
				printf("%s", bp_type_name(irm_bp_type_of(v)));
		}
		if (show < n)
			printf(", …+%zu", n - show);
		printf("}");
		break;
	}
	case IRM_BP_STRING: {
		size_t len = 0;
		const char *s = irm_bp_string_ptr(d, &len);
		printf("str\"");
		if (s)
			clip_print(s, len, 64);
		printf("\"");
		break;
	}
	case IRM_BP_UINT:
		printf("%llu",
		       (unsigned long long)irm_bp_uint_value(d));
		break;
	case IRM_BP_REAL:
		printf("%.6f", irm_bp_real_value(d));
		break;
	case IRM_BP_DATA: {
		size_t len = 0;
		irm_bp_data_ptr(d, &len);
		printf("data[%zu]", len);
		break;
	}
	case IRM_BP_BOOL:
		printf("%s", irm_bp_bool_value(d) ? "true" : "false");
		break;
	default:
		printf("%s", bp_type_name(t));
		break;
	}
}

/* Читает до max кадров [LE32 len][bplist00]: кадры <= dump_limit печатает
 * полным XML-дампом, крупные — структурой (depth); stop на мусоре.
 * Возврат: сколько dict-кадров прочитано; *stop (если не NULL): 0 = max
 * кадров; -2 = таймаут (сервер ждёт/готовится); -3 = EOF канала;
 * -4 = кадр вне границ; -5 = не plist-dict. */
static int atc_read_frames_ext(int fd, int tls, int max, uint32_t cap,
			       size_t dump_limit, int timeout, int depth,
			       int *stop)
{
	int got = 0;
	if (stop)
		*stop = 0;
	for (int k = 1; k <= max; k++) {
		uint8_t lb[4] = { 0, 0, 0, 0 };
		int rc = svc_read_full_t(fd, tls, lb, sizeof lb, timeout);
		if (rc != 0) {
			if (stop)
				*stop = rc == -2 ? -2 : -3;
			printf("%s\n",
			       rc == -3 ?
				       "  обмен закрыт (EOF) — кадров больше нет" :
			       rc == -2 ? "  тишина — сервер ждёт от клиента" :
					  "  ошибка чтения заголовка кадра");
			break;
		}
		uint32_t len = (uint32_t)lb[0] | ((uint32_t)lb[1] << 8) |
			       ((uint32_t)lb[2] << 16) | ((uint32_t)lb[3] << 24);
		printf("  кадр %d: len=%u", k, len);
		if (len < 8 || len > cap) {
			printf(" — вне границ (cap=%u), стоп\n", cap);
			if (stop)
				*stop = -4;
			break;
		}
		uint8_t *body = (uint8_t *)malloc(len);
		if (!body)
			break;
		if (svc_read_full_t(fd, tls, body, len, timeout) != 0) {
			printf(" — тело недочитано\n");
			free(body);
			break;
		}
		printf(" magic=%.8s\n", (const char *)body);
		irm_bp_node *d =
			(memcmp(body, "bplist00", 8) == 0)
				? irm_bp_read(body, len)
			: (memcmp(body, "<?xml", 5) == 0)
				? irm_xml_read(body, len)
				: NULL;
		free(body);
		if (!d || irm_bp_type_of(d) != IRM_BP_DICT) {
			printf("  (не plist-dict — фрагмент протокола?)\n");
			irm_bp_free(d);
			if (stop)
				*stop = -5;
			break;
		}
		got++;
		if (len <= dump_limit) {
			uint8_t *xm = NULL;
			size_t xn = 0;
			if (irm_xml_write(d, &xm, &xn) == 0) {
				printf("  dump:\n");
				fwrite(xm, 1, xn, stdout);
				printf("\n");
				free(xm);
			}
		} else {
			printf("  (крупный — структура):\n  ");
			atc_summary(d, depth);
			printf("\n");
		}
		/* Готовность телефона: Params.DeviceInfo.Grappa как чистые
		 * байты (для локальной проверки подписи §11.4; XML-рендер
		 * b64 может резаться). */
		const irm_bp_node *cmd = irm_bp_dict_get(d, "Command");
		size_t cmd_n = 0;
		const char *cmd_s =
			cmd ? irm_bp_string_ptr(cmd, &cmd_n) : NULL;
		if (cmd_s && cmd_n == strlen("ReadyForSync") &&
		    strncmp(cmd_s, "ReadyForSync", cmd_n) == 0) {
			const irm_bp_node *pr = irm_bp_dict_get(d, "Params");
			const irm_bp_node *di =
				pr ? irm_bp_dict_get(pr, "DeviceInfo") : NULL;
			const irm_bp_node *gr =
				di ? irm_bp_dict_get(di, "Grappa") : NULL;
			size_t gn = 0;
			const uint8_t *gb = (const uint8_t *)
				(gr ? irm_bp_data_ptr(gr, &gn) : NULL);
			if (gb) {
				printf("  GRAPPA_REPLY(%zu):", gn);
				for (size_t i = 0; i < gn; i++)
					printf(" %02x", gb[i]);
				printf("\n");
			}
		}
		irm_bp_free(d);
	}
	return got;
}

/* Читает до max кадров [LE32 len][bplist00] из канала сервиса; печатает
 * дампы (XML) каждого dict-кадра; осторожно с мусором — стоп по границам. */
static void atc_read_frames(int fd, int tls, int max)
{
	atc_read_frames_ext(fd, tls, max, 1u << 20, 64 * 1024,
			    SVC_TO_DEFAULT, 2, NULL);
}

/* ================================================================ */
/* atc-talk: реальная клиентская последовательность ATC — HostInfo   */
/* (+ Ping) в ответ на server-first приветствие; read-only, E12.     */
/* ================================================================ */

static int raw_write_full(int fd, const uint8_t *b, size_t n)
{
	size_t sent = 0;
	while (sent < n) {
		ssize_t w = write(fd, b + sent, n - sent);
		if (w < 0) {
			if (errno == EINTR)
				continue;
			return -1;
		}
		if (w == 0)
			return -1;
		sent += (size_t)w;
	}
	return 0;
}

/* ATC-кадр: [LE32 len][bplist00 payload]; len — только payload (E11). */
static int atc_frame_write(int fd, int tls, const irm_bp_node *d)
{
	uint8_t *payload = NULL;
	size_t plen = 0;
	if (irm_bp_write(d, &payload, &plen) != 0)
		return -1;
	uint8_t hdr[4];
	hdr[0] = (uint8_t)(plen & 0xFF);
	hdr[1] = (uint8_t)((plen >> 8) & 0xFF);
	hdr[2] = (uint8_t)((plen >> 16) & 0xFF);
	hdr[3] = (uint8_t)((plen >> 24) & 0xFF);
	int rc = tls ? irm_tls_write_full(fd, hdr, sizeof hdr)
		     : raw_write_full(fd, hdr, sizeof hdr);
	if (rc == 0 && tls)
		rc = irm_tls_write_full(fd, payload, plen);
	else if (rc == 0)
		rc = raw_write_full(fd, payload, plen);
	free(payload);
	return rc;
}

/* Конверт ATCFMessage (формат-факт E11): пять ключей; Type/Session у
 * клиентов константы u64=0 (сервер 04.11 слал ровно так). */
static irm_bp_node *atc_msg(const char *command, uint64_t id,
			    irm_bp_node *params /* переходит владением */)
{
	irm_bp_node *d = irm_bp_dict();
	if (!d || irm_bp_dict_set(d, "Command", irm_bp_string(command)) != 0 ||
	    (params &&
	     irm_bp_dict_set(d, "Params", params) != 0) ||
	    irm_bp_dict_set(d, "Type", irm_bp_uint(0)) != 0 ||
	    irm_bp_dict_set(d, "Session", irm_bp_uint(0)) != 0 ||
	    irm_bp_dict_set(d, "Id", irm_bp_uint(id)) != 0) {
		irm_bp_free(d);
		irm_bp_free(params);
		return NULL;
	}
	if (!params && irm_bp_dict_set(d, "Params", irm_bp_dict()) != 0) {
		irm_bp_free(d);
		return NULL;
	}
	return d;
}

/* Params из FUN_1003335d2 (HostInfo агента): Type=«iTunes», Version,
 * MacOSVersion, SyncHostName, LibraryID, SyncedDataclasses, SyncedAssetTypes,
 * Wakeable. Значения — стартовые заглушки пробника (read-only).
 * version — строка из HostInfo.Params (сервер проверяет её РАНЬШЕ всего:
 * SyncFailed{ErrorCode:12, RequiredVersion:"10.5.0.115"} при «13.5.6.12»). */
static irm_bp_node *atc_hostinfo_params_v(const char *version)
{
	irm_bp_node *p = irm_bp_dict();
	if (!p || irm_bp_dict_set(p, "Type", irm_bp_string("iTunes")) != 0 ||
	    irm_bp_dict_set(p, "Version",
			    irm_bp_string(version)) != 0 ||
	    irm_bp_dict_set(p, "MacOSVersion",
			    irm_bp_string("15.8.2")) != 0)
		goto fail;
	char hn[128];
	hn[0] = 0;
	gethostname(hn, sizeof hn);
	/* SyncHostName — реальный hostname; LibraryID — сгенерированный
	 * пробником псевдослучайный UUID (без привязки к библиотеке). */
	char lid[64];
	snprintf(lid, sizeof lid, "%08x-0000-0000-0000-000000000000",
		 (unsigned)getpid() * 2654435761u);
	if (irm_bp_dict_set(p, "SyncHostName", irm_bp_string(hn)) != 0 ||
	    irm_bp_dict_set(p, "LibraryID", irm_bp_string(lid)) != 0)
		goto fail;
	/* Read-only-пробник: по умолчанию пустые списки dataclass/asset-types,
	 * Wakeable=0 (никаких обещаний синка серверу). IRMA_ATC_SYNCED_DC=1 —
	 * SyncedDataclasses=["Media"] (для v12: согласованность классов с
	 * RequestingSync.Params). */
	const char *sdc = getenv("IRMA_ATC_SYNCED_DC");
	irm_bp_node *arr = irm_bp_array();
	if (!arr || irm_bp_dict_set(p, "SyncedDataclasses", arr) != 0) {
		irm_bp_free(arr);
		goto fail;
	}
	if (sdc && *sdc == '1') {
		irm_bp_node *dc = irm_bp_array();
		if (!dc || irm_bp_array_add(dc, irm_bp_string("Media")) != 0 ||
		    irm_bp_dict_set(p, "SyncedDataclasses", dc) != 0) {
			irm_bp_free(dc);
			goto fail;
		}
	}
	arr = irm_bp_array();
	if (!arr || irm_bp_dict_set(p, "SyncedAssetTypes", arr) != 0) {
		irm_bp_free(arr);
		goto fail;
	}
	/* IRMA_ATC_SYNCED_TYPES="Track,Playlist,..." — заполняет
	 * SyncedAssetTypes (переговоры ассет-типов, R1). */
	const char *sat = getenv("IRMA_ATC_SYNCED_TYPES");
	if (sat && *sat) {
		irm_bp_node *ta = irm_bp_array();
		const char *hod = sat;
		while (*hod) {
			const char *sep = strchr(hod, ',');
			size_t tl = sep ? (size_t)(sep - hod) : strlen(hod);
			char item[64];
			if (tl >= sizeof item)
				tl = sizeof item - 1;
			memcpy(item, hod, tl);
			item[tl] = 0;
			if (!ta || irm_bp_array_add(ta,
						    irm_bp_string(item)) != 0) {
				irm_bp_free(ta);
				goto fail;
			}
			hod = sep ? sep + 1 : hod + tl;
		}
		if (!ta || irm_bp_dict_set(p, "SyncedAssetTypes", ta) != 0) {
			irm_bp_free(ta);
			goto fail;
		}
	}
	if (irm_bp_dict_set(p, "Wakeable", irm_bp_bool(0)) != 0)
		goto fail;
	return p;
fail:
	irm_bp_free(p);
	return NULL;
}

/* Классическая версия для atc-talk (E12 run1-3) — 13.5.6.12 из дизасма. */
static irm_bp_node *atc_hostinfo_params(void)
{
	return atc_hostinfo_params_v("13.5.6.12");
}

/* Подключение к сервису atc с общими шагами (StartService→Connect→TLS). */
static int atc_serve_open(irm_lk_t *lk, const irm_pair_t *pair,
			  const char *path, uint32_t device_id,
			  const char *svc, int *fd_out, int *tls_out)
{
	uint16_t port = 0;
	int ssl = 0;
	if (irm_lk_start_service(lk, svc, &port, &ssl) != 0 || !port) {
		fprintf(stderr, "atc-talk: StartService(%s): %s\n", svc,
			irm_lk_error());
		return -1;
	}
	printf("[%s] port=%u ssl=%d\n", svc, port, ssl);
	int fd = irm_mux_connect(path, device_id, port, 5);
	if (fd < 0) {
		fprintf(stderr, "atc-talk: Connect: %s\n", irm_mux_error());
		return -1;
	}
	int tls = ssl ? svc_tls_start(fd, pair) : 0;
	printf("  канал: %s\n",
	       tls == 1 ? "TLS (lbD-комбо)"
	       : tls == 2 ? "TLS (Apple-комбо)"
	       : ssl ? "TLS не поднялся!"
		     : "сырой");
	*fd_out = fd;
	*tls_out = tls;
	return 0;
}

/* Реальная клиентская последовательность: HostInfo → (кадры) → Ping. */
static int cmd_atc_talk(const char *path, const char *selector)
{
	uint32_t device_id = 0;
	char udid[128] = "-";
	if (find_device(path, selector, &device_id, udid, sizeof udid) != 0)
		return 1;
	printf("device: id=%u udid=%s\n", device_id, udid);

	irm_pair_t *pair = NULL;
	if (irm_pair_load(udid, &pair) != 0) {
		fprintf(stderr, "atc-talk: %s\n", irm_pair_error());
		return 1;
	}
	printf("pair: %s\n", pair->src);

	irm_lk_t *lk = irm_lk_open(path, device_id, IRM_LK_DEFAULT_PORT, 5);
	if (!lk) {
		fprintf(stderr, "atc-talk: lockdown: %s\n", irm_lk_error());
		irm_pair_free(pair);
		return 1;
	}
	irm_bp_node *qt = irm_lk_query_type(lk);
	printf("checkin Type: %s\n", dash(qt ? str_of(qt, "Type") : NULL));
	irm_bp_free(qt);
	if (irm_lk_start_session(lk, pair) != 0) {
		fprintf(stderr, "atc-talk: session: %s\n", irm_lk_error());
		irm_lk_close(lk);
		irm_pair_free(pair);
		return 1;
	}
	printf("session: TLS поднят на lockconn\n");

	int fd = -1;
	int svc_tls = 0;
	int rc = 1;
	/* Q4: IRMA_ATC_SERVICE — подмена имени сервиса (atc/atc2/...). */
	const char *svc_env = getenv("IRMA_ATC_SERVICE");
	const char *svc_name =
		(svc_env && *svc_env) ? svc_env : "com.apple.atc";
	if (atc_serve_open(lk, pair, path, device_id, svc_name,
			   &fd, &svc_tls) == 0) {
		printf(" приветствие сервера:\n");
		atc_read_frames(fd, svc_tls, 3);

		/* Клиентский HostInfo (факт агента: 10033295f → SendHostInfo). */
		irm_bp_node *hp = atc_hostinfo_params();
		if (hp) {
			irm_bp_node *msg = atc_msg("HostInfo", 1, hp);
			uint8_t *out = NULL;
			size_t on = 0;
			if (msg && irm_xml_write(msg, &out, &on) == 0) {
				printf(" отсылаем HostInfo (Id=1):\n");
				fwrite(out, 1, on, stdout);
				printf("\n");
				free(out);
			}
			if (msg && atc_frame_write(fd, svc_tls, msg) == 0) {
				printf(" после HostInfo:\n");
				atc_read_frames(fd, svc_tls, 4);
				rc = 0;
			} else if (msg) {
				fprintf(stderr,
					"atc-talk: write HostInfo: %s\n",
					svc_tls ? "tls-ошибка" : strerror(errno));
				rc = 1;
			}
			irm_bp_free(msg);
		}

		/* Клиентский Ping (агент шлёт Ping по таймеру пустого сессии). */
		irm_bp_node *ping = atc_msg("Ping", 2, NULL);
		if (ping) {
			if (atc_frame_write(fd, svc_tls, ping) == 0) {
				printf(" после Ping (Id=2):\n");
				atc_read_frames(fd, svc_tls, 4);
			} else {
				fprintf(stderr, "atc-talk: write Ping: %s\n",
					svc_tls ? "tls-ошибка" : strerror(errno));
			}
			irm_bp_free(ping);
		}
	}
	if (svc_tls)
		irm_tls_disarm(fd);
	if (fd >= 0)
		irm_mux_close(fd);
	irm_lk_close(lk);
	irm_pair_free(pair);
	return rc;
}

/* Подготовка Params для RequestingSync по варианту пробы R1:
 *  1 = {} (пустой — сервер должен назвать недостающие ключи);
 *  2 = только DataclassAnchors {Media:"0"};
 *  3 = Dataclasses:["Media"] + anchors;
 *  4 = 3 + HostInfo (полный словарь приветствия);
 *  5 = 4, но массив классов под именем SyncDataClasses;
 *  6 = 4, но массив классов под именем SyncDataclasses.
 * hi_params — NEW dict (или NULL для 1/2/3-путей внутри). Возвращает NEW. */
static irm_bp_node *atc_sync_params(int variant, const char *ver)
{
	irm_bp_node *p = irm_bp_dict();
	if (!p)
		return NULL;
	irm_bp_node *anchors = NULL;
	irm_bp_node *classes = NULL;
	irm_bp_node *hi = NULL;
	switch (variant) {
	case 12:
		/* v4 БЕЗ DataclassAnchors: классы + HostInfo (роль яккеров). */
		classes = irm_bp_array();
		if (!classes ||
		    irm_bp_array_add(classes, irm_bp_string("Media")) != 0)
			goto fail;
		if (irm_bp_dict_set(p, "Dataclasses", classes) != 0)
			goto fail;
		hi = atc_hostinfo_params_v(ver && *ver ? ver : "13.5.6.12");
		if (!hi || irm_bp_dict_set(p, "HostInfo", hi) != 0) {
			irm_bp_free(hi);
			goto fail;
		}
		return p;
	case 1:
		break; /* пусто */
	case 2:
		/* только DataclassAnchors (без классов и HostInfo) */
		anchors = irm_bp_dict();
		if (!anchors ||
		    irm_bp_dict_set(anchors, "Media",
				    irm_bp_string("0")) != 0 ||
		    irm_bp_dict_set(p, "DataclassAnchors", anchors) != 0)
			goto fail;
		return p;
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 10:
	case 11:
	case 15:
	case 16:
	case 17:
		anchors = irm_bp_dict();
		if (!anchors ||
		    irm_bp_dict_set(anchors, variant == 10 ? "Music" :
						   "Media",
				    variant == 17 ? irm_bp_string(
							    "4294967295") :
				    variant == 11 ? irm_bp_uint(0) :
						    irm_bp_string("0")) !=
			    0)
			goto fail;
		classes = irm_bp_array();
		if (!classes ||
		    irm_bp_array_add(
			    classes,
			    irm_bp_string(variant == 10 ? "Music" :
					  "Media")) != 0)
			goto fail;
		if (irm_bp_dict_set(p,
			      variant == 5 ? "SyncDataClasses" :
			      variant == 6 ? "SyncDataclasses" :
					     "Dataclasses",
			      classes) != 0)
			goto fail;
		if (irm_bp_dict_set(p, "DataclassAnchors", anchors) != 0)
			goto fail;
		if (variant == 7) {
			/* Гипотеза: современный atcd хочет карту режимов
			 * синка в самом запроее (из старого корпуса они
			 * приходят только в FinishedSyncingMetadata). */
			irm_bp_node *st = irm_bp_dict();
			if (!st ||
			    irm_bp_dict_set(st, "Media",
					    irm_bp_string(
						    "ATSyncDeltaSync")) !=
				    0 ||
			    irm_bp_dict_set(p, "SyncTypes", st) != 0)
				goto fail;
		}
		if (variant >= 4) {
			hi = atc_hostinfo_params_v(ver && *ver ? ver :
						   "13.5.6.12");
			if (!hi)
				goto fail;
			if (variant == 15 || variant == 16) {
				/* Гипотеза переговоров: хост отвечает зеркалом
				 * GrappaSupportInfo сервера; v16 — сиблинг
				 * HostInfo (в Params), v15 — внутри HostInfo. */
				irm_bp_node *gs = irm_bp_dict();
				irm_bp_node *gi = irm_bp_dict();
				if (!gs || !gi ||
				    irm_bp_dict_set(gi, "version",
						    irm_bp_uint(1)) != 0 ||
				    irm_bp_dict_set(gi, "deviceType",
						    irm_bp_uint(0)) != 0 ||
				    irm_bp_dict_set(gi, "protocolVersion",
						    irm_bp_uint(1)) != 0 ||
				    irm_bp_dict_set(gs, "GrappaSupportInfo",
						    gi) != 0) {
					irm_bp_free(gs);
					goto fail;
				}
				/* Зеркало Capabilities: v16 — сиблинг HostInfo
				 * (в Params), v15 — внутри HostInfo. */
				if (irm_bp_dict_set(
					    variant == 16 ? p : hi,
					    "GrappaSupportInfo", gs) != 0) {
					irm_bp_free(gs);
					goto fail;
				}
			}
			if (irm_bp_dict_set(p, "HostInfo", hi) != 0) {
				irm_bp_free(hi);
				goto fail;
			}
		}
		return p;
	default:
		break;
	}
	return p;
fail:
	irm_bp_free(classes);
	irm_bp_free(anchors);
	irm_bp_free(hi);
	irm_bp_free(p);
	return NULL;
}

/* atc-sync: read-only проба RequestingSync (R1 из E12): прощупывание
 * wire-имен Params по валидатору сервера (вариант 1 — пустой Params). */
static int cmd_atc_sync(const char *path, const char *selector,
			int variant)
{
	uint32_t device_id = 0;
	char udid[128] = "-";
	if (find_device(path, selector, &device_id, udid, sizeof udid) != 0)
		return 1;
	printf("device: id=%u udid=%s\n", device_id, udid);

	irm_pair_t *pair = NULL;
	if (irm_pair_load(udid, &pair) != 0) {
		fprintf(stderr, "atc-sync: %s\n", irm_pair_error());
		return 1;
	}
	printf("pair: %s\n", pair->src);

	irm_lk_t *lk = irm_lk_open(path, device_id, IRM_LK_DEFAULT_PORT, 5);
	if (!lk) {
		fprintf(stderr, "atc-sync: lockdown: %s\n", irm_lk_error());
		irm_pair_free(pair);
		return 1;
	}
	irm_bp_node *qt = irm_lk_query_type(lk);
	printf("checkin Type: %s\n", dash(qt ? str_of(qt, "Type") : NULL));
	irm_bp_free(qt);
	if (irm_lk_start_session(lk, pair) != 0) {
		fprintf(stderr, "atc-sync: session: %s\n", irm_lk_error());
		irm_lk_close(lk);
		irm_pair_free(pair);
		return 1;
	}
	printf("session: TLS поднят на lockconn\n");

	int fd = -1;
	int svc_tls = 0;
	int rc = 1;
	/* Q4: IRMA_ATC_SERVICE — подмена имени сервиса (atc/atc2/...). */
	const char *svc_env = getenv("IRMA_ATC_SERVICE");
	const char *svc_name =
		(svc_env && *svc_env) ? svc_env : "com.apple.atc";
	if (atc_serve_open(lk, pair, path, device_id, svc_name,
			   &fd, &svc_tls) == 0) {
		printf(" приветствие сервера:\n");
		atc_read_frames(fd, svc_tls, 3);

		/* Сначала — стандартный HostInfo (run1-3: принимается).
		 * Версия прогружаемая: сервер сверяет её РАНЬШЕ валидации
		 * Params RequestingSync (SyncFailed ErrorCode 12,
		 * RequiredVersion "10.5.0.115"). */
		const char *ver = getenv("IRMA_ATC_VERSION");
		irm_bp_node *hp = atc_hostinfo_params_v(
			ver && *ver ? ver : "13.5.6.12");
		irm_bp_node *msg = hp ? atc_msg("HostInfo", 1, hp) : NULL;
		if (msg && atc_frame_write(fd, svc_tls, msg) == 0) {
			/* Читаем ТОЛЬКО SyncAllowed (1 кадр) — после него у
			 * сервера короткий idle-бюджет (Ping×2 → IdleExit),
			 * запрос должен уйти мгновенно (run5-факт). */
			int stop = 0;
			atc_read_frames_ext(fd, svc_tls, 1, 16u << 20,
					    16 * 1024, 12, 1, &stop);
		} else if (msg) {
			fprintf(stderr, "atc-sync: write HostInfo: %s\n",
				svc_tls ? "tls-ошибка" : strerror(errno));
		}
		irm_bp_free(msg);

		/* Проба RequestingSync: вариант variant. */
		const char *ver2 = getenv("IRMA_ATC_VERSION");
		irm_bp_node *sp = atc_sync_params(variant, ver2);
		msg = sp ? atc_msg("RequestingSync", 3, sp) : NULL;
		if (msg) {
			uint8_t *out = NULL;
			size_t on = 0;
			if (irm_xml_write(msg, &out, &on) == 0) {
				printf(" отсылаем RequestingSync "
				       "(Id=3, вариант %d):\n",
				       variant);
				fwrite(out, 1, on, stdout);
				printf("\n");
				free(out);
			}
			if (atc_frame_write(fd, svc_tls, msg) == 0) {
				printf(" после RequestingSync:\n");
				/* Пока сервер проводит prepare, каналы могут
				 * молчать десятки секунд: окна 8 кадров по
				 * 20 с; продолжаем до EOF/готовности. */
				int stop = 0;
				int total = 0;
				for (int w = 0; w < 6; w++) {
					int nf = atc_read_frames_ext(
						fd, svc_tls, 8, 16u << 20,
						96 * 1024, 20, 2, &stop);
					total += nf;
					if (stop == -3)
						break; /* EOF — конец */
					if (stop != -2)
						break; /* рамка битая */
					printf(" (окно %d: тишина, "
					       "продолжаем)\n",
					       w + 1);
				}
				printf(" прочитано кадров: %d\n",
				       total);
				rc = 0;
			} else {
				fprintf(stderr,
					"atc-sync: write RequestingSync: "
					"%s\n",
					svc_tls ? "tls-ошибка" :
						strerror(errno));
			}
			irm_bp_free(msg);
		} else {
			fprintf(stderr, "atc-sync: сбор Params варианта %d "
					"не удался\n",
				variant);
		}
	}
	if (svc_tls)
		irm_tls_disarm(fd);
	if (fd >= 0)
		irm_mux_close(fd);
	irm_lk_close(lk);
	irm_pair_free(pair);
	return rc;
}

/* Системный лог устройства (com.apple.mobile.syslog_relay): StartService
 * → (TLS?) → сырой поток N секунд в stdout (UI-нейтрально: raw-байты).
 * Синхронно с atc-sync: ищем сообщения atcd про RequestingSync (R1). */
static int cmd_syslog(const char *path, const char *selector,
		      const char *secs)
{
	uint32_t device_id = 0;
	char udid[128] = "-";
	if (find_device(path, selector, &device_id, udid, sizeof udid) != 0)
		return 1;
	printf("device: id=%u udid=%s\n", device_id, udid);

	irm_pair_t *pair = NULL;
	if (irm_pair_load(udid, &pair) != 0) {
		fprintf(stderr, "syslog: %s\n", irm_pair_error());
		return 1;
	}
	irm_lk_t *lk = irm_lk_open(path, device_id, IRM_LK_DEFAULT_PORT, 5);
	if (!lk) {
		fprintf(stderr, "syslog: lockdown: %s\n", irm_lk_error());
		irm_pair_free(pair);
		return 1;
	}
	irm_bp_node *qt = irm_lk_query_type(lk);
	printf("checkin Type: %s\n", dash(qt ? str_of(qt, "Type") : NULL));
	irm_bp_free(qt);
	if (irm_lk_start_session(lk, pair) != 0) {
		fprintf(stderr, "syslog: session: %s\n", irm_lk_error());
		irm_lk_close(lk);
		irm_pair_free(pair);
		return 1;
	}
	int fd = -1;
	int tls = 0;
	int rc = 1;
	if (atc_serve_open(lk, pair, path, device_id,
			   "com.apple.mobile.syslog_relay",
			   &fd, &tls) == 0) {
		int to = secs ? atoi(secs) : 20;
		if (to < 5)
			to = 5;
		time_t end = time(NULL) + to;
		long total = 0;
		printf("[syslog] стрим %d с:\n", to);
		fflush(stdout);
		while (time(NULL) < end) {
			uint8_t c;
			if (svc_read_full_t(fd, tls, &c, 1, 2) != 0)
				continue;
			fputc((int)c, stdout);
			total++;
			if (c == 0) {
				fflush(stdout);
			} else if (total % 512 == 0) {
				fflush(stdout);
			}
			if (ferror(stdout))
				break;
		}
		printf("\n[syslog] прочитано байт: %ld\n", total);
		rc = 0;
	}
	if (tls)
		irm_tls_disarm(fd);
	if (fd >= 0)
		irm_mux_close(fd);
	irm_lk_close(lk);
	irm_pair_free(pair);
	return rc;
}

/* lk-dump: read-only GetValue выбранных доменов lockdown ВНУТРИ StartSession
 * (без сессии часть ключей = GetProhibited, E11 §1). Цель: сохранённые
 * библиотеки/LibraryID/синк-домены (гипотеза R1a для NegotiationFailed).
 * Аргумент DOMAIN[/KEY] переопределяет список по умолчанию (пустой → всё). */
static int cmd_lkdump(const char *path, const char *selector,
		      const char *argd)
{
	uint32_t device_id = 0;
	char udid[128] = "-";
	if (find_device(path, selector, &device_id, udid, sizeof udid) != 0)
		return 1;
	printf("device: id=%u udid=%s\n", device_id, udid);
	irm_pair_t *pair = NULL;
	if (irm_pair_load(udid, &pair) != 0) {
		fprintf(stderr, "lk-dump: %s\n", irm_pair_error());
		return 1;
	}
	irm_lk_t *lk = irm_lk_open(path, device_id, IRM_LK_DEFAULT_PORT, 5);
	if (!lk) {
		fprintf(stderr, "lk-dump: lockdown: %s\n", irm_lk_error());
		irm_pair_free(pair);
		return 1;
	}
	irm_bp_node *qt = irm_lk_query_type(lk);
	printf("checkin Type: %s\n", dash(qt ? str_of(qt, "Type") : NULL));
	irm_bp_free(qt);
	if (irm_lk_start_session(lk, pair) != 0) {
		fprintf(stderr, "lk-dump: session: %s\n", irm_lk_error());
		irm_lk_close(lk);
		irm_pair_free(pair);
		return 1;
	}
	int rc = 1;
	/* Список доменов-кандидатов (R1a: per-library записи). Специфичный
	 * DOMAIN[/KEY] из аргумента читается дополнительно. */
	static const char *const doms[] = {
		"com.apple.mobile.data_sync",
		"com.apple.mobile.application_usage",
		"com.apple.mobile.user_preferences",
		"com.apple.mobile.wireless_lockdown",
		"com.apple.mobile.internal",
		"com.apple.mobile.persist",
		NULL
	};
	size_t d = 0;
	if (argd && *argd) {
		char dom[256];
		snprintf(dom, sizeof dom, "%s", argd);
		char *slash = strchr(dom, '/');
		const char *key = NULL;
		if (slash) {
			*slash = 0;
			key = slash + 1;
		}
		irm_bp_node *v = irm_lk_get_value(lk, dom, key);
		printf("=== %s/%s\n", dom, key ? key : "*");
		if (v) {
			uint8_t *xm = NULL;
			size_t xn = 0;
			if (irm_xml_write(v, &xm, &xn) == 0) {
				fwrite(xm, 1, xn, stdout);
				printf("\n");
				free(xm);
			}
			irm_bp_free(v);
		} else {
			printf("  (ошибка: %s)\n", irm_lk_error());
		}
	}
	for (; doms[d]; d++) {
		irm_bp_node *v = irm_lk_get_value(lk, doms[d], NULL);
		printf("=== %s\n", doms[d]);
		if (v) {
			uint8_t *xm = NULL;
			size_t xn = 0;
			if (irm_xml_write(v, &xm, &xn) == 0) {
				fwrite(xm, 1, xn, stdout);
				printf("\n");
				free(xm);
			}
			irm_bp_free(v);
		} else {
			printf("  (ошибка: %s)\n", irm_lk_error());
		}
	}
	rc = 0;
	irm_lk_close(lk);
	irm_pair_free(pair);
	return rc;
}

/* ==================== atc-handshake (R2) ==================== */
/* Точный протокол по опубликованным CONFIRMED-фактам rustunes
 * (github.com/fbiba/rustunes, MIT, Feim Biba 2026; wire-серия
 * §3–7, ссылки в E13):
 *   - Envelope хоста: {Session, Command, [Params]} БЕЗ Type/Id;
 *   - Ping {Session:1, Command:"Ping"} без Params;
 *   - RequestingSync {Session:2, Params:{HostInfo{Type,Version,
 *     WindowsOSVersion, SyncHostName, LibraryID(%016llX),
 *     SyncedDataclasses:[Media], SyncedAssetTypes:[Music],
 *     Wakeable:0-int, Grappa:data 84B}, DataclassAnchors{Media:"A",
 *     VoiceMemo:"1"}, Dataclasses:[Media,Book,Keybag]}};
 *   - фиксированный 84-байтовый Grappa-запрос — public-константа
 *     go-tunes (через rustunes signing.rs §11.4);
 *   - ожидаем ReadyForSync{Params:{DataclassAnchors,DeviceInfo{Grappa:data 83B}}}.
 * Read-only: ничего не стадируем по AFC, FinishedSyncingMetadata
 * НЕ шлём — телефон ничего не применяет (rustunes §14.3). */
static const uint8_t GRAPPA_HOST_REQUEST[84] = {
	0x01, 0x01, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11,
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x04, 0x40,
	0xbc, 0x27, 0x85, 0xe0, 0xdb, 0xf1, 0x66, 0x36, 0x1e, 0x07,
	0x98, 0x0a, 0x5e, 0xa4, 0x8d, 0xba, 0x95, 0xb3, 0xb8, 0xea,
	0x26, 0x5d, 0x62, 0xae, 0xfe, 0xa5, 0x1b, 0xb7, 0xb1, 0x90,
	0xe0, 0xb7, 0x71, 0x26, 0x29, 0x0a, 0xd3, 0x9b, 0xb1, 0x3f,
	0xec, 0xc0, 0x8c, 0x25, 0xa9, 0x56, 0x1c, 0x51, 0x7a, 0xc1,
	0x1e, 0x64, 0x90, 0x5d, 0xa0, 0x29, 0xe6, 0x1b, 0xdf, 0xd0,
	0xba, 0x22, 0xc3, 0x13
};

/* Конверт хоста: {Session, Command, [Params]} — БЕЗ Type/Id. */
static irm_bp_node *atc_host_msg(uint64_t session, const char *command,
				 irm_bp_node *params)
{
	irm_bp_node *m = irm_bp_dict();
	if (!m)
		return NULL;
	if (irm_bp_dict_set(m, "Session", irm_bp_uint(session)) != 0 ||
	    irm_bp_dict_set(m, "Command", irm_bp_string(command)) != 0)
		goto fail;
	if (params && irm_bp_dict_set(m, "Params", params) != 0)
		goto fail;
	return m;
fail:
	irm_bp_free(params);
	irm_bp_free(m);
	return NULL;
}

static int cmd_atc_handshake(const char *path, const char *selector)
{
	uint32_t device_id = 0;
	char udid[128] = "-";
	if (find_device(path, selector, &device_id, udid, sizeof udid) != 0)
		return 1;
	printf("device: id=%u udid=%s\n", device_id, udid);

	irm_pair_t *pair = NULL;
	if (irm_pair_load(udid, &pair) != 0) {
		fprintf(stderr, "atc-handshake: %s\n", irm_pair_error());
		return 1;
	}
	printf("pair: %s\n", pair->src);

	irm_lk_t *lk = irm_lk_open(path, device_id, IRM_LK_DEFAULT_PORT, 5);
	if (!lk) {
		fprintf(stderr, "atc-handshake: lockdown: %s\n",
			irm_lk_error());
		irm_pair_free(pair);
		return 1;
	}
	irm_bp_node *qt = irm_lk_query_type(lk);
	printf("checkin Type: %s\n", dash(qt ? str_of(qt, "Type") : NULL));
	irm_bp_free(qt);
	if (irm_lk_start_session(lk, pair) != 0) {
		fprintf(stderr, "atc-handshake: session: %s\n",
			irm_lk_error());
		irm_lk_close(lk);
		irm_pair_free(pair);
		return 1;
	}
	printf("session: TLS поднят на lockconn\n");

	int fd = -1;
	int svc_tls = 0;
	int rc = 1;
	const char *svc_env = getenv("IRMA_ATC_SERVICE");
	const char *svc_name =
		(svc_env && *svc_env) ? svc_env : "com.apple.atc";
	if (atc_serve_open(lk, pair, path, device_id, svc_name,
			   &fd, &svc_tls) != 0) {
		irm_lk_close(lk);
		irm_pair_free(pair);
		return 1;
	}

	/* 1) Ping, Session 1 — читаем кадры по одному, останавливаемся
	 * СРАЗУ на SyncAllowed (короткий idle-бюджет сервера). */
	irm_bp_node *ping = atc_host_msg(1, "Ping", NULL);
	if (!ping || atc_frame_write(fd, svc_tls, ping) != 0) {
		fprintf(stderr, "atc-handshake: Ping: %s\n",
			svc_tls ? "tls-ошибка" : strerror(errno));
		irm_bp_free(ping);
		goto close;
	}
	irm_bp_free(ping);

	int got_syncallowed = 0;
	for (int k = 1; k <= 10 && !got_syncallowed; k++) {
		uint8_t lb[4];
		if (svc_read_full_t(fd, svc_tls, lb, sizeof lb, 15) != 0)
			break;
		uint32_t len = (uint32_t)lb[0] | ((uint32_t)lb[1] << 8) |
			       ((uint32_t)lb[2] << 16) | ((uint32_t)lb[3] << 24);
		if (len < 8 || len > (8u << 20))
			break;
		uint8_t *body = (uint8_t *)malloc(len);
		if (!body)
			break;
		if (svc_read_full_t(fd, svc_tls, body, len, 15) != 0) {
			free(body);
			break;
		}
		irm_bp_node *d = (memcmp(body, "bplist00", 8) == 0)
					 ? irm_bp_read(body, len)
					 : NULL;
		free(body);
		printf("  кадр %d: len=%u ", k, len);
		const char *cmdc = d ? str_of(d, "Command") : NULL;
		printf("Command=%s\n", dash(cmdc));
		if (!d) {
			break;
		}
		if (cmdc && strcmp(cmdc, "SyncAllowed") == 0) {
			got_syncallowed = 1;
		} else if (cmdc && strcmp(cmdc, "Ping") == 0) {
			/* Телефонный Ping в idle-окне: отвечаем Pong. */
			irm_bp_node *pong = atc_host_msg(1, "Pong", NULL);
			if (pong)
				atc_frame_write(fd, svc_tls, pong);
			irm_bp_free(pong);
		}
		irm_bp_free(d);
		if (!got_syncallowed)
			continue;
		break;
	}
	if (!got_syncallowed)
		printf("  (SyncAllowed не увиден — идти по кадру)\n");

	/* 2) RequestingSync, Session 2 — точный профиль Apple-хоста. */
	irm_bp_node *info = irm_bp_dict();
	irm_bp_node *sd_arr = irm_bp_array();
	irm_bp_node *sat_arr = irm_bp_array();
	irm_bp_node *anchors = irm_bp_dict();
	irm_bp_node *fclasses = irm_bp_array();
	irm_bp_node *params = irm_bp_dict();
	if (!info || !sd_arr || !sat_arr || !anchors || !fclasses ||
	    !params)
		goto build_fail;

	/* LibraryID: %016llX. env IRMA_ATC_LIBID переопределяет. */
	char libid[17];
	const char *lib_env = getenv("IRMA_ATC_LIBID");
	if (lib_env && strlen(lib_env) == 16) {
		snprintf(libid, sizeof libid, "%.16s", lib_env);
	} else {
		snprintf(libid, sizeof libid, "%016llX",
			 (unsigned long long)0x7CEB3C99F2D94B21ull);
	}
	const char *ver_env = getenv("IRMA_ATC_VERSION");
	const char *ver = (ver_env && *ver_env) ? ver_env : "13.2.4.123";
	const char *anch_env = getenv("IRMA_ATC_ANCHOR");
	char anch[16];
	snprintf(anch, sizeof anch, "%s",
		 (anch_env && *anch_env) ? anch_env : "1");
	char hn[128];
	hn[0] = 0;
	gethostname(hn, sizeof hn);

	if (irm_bp_dict_set(info, "Type", irm_bp_string("iTunes")) != 0 ||
	    irm_bp_dict_set(info, "Version", irm_bp_string(ver)) != 0 ||
	    irm_bp_dict_set(info, "WindowsOSVersion",
			    irm_bp_string("10.0")) != 0 ||
	    irm_bp_dict_set(info, "SyncHostName", irm_bp_string(hn)) != 0 ||
	    irm_bp_dict_set(info, "LibraryID", irm_bp_string(libid)) != 0 ||
	    irm_bp_dict_set(info, "Wakeable", irm_bp_uint(0)) != 0)
		goto build_fail;
	if (irm_bp_array_add(sd_arr, irm_bp_string("Media")) != 0 ||
	    irm_bp_dict_set(info, "SyncedDataclasses", sd_arr) != 0)
		goto build_fail;
	sd_arr = NULL;
	if (irm_bp_array_add(sat_arr, irm_bp_string("Music")) != 0 ||
	    irm_bp_dict_set(info, "SyncedAssetTypes", sat_arr) != 0)
		goto build_fail;
	sat_arr = NULL;
	if (irm_bp_dict_set(
		    info, "Grappa",
		    irm_bp_data(GRAPPA_HOST_REQUEST,
				sizeof GRAPPA_HOST_REQUEST)) != 0)
		goto build_fail;

	if (irm_bp_dict_set(anchors, "Media", irm_bp_string(anch)) != 0 ||
	    irm_bp_dict_set(anchors, "VoiceMemo", irm_bp_string("1")) != 0)
		goto build_fail;
	if (irm_bp_array_add(fclasses, irm_bp_string("Media")) != 0 ||
	    irm_bp_array_add(fclasses, irm_bp_string("Book")) != 0 ||
	    irm_bp_array_add(fclasses, irm_bp_string("Keybag")) != 0)
		goto build_fail;
	if (irm_bp_dict_set(params, "HostInfo", info) != 0)
		goto build_fail;
	info = NULL;
	if (irm_bp_dict_set(params, "Dataclasses", fclasses) != 0)
		goto build_fail;
	fclasses = NULL;
	if (irm_bp_dict_set(params, "DataclassAnchors", anchors) != 0)
		goto build_fail;
	anchors = NULL;

	irm_bp_node *req = atc_host_msg(2, "RequestingSync", params);
	params = NULL;
	if (!req || atc_frame_write(fd, svc_tls, req) != 0) {
		fprintf(stderr, "atc-handshake: RequestingSync: %s\n",
			svc_tls ? "tls-ошибка" : strerror(errno));
		irm_bp_free(req);
		goto close;
	}
	{
		uint8_t *out = NULL;
		size_t on = 0;
		if (irm_xml_write(req, &out, &on) == 0) {
			printf(" отсылаем RequestingSync (Session=2):\n");
			fwrite(out, 1, on, stdout);
			printf("\n");
			free(out);
		}
		irm_bp_free(req);
	}

	/* 3) Ждём ReadyForSync. Больше НИЧЕГО не шлём: session живёт,
	 * телефон ничего не применяет — close = отмена, state-read-only. */
	printf(" ожидание ReadyForSync (окна 12 с, до 8 кадр.):\n");
	int stop = 0;
	for (int w = 0; w < 4; w++) {
		int nf = atc_read_frames_ext(fd, svc_tls, 8, 8u << 20,
					     64 * 1024, 12, 2, &stop);
		if (nf > 0)
			break; /* нашли ответ — дамп уже напечатан */
		if (stop == -3 || stop != -2)
			break;
		printf(" (окно %d: тишина)\n", w + 1);
	}
	rc = 0;
	goto close;
build_fail:
	irm_bp_free(info);
	irm_bp_free(sd_arr);
	irm_bp_free(sat_arr);
	irm_bp_free(anchors);
	irm_bp_free(fclasses);
	irm_bp_free(params);
	fprintf(stderr, "atc-handshake: сбор кадра не удался\n");
close:
	if (svc_tls)
		irm_tls_disarm(fd);
	if (fd >= 0)
		irm_mux_close(fd);
	irm_lk_close(lk);
	irm_pair_free(pair);
	return rc;
}

/* ==================== 9d+: общие конструкторы Params ==================== */

/* LibraryID хоста: 16 UPPERCASE hex (%016llX). env IRMA_ATC_LIBID —
 * 16 hex-знаков поверх (frpd-значение даёт irmctl music-id). */
static void atc_host_libid(char libid[17])
{
	const char *e = getenv("IRMA_ATC_LIBID");
	if (e && strlen(e) == 16) {
		memcpy(libid, e, 16);
	} else {
		snprintf(libid, 17, "%016llX",
			 (unsigned long long)0x7CEB3C99F2D94B21ull);
	}
	libid[16] = 0;
}

/* Params.RequestingSync: HostInfo{...} + Dataclasses[Media,Book,Keybag] +
 * DataclassAnchors{Media:"A", VoiceMemo:"1"}. Используется и atc-handshake,
 * и atc-delta (один и тот же wire-профиль Apple-хоста, E13 §2). */
static irm_bp_node *atc_build_rs_params(const char *ver, const char *anch)
{
	irm_bp_node *info = irm_bp_dict();
	irm_bp_node *sd_arr = irm_bp_array();
	irm_bp_node *sat_arr = irm_bp_array();
	irm_bp_node *anchors = irm_bp_dict();
	irm_bp_node *fclasses = irm_bp_array();
	irm_bp_node *params = irm_bp_dict();
	if (!info || !sd_arr || !sat_arr || !anchors || !fclasses || !params)
		goto fail;

	char libid[17];
	atc_host_libid(libid);
	char hn[128];
	hn[0] = 0;
	gethostname(hn, sizeof hn);

	if (irm_bp_dict_set(info, "Type", irm_bp_string("iTunes")) != 0 ||
	    irm_bp_dict_set(info, "Version", irm_bp_string(ver)) != 0 ||
	    irm_bp_dict_set(info, "WindowsOSVersion",
			    irm_bp_string("10.0")) != 0 ||
	    irm_bp_dict_set(info, "SyncHostName", irm_bp_string(hn)) != 0 ||
	    irm_bp_dict_set(info, "LibraryID", irm_bp_string(libid)) != 0 ||
	    irm_bp_dict_set(info, "Wakeable", irm_bp_uint(0)) != 0)
		goto fail;
	if (irm_bp_array_add(sd_arr, irm_bp_string("Media")) != 0 ||
	    irm_bp_dict_set(info, "SyncedDataclasses", sd_arr) != 0)
		goto fail;
	sd_arr = NULL;
	if (irm_bp_array_add(sat_arr, irm_bp_string("Music")) != 0 ||
	    irm_bp_dict_set(info, "SyncedAssetTypes", sat_arr) != 0)
		goto fail;
	sat_arr = NULL;
	if (irm_bp_dict_set(info, "Grappa",
			    irm_bp_data(GRAPPA_HOST_REQUEST,
					sizeof GRAPPA_HOST_REQUEST)) != 0)
		goto fail;

	if (irm_bp_dict_set(params, "HostInfo", info) != 0)
		goto fail;
	info = NULL;
	if (irm_bp_dict_set(anchors, "Media", irm_bp_string(anch)) != 0 ||
	    irm_bp_dict_set(anchors, "VoiceMemo", irm_bp_string("1")) != 0)
		goto fail;
	if (irm_bp_dict_set(params, "DataclassAnchors", anchors) != 0)
		goto fail;
	anchors = NULL;
	if (irm_bp_array_add(fclasses, irm_bp_string("Media")) != 0 ||
	    irm_bp_array_add(fclasses, irm_bp_string("Book")) != 0 ||
	    irm_bp_array_add(fclasses, irm_bp_string("Keybag")) != 0)
		goto fail;
	if (irm_bp_dict_set(params, "Dataclasses", fclasses) != 0)
		goto fail;
	fclasses = NULL;
	return params;
fail:
	irm_bp_free(info);
	irm_bp_free(sd_arr);
	irm_bp_free(sat_arr);
	irm_bp_free(anchors);
	irm_bp_free(fclasses);
	irm_bp_free(params);
	return NULL;
}

/* Params.FinishedSyncingMetadata: DataclassAnchors{Media:"A",VoiceMemo:"1"}
 * + SyncTypes{Media:1, Book:0, Keybag:1} (E14 §4: у пустого Delta
 * анкер НЕ растёт — остаётся A; уже сам Apple-хост не стадит файлы). */
static irm_bp_node *atc_build_fsfm_params(const char *anch)
{
	irm_bp_node *anchors = irm_bp_dict();
	irm_bp_node *types = irm_bp_dict();
	irm_bp_node *params = irm_bp_dict();
	if (!anchors || !types || !params)
		goto fail;
	if (irm_bp_dict_set(anchors, "Media", irm_bp_string(anch)) != 0 ||
	    irm_bp_dict_set(anchors, "VoiceMemo", irm_bp_string("1")) != 0)
		goto fail;
	if (irm_bp_dict_set(types, "Media", irm_bp_uint(1)) != 0 ||
	    irm_bp_dict_set(types, "Book", irm_bp_uint(0)) != 0 ||
	    irm_bp_dict_set(types, "Keybag", irm_bp_uint(1)) != 0)
		goto fail;
	if (irm_bp_dict_set(params, "DataclassAnchors", anchors) != 0)
		goto fail;
	anchors = NULL;
	if (irm_bp_dict_set(params, "SyncTypes", types) != 0)
		goto fail;
	types = NULL;
	return params;
fail:
	irm_bp_free(anchors);
	irm_bp_free(types);
	irm_bp_free(params);
	return NULL;
}

/* Читает кадры до ReadyForSync (телеметрия пропускается, телефонный Ping
 * → наш Pong в его Session), печатает XML и GRAPPA_REPLY-hex; сводит
 * анкер Media в *ready_anchor (dec-текст). 0 — Ready есть; прочее —
 * EOF/таймаут/лимит.idle-бюджет сервера короткий (~10–15 c).
 * grappa_out (если не NULL) — ТОЧНАЯ копия байт DeviceInfo.Grappa
 * (malloc, владение у вызывающего; длина в *grappa_len) — 9f: сырьё
 * для irm_grappa_from_reply. */
static int atc_wait_ready(int fd, int tls, char *ready_anchor,
			  size_t ra_cap, uint8_t **grappa_out,
			  size_t *grappa_len)
{
	if (grappa_out) {
		*grappa_out = NULL;
		*grappa_len = 0;
	}
	for (int k = 1; k <= 12; k++) {
		uint8_t lb[4];
		if (svc_read_full_t(fd, tls, lb, sizeof lb, 15) != 0)
			return -1;
		uint32_t len = (uint32_t)lb[0] | ((uint32_t)lb[1] << 8) |
			       ((uint32_t)lb[2] << 16) | ((uint32_t)lb[3] << 24);
		if (len < 8 || len > (8u << 20))
			return -1;
		uint8_t *body = (uint8_t *)malloc(len);
		if (!body)
			return -1;
		if (svc_read_full_t(fd, tls, body, len, 15) != 0) {
			free(body);
			return -1;
		}
		irm_bp_node *d = (memcmp(body, "bplist00", 8) == 0)
					 ? irm_bp_read(body, len)
					 : NULL;
		free(body);
		if (!d)
			return -1;
		const char *cmdc = str_of(d, "Command");
		printf("  кадр %d: len=%u Command=%s\n", k, len,
		       dash(cmdc));
		if (cmdc && strcmp(cmdc, "ReadyForSync") == 0) {
			if (len <= 64 * 1024) {
				uint8_t *xm = NULL;
				size_t xn = 0;
				if (irm_xml_write(d, &xm, &xn) == 0) {
					printf("  dump:\n");
					fwrite(xm, 1, xn, stdout);
					printf("\n");
					free(xm);
				}
			}
			/* DeviceInfo.Grappa — точные байты (для
			 * расчётной подписи; E13 §3.1, только hex). */
			{
				const irm_bp_node *pr =
					irm_bp_dict_get(d, "Params");
				const irm_bp_node *di =
					pr ? irm_bp_dict_get(pr, "DeviceInfo")
					   : NULL;
				const irm_bp_node *gr =
					di ? irm_bp_dict_get(di, "Grappa")
					   : NULL;
				size_t gn = 0;
				const uint8_t *gb =
					(const uint8_t *)(gr ? irm_bp_data_ptr(
								     gr, &gn)
							     : NULL);
				if (gb) {
					printf("  GRAPPA_REPLY(%zu):", gn);
					for (size_t i = 0; i < gn; i++)
						printf(" %02x", gb[i]);
					printf("\n");
					if (grappa_out) {
						*grappa_out =
							(uint8_t *)malloc(
								gn ? gn : 1);
						if (*grappa_out) {
							memcpy(*grappa_out, gb,
							       gn);
							*grappa_len = gn;
						} else {
							*grappa_len = 0;
						}
					}
				}
			}
			const irm_bp_node *pr = irm_bp_dict_get(d, "Params");
			const irm_bp_node *ancs =
				pr ? irm_bp_dict_get(pr, "DataclassAnchors")
				   : NULL;
			const irm_bp_node *md =
				ancs ? irm_bp_dict_get(ancs, "Media") : NULL;
			if (md) {
				size_t mn = 0;
				const char *mv = irm_bp_string_ptr(md, &mn);
				snprintf(ready_anchor, ra_cap, "%.*s",
					 (int)(mn < ra_cap - 1 ? mn
							       : ra_cap - 1),
					 mv);
			}
			irm_bp_free(d);
			return 0;
		}
		if (cmdc && strcmp(cmdc, "Ping") == 0) {
			const irm_bp_node *sn = irm_bp_dict_get(d, "Session");
			uint64_t ses = sn ? irm_bp_uint_value(sn) : 2;
			irm_bp_node *pong = atc_host_msg(ses, "Pong", NULL);
			if (pong)
				atc_frame_write(fd, tls, pong);
			irm_bp_free(pong);
		}
		irm_bp_free(d);
	}
	return -1;
}

/* ==================== AFC-команды (E14): afc-ls/stat + music-id ==================== */

/* Рекурсивное создание ЛОКАЛЬНОГО каталога (scratch-копии для music-id). */
static int irm_mkpath(const char *path)
{
	char tmp[768];
	size_t ln = strlen(path);
	if (ln == 0 || ln >= sizeof tmp)
		return -1;
	memcpy(tmp, path, ln + 1);
	for (char *p = tmp + 1; *p; p++) {
		if (*p != '/')
			continue;
		*p = 0;
		if (mkdir(tmp, 0755) != 0 && errno != EEXIST)
			return -1;
		*p = '/';
	}
	if (mkdir(tmp, 0755) != 0 && errno != EEXIST)
		return -1;
	return 0;
}

static int cmd_afc_ls(const char *path, const char *selector)
{
	uint32_t device_id = 0;
	char udid[128] = "-";
	if (find_device(path, selector, &device_id, udid, sizeof udid) != 0)
		return 1;
	printf("device: id=%u udid=%s\n", device_id, udid);

	irm_pair_t *pair = NULL;
	if (irm_pair_load(udid, &pair) != 0) {
		fprintf(stderr, "afc-ls: %s\n", irm_pair_error());
		return 1;
	}
	irm_lk_t *lk = irm_lk_open(path, device_id, IRM_LK_DEFAULT_PORT, 5);
	if (!lk) {
		fprintf(stderr, "afc-ls: lockdown: %s\n", irm_lk_error());
		irm_pair_free(pair);
		return 1;
	}
	if (irm_lk_start_session(lk, pair) != 0) {
		fprintf(stderr, "afc-ls: session: %s\n", irm_lk_error());
		irm_lk_close(lk);
		irm_pair_free(pair);
		return 1;
	}
	int fd = -1;
	int tls = 0;
	int rc = 1;
	if (atc_serve_open(lk, pair, path, device_id, "com.apple.afc",
			   &fd, &tls) != 0)
		goto close;
	irm_afc_t *afc;
	afc = irm_afc_new(fd, tls, 15);
	if (!afc)
		goto close;

	char **kvs = NULL;
	size_t nk = 0;
	if (irm_afc_devinfo(afc, &kvs, &nk) == 0) {
		printf("devinfo:");
		for (size_t i = 0; i < nk; i++)
			printf(" %s", kvs[i]);
		printf("\n");
		for (size_t i = 0; i < nk; i++)
			free(kvs[i]);
		free(kvs);
	} else {
		printf("devinfo: %s\n", irm_afc_error());
	}

	char argbuf[512];
	const char *dir = getenv("IRMA_AFC_PATH");
	if (!dir || !*dir) {
		snprintf(argbuf, sizeof argbuf, "/");
		dir = argbuf;
	}
	printf("ls %s:\n", dir);
	char **names = NULL;
	size_t nn = 0;
	if (irm_afc_dir_list(afc, dir, &names, &nn) == 0) {
		for (size_t i = 0; i < nn; i++) {
			size_t sz = 0;
			int isdir = 0;
			char full[768];
			snprintf(full, sizeof full,
				 dir[strlen(dir) - 1] == '/' ? "%s%s" : "%s/%s",
				 dir, names[i]);
			if (irm_afc_size_info(afc, full, &sz, &isdir) == 0)
				printf("  %-8zu %s%s\n", sz, isdir ? "D " : "  ",
				       names[i]);
			else
				printf("  ????     %s\n", names[i]);
			free(names[i]);
		}
		free(names);
	} else {
		printf("  (%s)\n", irm_afc_error());
	}
	rc = 0;
	irm_afc_free(afc);
close:
	if (tls)
		irm_tls_disarm(fd);
	if (fd >= 0)
		irm_mux_close(fd);
	irm_lk_close(lk);
	irm_pair_free(pair);
	return rc;
}

static int cmd_afc_stat(const char *path, const char *selector)
{
	uint32_t device_id = 0;
	char udid[128] = "-";
	if (find_device(path, selector, &device_id, udid, sizeof udid) != 0)
		return 1;
	printf("device: id=%u udid=%s\n", device_id, udid);

	irm_pair_t *pair = NULL;
	if (irm_pair_load(udid, &pair) != 0) {
		fprintf(stderr, "afc-stat: %s\n", irm_pair_error());
		return 1;
	}
	irm_lk_t *lk = irm_lk_open(path, device_id, IRM_LK_DEFAULT_PORT, 5);
	if (!lk) {
		fprintf(stderr, "afc-stat: lockdown: %s\n", irm_lk_error());
		irm_pair_free(pair);
		return 1;
	}
	if (irm_lk_start_session(lk, pair) != 0) {
		fprintf(stderr, "afc-stat: session: %s\n", irm_lk_error());
		irm_lk_close(lk);
		irm_pair_free(pair);
		return 1;
	}
	int fd = -1;
	int tls = 0;
	int rc = 1;
	if (atc_serve_open(lk, pair, path, device_id, "com.apple.afc",
			   &fd, &tls) != 0)
		goto close;
	irm_afc_t *afc;
	afc = irm_afc_new(fd, tls, 15);
	if (!afc)
		goto close;

	char argbuf[768];
	const char *target = getenv("IRMA_AFC_PATH");
	if (!target || !*target) {
		snprintf(argbuf, sizeof argbuf,
			 "iTunes_Control/iTunes/iTunesPrefs");
		target = argbuf;
	}
	size_t sz = 0;
	int isdir = 0;
	if (irm_afc_size_info(afc, target, &sz, &isdir) == 0) {
		printf("%s: size=%zu dir=%d\n", target, sz, isdir);
	} else {
		fprintf(stderr, "afc-stat: %s: %s\n", target, irm_afc_error());
		goto close2;
	}
	printf("%s kvs:\n", target);
	{
		char **kvs = NULL;
		size_t nk = 0;
		if (irm_afc_file_info(afc, target, &kvs, &nk) == 0) {
			for (size_t i = 0; i + 1 < nk; i += 2)
				printf("  %s = %s\n", kvs[i], kvs[i + 1]);
			for (size_t i = 0; i < nk; i++)
				free(kvs[i]);
			free(kvs);
		}
	}
	rc = 0;
close2:
	irm_afc_free(afc);
close:
	if (tls)
		irm_tls_disarm(fd);
	if (fd >= 0)
		irm_mux_close(fd);
	irm_lk_close(lk);
	irm_pair_free(pair);
	return rc;
}

/* afc-pull (read-only): прочитать файл телефона через AFC и
 * записать ЛОКАЛЬНО (форензика 05.11: проверить, ЧЬИ байты легли
 * в persistent-путь каждого item'а — теги/дурация выдают
 * источник). Адрес: IRMA_AFC_PATH (<удалённый>), выход:
 * IRMA_AFC_OUT (<локальный>), «-» = stdout. */
static int cmd_afc_pull(const char *path, const char *selector)
{
	uint32_t device_id = 0;
	char udid[128] = "-";
	if (find_device(path, selector, &device_id, udid, sizeof udid) != 0)
		return 1;
	printf("device: id=%u udid=%s\n", device_id, udid);

	irm_pair_t *pair = NULL;
	if (irm_pair_load(udid, &pair) != 0) {
		fprintf(stderr, "afc-pull: %s\n", irm_pair_error());
		return 1;
	}
	irm_lk_t *lk = irm_lk_open(path, device_id, IRM_LK_DEFAULT_PORT, 5);
	if (!lk) {
		fprintf(stderr, "afc-pull: lockdown: %s\n", irm_lk_error());
		irm_pair_free(pair);
		return 1;
	}
	if (irm_lk_start_session(lk, pair) != 0) {
		fprintf(stderr, "afc-pull: session: %s\n", irm_lk_error());
		irm_lk_close(lk);
		irm_pair_free(pair);
		return 1;
	}
	int fd = -1;
	int tls = 0;
	int rc = 1;
	if (atc_serve_open(lk, pair, path, device_id, "com.apple.afc",
			   &fd, &tls) != 0)
		goto close;
	irm_afc_t *afc;
	afc = irm_afc_new(fd, tls, 15);
	if (!afc)
		goto close;

	char argbuf[768], outbuf[768];
	const char *target = getenv("IRMA_AFC_PATH");
	if (!target || !*target) {
		snprintf(argbuf, sizeof argbuf,
			 "iTunes_Control/iTunes/iTunesPrefs");
		target = argbuf;
	}
	const char *out = getenv("IRMA_AFC_OUT");
	if (!out || !*out) {
		snprintf(outbuf, sizeof outbuf, "/tmp/afc-pull.out");
		out = outbuf;
	}
	uint8_t *a = NULL;
	size_t na = 0;
	if (irm_afc_read_full(afc, target, &a, &na) != 0) {
		fprintf(stderr, "afc-pull: %s: %s\n", target,
			irm_afc_error());
		goto close2;
	}
	int to_stdout = strcmp(out, "-") == 0;
	FILE *f = to_stdout ? stdout : fopen(out, "wb");
	if (!f) {
		fprintf(stderr, "afc-pull: %s: %s\n", out, strerror(errno));
		free(a);
		goto close2;
	}
	if (fwrite(a, 1, na, f) != na) {
		fprintf(stderr, "afc-pull: %s: запись %zu Б не удалась\n",
			out, na);
		free(a);
		if (!to_stdout)
			fclose(f);
		goto close2;
	}
	if (!to_stdout)
		fclose(f);
	free(a);
	printf("%s: %zu Б → %s\n", target, na, out);
	rc = 0;
close2:
	irm_afc_free(afc);
close:
	if (tls)
		irm_tls_disarm(fd);
	if (fd >= 0)
		irm_mux_close(fd);
	irm_lk_close(lk);
	irm_pair_free(pair);
	return rc;
}

/* music-id (read-only): frpd-идентичность из iTunesPrefs (E14 §3:
 * catalog_id LE64@[12..20], user_id LE64@[20..28], LibraryID =
 * %016llX(catalog^user)) и якерь Media из MediaLibrary.sqlitedb
 * (_MLDatabaseProperties.MLSyncClientSyncAnchor; копия читается дважды —
 * стабильность, §2.2 rustunes; -wal копируется парой, -shm НЕ копируется). */
static int cmd_music_id(const char *path, const char *selector)
{
	uint32_t device_id = 0;
	char udid[128] = "-";
	if (find_device(path, selector, &device_id, udid, sizeof udid) != 0)
		return 1;
	printf("device: id=%u udid=%s\n", device_id, udid);

	irm_pair_t *pair = NULL;
	if (irm_pair_load(udid, &pair) != 0) {
		fprintf(stderr, "music-id: %s\n", irm_pair_error());
		return 1;
	}
	irm_lk_t *lk = irm_lk_open(path, device_id, IRM_LK_DEFAULT_PORT, 5);
	if (!lk) {
		fprintf(stderr, "music-id: lockdown: %s\n", irm_lk_error());
		irm_pair_free(pair);
		return 1;
	}
	if (irm_lk_start_session(lk, pair) != 0) {
		fprintf(stderr, "music-id: session: %s\n", irm_lk_error());
		irm_lk_close(lk);
		irm_pair_free(pair);
		return 1;
	}
	int fd = -1;
	int tls = 0;
	int rc = 1;
	if (atc_serve_open(lk, pair, path, device_id, "com.apple.afc",
			   &fd, &tls) != 0) {
		fprintf(stderr, "music-id: не удалось открыть com.apple.afc\n");
		goto close;
	}
	irm_afc_t *afc;
	afc = irm_afc_new(fd, tls, 20);
	if (!afc) {
		fprintf(stderr, "music-id: irm_afc_new: %s\n", irm_afc_error());
		goto close;
	}

	/* --- iTunesPrefs (frpd): путь обязан быть АБСОЛЮТНЫМ --- */
	char prefs_path[128];
	snprintf(prefs_path, sizeof prefs_path,
		 "/iTunes_Control/iTunes/iTunesPrefs");
	uint8_t *p1 = NULL, *p2 = NULL;
	size_t n1 = 0, n2 = 0;
	if (irm_afc_read_full(afc, prefs_path, &p1, &n1) != 0) {
		fprintf(stderr, "music-id: %s: %s\n", prefs_path,
			irm_afc_error());
		goto close2;
	}
	if (irm_afc_read_full(afc, prefs_path, &p2, &n2) != 0) {
		fprintf(stderr, "music-id: повтор %s: %s\n", prefs_path,
			irm_afc_error());
		goto close2;
	}
	int stable = (n1 == n2 && (n1 == 0 || memcmp(p1, p2, n1) == 0));
	printf("iTunesPrefs: %zu байт, повтор-чтение %s\n", n1,
	       stable ? "совпало" : "РАЗЛИЧИЕ (дрейф)");
	free(p2);
	p2 = NULL;

	if (n1 != 1232 || memcmp(p1, "frpd", 4) != 0) {
		fprintf(stderr, "music-id: frpd ожидание 1232Б не сошлось "
				"(%zu, magic %.4s)\n", n1, (char *)p1);
		goto close2;
	}
	uint64_t v_maj = (uint64_t)p1[4] | ((uint64_t)p1[5] << 8);
	uint64_t v_min = (uint64_t)p1[6] | ((uint64_t)p1[7] << 8);
	uint64_t catalog = 0, user = 0;
	memcpy(&catalog, p1 + 12, 8);
	memcpy(&user, p1 + 20, 8);
	printf("frpd: версия %llu.%llu configured=%u\n",
	       (unsigned long long)v_maj, (unsigned long long)v_min,
	       p1[8]);
	printf("frpd: catalog_id=%016llX user_id=%016llX\n",
	       (unsigned long long)catalog, (unsigned long long)user);
	uint64_t xid = catalog ^ user;
	char libid[17];
	snprintf(libid, sizeof libid, "%016llX", (unsigned long long)xid);
	printf("frpd: LibraryID=%s (= catalog_id^user_id)\n", libid);
	if (catalog == 0 && user == 0)
		/* Live-факт E14 §3: без Windows-AMP паспорта литералы не
		 * записаны (медиатека девственная). Не отваливаемся:
		 * якерь берём из DB-копии ниже, LIBID — env. */
		printf("frpd: литералы catalog/user НЕЗАПОЛНЕНЫ (0) — "
		       "LibraryID деривация не авторитетна; для "
		       "IRMA_ATC_LIBID задаём env\n");
	printf("exp: IRMA_ATC_LIBID=%s\n", libid);
	free(p1);
	p1 = NULL;

	/* --- MediaLibrary.sqlitedb (+ -wal) --- */
	const char *scratch = getenv("IRM_SCRATCH");
	char scdir[512];
	if (!scratch || !*scratch) {
		snprintf(scdir, sizeof scdir, "/tmp/opencode/%s-music", udid);
		scratch = scdir;
	}
	if (irm_mkpath(scratch) != 0) {
		fprintf(stderr, "music-id: mkdir %s: %s\n", scratch,
			strerror(errno));
		goto close2;
	}
	const char *dbs[2] = { "MediaLibrary.sqlitedb",
			       "MediaLibrary.sqlitedb-wal" };
	for (int di = 0; di < 2; di++) {
		char devp[160];
		snprintf(devp, sizeof devp, "/iTunes_Control/iTunes/%s",
			 dbs[di]);
		uint8_t *a = NULL, *b = NULL;
		size_t na = 0, nb = 0;
		int have = (irm_afc_read_full(afc, devp, &a, &na) == 0);
		if (!have) {
			/* -wal может отсутствовать (checkpoint) — ок */
			printf("%s: отсутствует (%s)\n", devp,
			       irm_afc_error());
			continue;
		}
		if (irm_afc_read_full(afc, devp, &b, &nb) != 0) {
			fprintf(stderr, "music-id: повтор %s: %s\n", devp,
				irm_afc_error());
			free(a);
			goto close2;
		}
		int st2 = (na == nb && (na == 0 || memcmp(a, b, na) == 0));
		printf("%s: %zu байт, повтор %s\n", devp, na,
		       st2 ? "совпало" : "ДРЕЙФ (WAL в движении)");
		free(b);
		b = NULL;
		if (!st2) {
			free(a);
			/* третья попытка одной строкой */
			if (irm_afc_read_full(afc, devp, &a, &na) != 0) {
				fprintf(stderr, "music-id: 3-я: %s\n",
					irm_afc_error());
				goto close2;
			}
			printf("%s: 3-е чтение %zu байт (взять его)\n",
			       devp, na);
		}
		char outp[640];
		snprintf(outp, sizeof outp, "%s/%s", scratch, dbs[di]);
		FILE *f = fopen(outp, "wb");
		if (!f || fwrite(a, 1, na, f) != na) {
			fprintf(stderr, "music-id: %s: записать локальную "
					"копию: %s\n", outp, strerror(errno));
			if (f)
				fclose(f);
			free(a);
			goto close2;
		}
		fclose(f);
		free(a);
		a = NULL;
		printf("  копия: %s\n", outp);
	}
	/* форензика 05.11: наше же READWRITE-открытие копии ниже
	 * (recovery/чекпоинт) губит живой -wal телефона — при фейле
	 * recovery/чекпоинта sqlite просто удаляет -wal, и свежие
	 * заливки пропадают из анализа, остаётся чекпоинт-кадр
	 * (item=1). IRMA_ATC_DB_KEEP=<dir> переносит обе копии (базу
	 * и -wal) в указанный каталог ДО sqlite — для послешнего
	 * анализа одним проходом. */
	{
		const char *keep = getenv("IRMA_ATC_DB_KEEP");
		if (keep && *keep) {
			if (irm_mkpath(keep) != 0) {
				fprintf(stderr, "music-id: mkdir %s: %s\n",
					keep, strerror(errno));
				goto close2;
			}
			for (int di = 0; di < 2; di++) {
				char sp[640], dp[680];
				snprintf(sp, sizeof sp, "%s/%s", scratch,
					 dbs[di]);
				snprintf(dp, sizeof dp, "%s/%s", keep,
					 dbs[di]);
				if (rename(sp, dp) == 0)
					printf("  форензика: %s → %s\n",
					       sp, dp);
			}
		}
	}
	irm_afc_free(afc);
	afc = NULL;
	if (tls)
		irm_tls_disarm(fd);
	fd = -1;

	/* --- якерь из локальной копии (vendored sqlite) --- */
	{
		char dbp[640];
		snprintf(dbp, sizeof dbp, "%s/MediaLibrary.sqlitedb", scratch);
		sqlite3 *db = NULL;
		int rcs = sqlite3_open_v2(dbp, &db,
					  SQLITE_OPEN_READWRITE, NULL);
		if (rcs != SQLITE_OK) {
			fprintf(stderr, "music-id: sqlite3_open %s: %s\n",
				dbp, db ? sqlite3_errmsg(db) : "нет памяти");
			if (db)
				sqlite3_close(db);
			goto close;
		}
		sqlite3_stmt *st = NULL;
		rcs = sqlite3_prepare_v2(
			db,
			"SELECT key, value FROM _MLDatabaseProperties "
			"ORDER BY key",
			-1, &st, NULL);
		if (rcs != SQLITE_OK) {
			fprintf(stderr, "music-id: _MLDatabaseProperties: "
					"%s\n", sqlite3_errmsg(db));
			sqlite3_close(db);
			goto close;
		}
		printf("_MLDatabaseProperties:\n");
		while (sqlite3_step(st) == SQLITE_ROW) {
			const unsigned char *key = sqlite3_column_text(st, 0);
			int vt = sqlite3_column_type(st, 1);
			if (vt == SQLITE_TEXT) {
				const unsigned char *val =
					sqlite3_column_text(st, 1);
				printf("  %s = %s\n",
				       key ? (const char *)key : "?",
				       val ? (const char *)val : "?");
			} else {
				/* blob/NULL/число печатаем пометкой типа —
				 * сырые байты портят вывод (E14 §3). */
				printf("  %s = <не текст: %s>\n",
				       key ? (const char *)key : "?",
				       vt == SQLITE_INTEGER ? "целое" :
				       vt == SQLITE_BLOB    ? "блоб" :
				       vt == SQLITE_NULL    ? "NULL" :
							      "прочее");
			}
		}
		sqlite3_finalize(st);
		st = NULL;
		const char *ic = 0;
		rcs = sqlite3_prepare_v2(db,
					 "PRAGMA integrity_check", -1,
					 &st, NULL);
		if (rcs == SQLITE_OK &&
		    sqlite3_step(st) == SQLITE_ROW) {
			ic = (const char *)sqlite3_column_text(st, 0);
		}
		printf("integrity_check: %s\n", ic ? ic : "?");
		sqlite3_finalize(st);
		sqlite3_close(db);
		printf("exp: якерь Media (MLSyncClientSyncAnchor выше)\n");
	}
	rc = 0;
	goto close;
close2:
	free(p1);
	free(p2);
	irm_afc_free(afc);
close:
	if (tls)
		irm_tls_disarm(fd);
	if (fd >= 0)
		irm_mux_close(fd);
	irm_lk_close(lk);
	irm_pair_free(pair);
	return rc;
}

/* atc-delta — ПУСТОЙ Delta-синк (E14 §4; docs/02 §8.3, §14.5 — CONFIRMED):
 * у Apple staging всегда отсутствует → FinishedSyncingMetadata без файлов,
 * якерь НЕ инкрементируется. Пользовательский контент не затрагивается.
 * Порядок: (a) staging-проверка по AFC (директория пуста/отсутствует);
 * (b) Ping S1 -> SyncAllowed -> RequestingSync S2 -> ReadyForSync, сверка
 * якеря — при расхождении отмена БЕЗ FSFM (ничего не применено);
 * (c) FSFM {Session:2, SyncTypes{Media:1,Book:0,Keybag:1}}; (d) чтение
 * терминала: SyncFinished = успех (Params может отсутствовать), SyncFailed =
 * печать ErrorCode, AssetManifest = полный дамп + СТОП без ответа
 * (observe-only). Env как у atc-handshake: IRMA_ATC_LIBID/ANCHOR/VERSION/
 * SERVICE. */
static int cmd_atc_delta(const char *path, const char *selector)
{
	uint32_t device_id = 0;
	char udid[128] = "-";
	if (find_device(path, selector, &device_id, udid, sizeof udid) != 0)
		return 1;
	printf("device: id=%u udid=%s\n", device_id, udid);

	irm_pair_t *pair = NULL;
	if (irm_pair_load(udid, &pair) != 0) {
		fprintf(stderr, "atc-delta: %s\n", irm_pair_error());
		return 1;
	}
	printf("pair: %s\n", pair->src);

	irm_lk_t *lk = irm_lk_open(path, device_id, IRM_LK_DEFAULT_PORT, 5);
	if (!lk) {
		fprintf(stderr, "atc-delta: lockdown: %s\n", irm_lk_error());
		irm_pair_free(pair);
		return 1;
	}
	if (irm_lk_start_session(lk, pair) != 0) {
		fprintf(stderr, "atc-delta: session: %s\n", irm_lk_error());
		irm_lk_close(lk);
		irm_pair_free(pair);
		return 1;
	}

	const char *ve = getenv("IRMA_ATC_VERSION");
	const char *ver = (ve && *ve) ? ve : "13.2.4.123";
	const char *ae = getenv("IRMA_ATC_ANCHOR");
	const char *anch = (ae && *ae) ? ae : "1";
	const char *sve = getenv("IRMA_ATC_SERVICE");
	const char *svc = (sve && *sve) ? sve : "com.apple.atc";
	printf("profile: ver=%s anchor=%s service=%s\n", ver, anch, svc);

	int rc = 1;
	int afd = -1;
	int atls = 0;

	/* (a) staging: директория обязана быть пустой или вовсе отсутствовать
	 * (Apple-инвариант docs/02 §8.2; Apple-хост стадит только с файлами). */
	{
		int fd = -1;
		int tls = 0;
		if (atc_serve_open(lk, pair, path, device_id, "com.apple.afc",
				   &fd, &tls) != 0) {
			fprintf(stderr, "atc-delta: com.apple.afc не открыт\n");
			goto close;
		}
		irm_afc_t *afc = irm_afc_new(fd, tls, 15);
		if (!afc) {
			if (tls)
				irm_tls_disarm(fd);
			irm_mux_close(fd);
			goto close;
		}
		char **names = NULL;
		size_t nn = 0;
		/* Live-факт E14 (iPhone12,1/iOS 27.2): dir_list отдаёт и
		 * "." / ".." — это НЕ staging-файлы; пустота = только они. */
		size_t nfiles = 0;
		if (irm_afc_dir_list(afc, "iTunes_Control/Sync/Media", &names,
				     &nn) != 0) {
			printf("staging /iTunes_Control/Sync/Media: "
			       "отсутствует (%s) — ОК\n",
			       irm_afc_error());
		} else {
			for (size_t i = 0; i < nn; i++) {
				if (strcmp(names[i], ".") != 0 &&
				    strcmp(names[i], "..") != 0) {
					printf("  файл: %s\n", names[i]);
					nfiles++;
				}
				free(names[i]);
			}
			free(names);
			printf("staging /iTunes_Control/Sync/Media: "
			       "%zu записей (файлов %zu)\n", nn, nfiles);
			if (nfiles != 0) {
				fprintf(stderr, "atc-delta: staging НЕ ПУСТ — "
						"abort (инвариант §8.2; ничего "
						"не применено)\n");
				irm_afc_free(afc);
				if (tls)
					irm_tls_disarm(fd);
				irm_mux_close(fd);
				goto close;
			}
		}
		irm_afc_free(afc);
		if (tls)
			irm_tls_disarm(fd);
		irm_mux_close(fd);
	}

	/* (b) ATC-канал: Ping S1 -> ждём SyncAllowed (короткий idle-бюджет). */
	if (atc_serve_open(lk, pair, path, device_id, svc, &afd, &atls) != 0)
		goto close;
	{
		irm_bp_node *ping = atc_host_msg(1, "Ping", NULL);
		if (!ping || atc_frame_write(afd, atls, ping) != 0) {
			fprintf(stderr, "atc-delta: Ping: %s\n",
				atls ? "tls-ошибка" : strerror(errno));
			irm_bp_free(ping);
			goto close;
		}
		irm_bp_free(ping);
	}
	{
		int ok = 0;
		for (int k = 1; k <= 10 && !ok; k++) {
			uint8_t lb[4];
			if (svc_read_full_t(afd, atls, lb, sizeof lb, 15) != 0)
				break;
			uint32_t len = (uint32_t)lb[0] |
				       ((uint32_t)lb[1] << 8) |
				       ((uint32_t)lb[2] << 16) |
				       ((uint32_t)lb[3] << 24);
			if (len < 8 || len > (8u << 20))
				break;
			uint8_t *body = (uint8_t *)malloc(len);
			if (!body)
				break;
			if (svc_read_full_t(afd, atls, body, len, 15) != 0) {
				free(body);
				break;
			}
			irm_bp_node *d = (memcmp(body, "bplist00", 8) == 0)
						 ? irm_bp_read(body, len)
						 : NULL;
			free(body);
			const char *cmdc = d ? str_of(d, "Command") : NULL;
			printf("  кадр %d: len=%u Command=%s\n", k, len,
			       dash(cmdc));
			if (!d)
				break;
			if (cmdc && strcmp(cmdc, "SyncAllowed") == 0) {
				ok = 1;
			} else if (cmdc && strcmp(cmdc, "Ping") == 0) {
				const irm_bp_node *sn =
					irm_bp_dict_get(d, "Session");
				uint64_t ses = sn ? irm_bp_uint_value(sn) : 1;
				irm_bp_node *pong =
					atc_host_msg(ses, "Pong", NULL);
				if (pong)
					atc_frame_write(afd, atls, pong);
				irm_bp_free(pong);
			}
			irm_bp_free(d);
		}
		if (!ok) {
			fprintf(stderr, "atc-delta: SyncAllowed не пришёл — "
					"abort до RequestingSync\n");
			goto close;
		}
	}
	/* (b2) RequestingSync Session=2 с якерем, равным отправленному. */
	{
		irm_bp_node *params = atc_build_rs_params(ver, anch);
		if (!params) {
			fprintf(stderr, "atc-delta: сбор Params не удался\n");
			goto close;
		}
		irm_bp_node *req = atc_host_msg(2, "RequestingSync", params);
		if (!req || atc_frame_write(afd, atls, req) != 0) {
			fprintf(stderr, "atc-delta: RequestingSync: %s\n",
				atls ? "tls-ошибка" : strerror(errno));
			irm_bp_free(req);
			goto close;
		}
		irm_bp_free(req);
		printf(" отсылаем RequestingSync (Session=2, якерь %s)\n",
		       anch);
	}
	/* (b3) ReadyForSync + сверка якеря: расхождение = отмена без FSFM. */
	{
		char ready_anchor[32] = "";
		if (atc_wait_ready(afd, atls, ready_anchor,
				   sizeof ready_anchor, NULL, NULL) != 0) {
			fprintf(stderr, "atc-delta: ReadyForSync не получен\n");
			goto close;
		}
		unsigned long long sA = strtoull(anch, NULL, 10);
		unsigned long long rA =
			ready_anchor[0] ? strtoull(ready_anchor, NULL, 10)
					: 0ull;
		printf(" anchor: sent=%llu ready=%llu (\"%s\" vs \"%s\")\n",
		       sA, rA, anch, ready_anchor);
		if (ready_anchor[0] == 0 || rA != sA) {
			fprintf(stderr, "atc-delta: якерь ReadyForSync != "
					"отправленного — ABORT БЕЗ FSFM "
					"(ничего не применено)\n");
			goto close;
		}
	}
	/* (c) FSFM: пустой Delta — якерь тот же, файлов нет. */
	{
		irm_bp_node *params = atc_build_fsfm_params(anch);
		if (!params) {
			fprintf(stderr, "atc-delta: сбор FSFM Params не удался\n");
			goto close;
		}
		irm_bp_node *fsfm = atc_host_msg(2, "FinishedSyncingMetadata",
						 params);
		if (!fsfm || atc_frame_write(afd, atls, fsfm) != 0) {
			fprintf(stderr, "atc-delta: FSFM: %s\n",
				atls ? "tls-ошибка" : strerror(errno));
			irm_bp_free(fsfm);
			goto close;
		}
		irm_bp_free(fsfm);
		printf(" отсылаем FinishedSyncingMetadata (Session=2, "
		       "пустой Delta)\n");
	}
	/* (d) терминал: телеметрия игнорируется; SyncFinished = успех;
	 * SyncFailed = неудача с ErrorCode в dump; AssetManifest = полный
	 * дамп и СТОП без ответа (observe-only, ничего не применено). */
	{
		int done = 0;
		int failed = 0;
		for (int k = 1; k <= 64 && !done; k++) {
			uint8_t lb[4];
			if (svc_read_full_t(afd, atls, lb, sizeof lb, 15) != 0) {
				printf(" (тишина от телефона)\n");
				break;
			}
			uint32_t len = (uint32_t)lb[0] |
				       ((uint32_t)lb[1] << 8) |
				       ((uint32_t)lb[2] << 16) |
				       ((uint32_t)lb[3] << 24);
			if (len < 8 || len > (8u << 20)) {
				printf(" (аномальная длина кадра %u)\n", len);
				failed = 1;
				break;
			}
			uint8_t *body = (uint8_t *)malloc(len);
			if (!body) {
				printf(" (нет памяти под кадр)\n");
				failed = 1;
				break;
			}
			if (svc_read_full_t(afd, atls, body, len, 15) != 0) {
				free(body);
				failed = 1;
				break;
			}
			irm_bp_node *d = (memcmp(body, "bplist00", 8) == 0)
						 ? irm_bp_read(body, len)
						 : NULL;
			free(body);
			if (!d) {
				printf(" (кадр не удалось распарсить)\n");
				failed = 1;
				break;
			}
			const char *cmdc = str_of(d, "Command");
			printf("  кадр %d: len=%u Command=%s\n", k, len,
			       dash(cmdc));
			if (cmdc && strcmp(cmdc, "Ping") == 0) {
				const irm_bp_node *sn =
					irm_bp_dict_get(d, "Session");
				uint64_t ses = sn ? irm_bp_uint_value(sn) : 2;
				irm_bp_node *pong =
					atc_host_msg(ses, "Pong", NULL);
				if (pong)
					atc_frame_write(afd, atls, pong);
				irm_bp_free(pong);
				irm_bp_free(d);
				continue;
			}
			if (cmdc && (strcmp(cmdc, "Progress") == 0 ||
				     strcmp(cmdc, "SyncAllowed") == 0 ||
				     strcmp(cmdc, "AssetMetrics") == 0 ||
				     strcmp(cmdc, "InstalledAssets") == 0)) {
				const irm_bp_node *sn =
					irm_bp_dict_get(d, "Session");
				printf("    телеметрия (Session=%llu)\n",
				       sn ? (unsigned long long)
						    irm_bp_uint_value(sn)
					  : 0ull);
				irm_bp_free(d);
				continue;
			}
			/* Терминальные и незнакомые сообщения — полный XML. */
			{
				uint8_t *xm = NULL;
				size_t xn = 0;
				if (irm_xml_write(d, &xm, &xn) == 0) {
					printf("  dump:\n");
					fwrite(xm, 1, xn, stdout);
					printf("\n");
					free(xm);
				}
			}
			if (!cmdc) {
				failed = 1;
			} else if (strcmp(cmdc, "SyncFinished") == 0) {
				printf("atc-delta: SyncFinished — ПУСТОЙ Delta "
				       "пройден; якерь не должен измениться "
				       "(проверка: irmctl music-id)\n");
				rc = 0;
			} else if (strcmp(cmdc, "SyncFailed") == 0) {
				fprintf(stderr, "atc-delta: SyncFailed — "
						"ErrorCode в dump выше\n");
				failed = 1;
			} else if (strcmp(cmdc, "AssetManifest") == 0) {
				printf("OBSERVE-ONLY: телефон прислал "
				       "AssetManifest — дамп выше, ответа нет, "
				       "ничего не применено\n");
				rc = 0;
			} else {
				fprintf(stderr, "atc-delta: неожиданное "
						"сообщение \"%s\" — СТОП без "
						"ответа\n",
					cmdc);
				failed = 1;
			}
			done = 1;
			irm_bp_free(d);
		}
		if (!done) {
			fprintf(stderr, "atc-delta: терминал не получен "
					"(SyncFinished/SyncFailed/"
					"AssetManifest)\n");
			rc = 1;
		} else if (failed) {
			rc = 1;
		}
	}
close:
	if (atls)
		irm_tls_disarm(afd);
	if (afd >= 0)
		irm_mux_close(afd);
	irm_lk_close(lk);
	irm_pair_free(pair);
	return rc;
}

/* ==================================================================== */
/* atc-insert: РЕАЛЬНЫЙ Delta с треками (шаг 9f). Карта полей и порядок  */
/* ключей — 1:1 из живой реализации rustunes (protocol/alac.rs serialize */
/* — CONFIRMED живыми Linux-сессиями на этом протоколе).                 */
/* Карта кодека (06.11): ALAC-пейлоады — прежняя 1:1 rustunes-карта;
 * mp3-пейлоады («как есть») — живой след 3uTools (FINDINGS 152/545):
 * location {kind:"MPEG Audio"}, avformat {audio_format:301, bit_rate
 * — фактический, sample_rate:0}, item album_pid/artist_pid=0
 * (+album_artist/sort_album_artist), постоянный файл XXXX.mp3.
 * Правила: op={operation,pid,avformat_info,item_stats,item,location},   */
/* item_stats — ПОЛНЫЙ словарь (4 нуля + has_been_played=false),         */
/* gapless-группа всегда 4 ключа (0,0,1,0), bit_rate = PCM-ставка        */
/* ((44100×16×2+500)/1000 = 1411) для ALAC, artwork_checksum=0,          */
/* album_artist — только в mp3-ветке, location={kind: по кодеку}.        */
/* ==================================================================== */

#define ATC_EPOCH_2001 978307200.0 /* Unix-время 2001-01-01T00:00:00Z */

struct atc_insert_data {
	const char *title;
	const char *artist;
	const char *album;
	const char *album_artist;
	const char *genre;
	int64_t track_pid;
	int64_t album_pid;
	int64_t artist_pid;
	uint32_t total_time_ms; /* 9f: 100 (файл 4410 сэмплов @44100) */
	uint64_t samples;       /* duration = сэмплов на канал */
	uint32_t sample_rate;
	uint32_t number;     /* item.track_number (1..N в пакете, 9g) */
	uint64_t artwork_cache_id; /* item.artwork_cache_id (9k; 0 = нет) */
	/* карта кодека (06.11, живой сбой «mp3 не играет»: прежняя
	 * ALAC-карта 601/"Apple Lossless"/.m4a отправлялась ВСЕМ
	 * пейлоадам — телефон открывал mp3 как Apple Lossless →
	 * «сбой воспроизведения»):
	 * mp3=1 → 3uTools-след (FINDINGS 152/545): kind "MPEG Audio",
	 * avformat {audio_format 301, bit_rate фактический,
	 * sample_rate 0}, album_pid/artist_pid = 0 (телефон
	 * сверяет контейнеры сам) */
	int mp3;
	uint32_t bit_rate; /* кбит/с (mp3; 0 → 320 — живой образец) */
};

/* {operation:"update_db_info", pid:<db_pid s64>, db_info:{primary_container_pid}}.
 * Оба значения — СУЩЕСТВУЮЩИЕ идентичности каталога (не allocate). */
static irm_bp_node *atc_op_update_db_info(int64_t db_pid,
					  int64_t container_pid)
{
	irm_bp_node *info = irm_bp_dict();
	irm_bp_node *op = irm_bp_dict();
	if (!info || !op) {
		irm_bp_free(info);
		irm_bp_free(op);
		return NULL;
	}
	if (irm_bp_dict_set(info, "primary_container_pid",
			    irm_bp_uint((uint64_t)container_pid)) != 0) {
		irm_bp_free(info);
		irm_bp_free(op);
		return NULL;
	}
	if (irm_bp_dict_set(op, "pid", irm_bp_uint((uint64_t)db_pid)) != 0 ||
	    irm_bp_dict_set(op, "operation",
			    irm_bp_string("update_db_info")) != 0)
		goto fail; /* info ещё НИЧЕМУ не принадлежит */
	{
		int ok = irm_bp_dict_set(op, "db_info", info) == 0;
		info = NULL; /* set либо сохранил, либо освободил */
		if (!ok)
			goto fail;
	}
	return op;
fail:
	irm_bp_free(info);
	irm_bp_free(op);
	return NULL;
}

static irm_bp_node *atc_op_insert_track(const struct atc_insert_data *t)
{
	uint64_t bit_rate =
		((uint64_t)t->sample_rate * 16u * 2u + 500u) / 1000u;
	irm_bp_node *avf = irm_bp_dict();
	irm_bp_node *stats = irm_bp_dict();
	irm_bp_node *item = irm_bp_dict();
	irm_bp_node *loc = irm_bp_dict();
	irm_bp_node *op = irm_bp_dict();
	if (!avf || !stats || !item || !loc || !op)
		goto fail;
	if (t->mp3) {
		/* mp3-карта 3uTools (живая декларация): 301, фак-
		 * тический битрейт, sample_rate 0. Прочие ключи AVR-
		 * словаря (duration/gapless) не слал и 3u — но наш
		 * полный словарь телефон принимал в ALAC-режиме, так
		 * что duration/gapless остаются реальными значениями
		 * строки (ограничение не выявлено) */
		if (irm_bp_dict_set(avf, "audio_format", irm_bp_uint(301)) !=
			    0 ||
		    irm_bp_dict_set(avf, "bit_rate",
				    irm_bp_uint((uint64_t)(t->bit_rate ?
								    t->bit_rate
								    : 320))) !=
			    0 ||
		    irm_bp_dict_set(avf, "sample_rate", irm_bp_real(0.0)) !=
			    0)
			goto fail;
	} else if (irm_bp_dict_set(avf, "audio_format", irm_bp_uint(601)) !=
			   0 ||
		   irm_bp_dict_set(avf, "bit_rate", irm_bp_uint(bit_rate)) !=
			   0 ||
		   irm_bp_dict_set(avf, "duration", irm_bp_uint(t->samples)) !=
			   0 ||
	    irm_bp_dict_set(avf, "gapless_encoding_delay", irm_bp_uint(0)) !=
		    0 ||
	    irm_bp_dict_set(avf, "gapless_encoding_drain", irm_bp_uint(0)) !=
		    0 ||
	    irm_bp_dict_set(avf, "gapless_heuristic_info", irm_bp_uint(1)) !=
		    0 ||
	    irm_bp_dict_set(avf, "gapless_last_frame_resynch",
			    irm_bp_uint(0)) != 0 ||
	    irm_bp_dict_set(avf, "analysis_inhibit_flags", irm_bp_uint(2)) !=
		    0 ||
	    irm_bp_dict_set(avf, "sample_rate",
			    irm_bp_real((double)t->sample_rate)) != 0)
		goto fail;
	if (irm_bp_dict_set(stats, "play_count_recent", irm_bp_uint(0)) != 0 ||
	    irm_bp_dict_set(stats, "play_count_user", irm_bp_uint(0)) != 0 ||
	    irm_bp_dict_set(stats, "skip_count_recent", irm_bp_uint(0)) != 0 ||
	    irm_bp_dict_set(stats, "skip_count_user", irm_bp_uint(0)) != 0 ||
	    irm_bp_dict_set(stats, "has_been_played", irm_bp_bool(0)) != 0)
		goto fail;
	if (irm_bp_dict_set(item, "album_pid",
			    irm_bp_uint(t->mp3 ? 0u : (uint64_t)t->album_pid)) !=
			    0 ||
	    irm_bp_dict_set(item, "artist_pid",
			    irm_bp_uint(t->mp3 ? 0u : (uint64_t)t->artist_pid)) !=
			    0 ||
	    irm_bp_dict_set(item, "title", irm_bp_string(t->title)) != 0 ||
	    irm_bp_dict_set(item, "artist", irm_bp_string(t->artist)) != 0 ||
	    irm_bp_dict_set(item, "album", irm_bp_string(t->album)) != 0 ||
	    /* album_artist 3u шлёт всегда (FINDINGS 536) — контейнер
	     * альбома сверяется парой строк: pid 0 + строки */
	    (t->mp3 && (irm_bp_dict_set(item, "album_artist",
					 irm_bp_string(t->album_artist ?
							       t->album_artist
							       : t->artist)) !=
			    0)) ||
	    (t->mp3 && (irm_bp_dict_set(item, "sort_album_artist",
					 irm_bp_string(t->album_artist ?
							       t->album_artist
							       : t->artist)) !=
			    0)) ||
	    irm_bp_dict_set(item, "sort_name", irm_bp_string(t->title)) != 0 ||
	    irm_bp_dict_set(item, "sort_artist", irm_bp_string(t->artist)) !=
		    0 ||
	    irm_bp_dict_set(item, "sort_album", irm_bp_string(t->album)) != 0 ||
	    irm_bp_dict_set(item, "genre", irm_bp_string(t->genre)) != 0 ||
	    irm_bp_dict_set(item, "total_time_ms",
			    irm_bp_uint(t->total_time_ms)) != 0 ||
	    irm_bp_dict_set(item, "track_number", irm_bp_uint(t->number)) !=
		    0 ||
	    irm_bp_dict_set(item, "is_song", irm_bp_bool(1)) != 0 ||
	    irm_bp_dict_set(item, "remember_bookmark", irm_bp_bool(0)) != 0 ||
	    irm_bp_dict_set(item, "artwork_checksum", irm_bp_uint(0)) != 0)
		goto fail;
	/* (9k) artwork_cache_id — только при наличии обложки: не пишем
	 * ноль (см. «удочерение» FINDINGS ~1847) */
	if (t->artwork_cache_id &&
	    irm_bp_dict_set(item, "artwork_cache_id",
			    irm_bp_uint(t->artwork_cache_id)) != 0)
		goto fail;
	if (irm_bp_dict_set(loc, "kind",
			    irm_bp_string(t->mp3 ? "MPEG Audio"
						 /* 3uTools mp3 (живая
						  * декларация) */
						 : "Apple Lossless audio "
						   "file")) != 0)
		goto fail;
	if (irm_bp_dict_set(op, "operation", irm_bp_string("insert_track")) !=
		    0 ||
	    irm_bp_dict_set(op, "pid", irm_bp_uint((uint64_t)t->track_pid)) !=
		    0)
		goto fail; /* вложенные словари ещё НИЧЕМУ не принадлежат */
	/* поштучная передача с занулением: set съедает val и при неудаче */
	if (irm_bp_dict_set(op, "avformat_info", avf) != 0)
		goto fail;
	avf = NULL;
	if (irm_bp_dict_set(op, "item_stats", stats) != 0)
		goto fail;
	stats = NULL;
	if (irm_bp_dict_set(op, "item", item) != 0)
		goto fail;
	item = NULL;
	if (irm_bp_dict_set(op, "location", loc) != 0)
		goto fail;
	loc = NULL;
	return op;
fail:
	irm_bp_free(avf);
	irm_bp_free(stats);
	irm_bp_free(item);
	irm_bp_free(loc);
	irm_bp_free(op);
	return NULL;
}

/* --- случайность (PIDs / имена постоянных файлов) — /dev/urandom --- */
static int atc_urand64(uint64_t *out)
{
	FILE *f = fopen("/dev/urandom", "rb");
	if (!f)
		return -1;
	size_t got = fread(out, sizeof *out, 1, f);
	fclose(f);
	return got == 1 ? 0 : -1;
}

/* Свежий PID: бит-картинка s64 (старший бит — 0), ≥1000, без совпадений
 * с набором из каталога; возврат 0 — успех. */
static int atc_pid_fresh(uint64_t *out, const uint64_t *taken, size_t tn)
{
	for (int tries = 0; tries < 128; tries++) {
		uint64_t v;
		if (atc_urand64(&v) != 0)
			return -1;
		v &= ~(1ull << 63); /* s64-положительные */
		if (v == 0 || v < 1000)
			continue;
		int dup = 0;
		for (size_t i = 0; i < tn; i++) {
			if (taken[i] == v) {
				dup = 1;
				break;
			}
		}
		if (dup)
			continue;
		*out = v;
		return 0;
	}
	return -1;
}

/* Абсолютный путевой буфер: "/"+rel (live-факт E14: AFC — абсолютные). */
static void atc_abs(char *buf, size_t n, const char *rel)
{
	snprintf(buf, n, "/%s", rel);
}

/* 4 заглавные буквы имени постоянного файла (§12.5: 'A'+r%26 ×4). */
static int atc_four_letters(char out[5])
{
	for (int i = 0; i < 4; i++) {
		uint64_t r;
		if (atc_urand64(&r) != 0)
			return -1;
		out[i] = (char)('A' + (int)(r % 26u));
	}
	out[4] = 0;
	return 0;
}

/* Карта пейлоада (06.11 «mp3 не играет»): расширение источника не
 * печатается на телефонном пути (FileComplete несёт ПОСТОЯННЫЙ путь
 * с .m4a — телефон открывает mp3 как Apple Lossless и сбоит).
 * mp3-пейлоады едут картой 3uTools: kind MPEG Audio, avformat 301,
 * файл — XXXX.mp3. */
static int atc_path_is_mp3(const char *path)
{
	size_t n = path ? strlen(path) : 0;
	if (n < 5)
		return 0;
	char a = path[n - 4], b = path[n - 3], c = path[n - 2],
	     d = path[n - 1];
	if (a >= 'A' && a <= 'Z')
		a = (char)(a - 'A' + 'a');
	if (b >= 'A' && b <= 'Z')
		b = (char)(b - 'A' + 'a');
	if (c >= 'A' && c <= 'Z')
		c = (char)(c - 'A' + 'a');
	if (d >= 'A' && d <= 'Z')
		d = (char)(d - 'A' + 'a');
	return a == '.' && b == 'm' && c == 'p' && d == '3';
}

/* битрейт mp3 из фактических байтов и длительности (3uTools слал
 * реальный битрейт файла: 320 для CBR-образца); не вычитали — 320
 * (живой образец декларации) */
static uint32_t atc_mp3_bitrate(const char *path, unsigned total_ms)
{
	struct stat st;
	if (!path || stat(path, &st) != 0 || st.st_size <= 0 || total_ms == 0)
		return 320;
	double kbps = (double)(unsigned long long)st.st_size * 8.0 /
		      ((double)total_ms / 1000.0) / 1000.0;
	if (kbps < 16.0 || kbps > 4000.0)
		return 320;
	return (uint32_t)(kbps + 0.5);
}

/* Запись с read-back-сверкой байт-в-байт (обязательна у стейджа, §8.2). */
static int atc_write_verify(irm_afc_t *afc, const char *abs_path,
			    const uint8_t *b, size_t n)
{
	if (irm_afc_write_full(afc, abs_path, b, n) != 0) {
		fprintf(stderr, "atc-insert: write %s: %s\n", abs_path,
			irm_afc_error());
		return -1;
	}
	uint8_t *rb = NULL;
	size_t rn = 0;
	if (irm_afc_read_full(afc, abs_path, &rb, &rn) != 0 ||
	    rn != n || (n && memcmp(rb, b, n) != 0)) {
		fprintf(stderr, "atc-insert: read-back %s не совпал "
				"(%zu/%zu, %s)\n",
			abs_path, rn, n, irm_afc_error());
		free(rb);
		return -1;
	}
	free(rb);
	return 0;
}



/* Airlock/Media готов (создаём при отсутствии) + префлайт-дым:
 * write → read-back → rename → read-back → remove — на времёнке
 * «irm-preflight.tmp», всегда самоочищается. До стейджа: любая
 * неудача = abort ДО каких-либо мутаций. */
static int atc_airlock_ready(irm_afc_t *afc)
{
	char **names = NULL;
	size_t nn = 0;
	int have = irm_afc_dir_list(afc, "/Airlock/Media", &names, &nn) == 0;
	if (have) {
		for (size_t i = 0; i < nn; i++)
			free(names[i]);
		free(names);
	} else {
		if (irm_afc_mkdir(afc, "/Airlock/Media") != 0) {
			fprintf(stderr, "atc-insert: mkdir /Airlock/Media: "
					"%s\n",
				irm_afc_error());
			return -1;
		}
	}
	static const uint8_t smoke[64] = {
		0x49, 0x52, 0x4d, 0x2d, 0x70, 0x72, 0x65, 0x66, /* "IRM-pref" */
		0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15,
		16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29,
		30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43,
		44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55
	};
	if (atc_write_verify(afc, "/Airlock/Media/irm-preflight.tmp", smoke,
			     sizeof smoke) != 0)
		return -1;
	if (irm_afc_rename(afc, "/Airlock/Media/irm-preflight.tmp",
			   "/Airlock/Media/irm-preflight.tmp2") != 0) {
		fprintf(stderr, "atc-insert: rename префлайт: %s\n",
			irm_afc_error());
		irm_afc_remove(afc, "/Airlock/Media/irm-preflight.tmp");
		return -1;
	}
	if (atc_write_verify(afc, "/Airlock/Media/irm-preflight.tmp2", smoke,
			     sizeof smoke) != 0) {
		irm_afc_remove(afc, "/Airlock/Media/irm-preflight.tmp2");
		return -1;
	}
	if (irm_afc_remove(afc, "/Airlock/Media/irm-preflight.tmp2") != 0) {
		fprintf(stderr, "atc-insert: remove префлайт: %s\n",
			irm_afc_error());
		return -1;
	}
	irm_afc_remove(afc, "/Airlock/Media/irm-preflight.tmp"); /* реликвия */
	return 0;
}

/* Очистка стейджа (только ДО FSFM: после телефон их потребляет сам). */
static void atc_stage_clean(irm_afc_t *afc, int verbose)
{
	irm_afc_remove(afc, "/iTunes_Control/Sync/Media/Sync_00000000.plist");
	irm_afc_remove(afc,
		       "/iTunes_Control/Sync/Media/Sync_00000000.plist.cig");
	char **names = NULL;
	size_t nn = 0;
	if (irm_afc_dir_list(afc, "/iTunes_Control/Sync/Media", &names,
			     &nn) != 0) {
		if (verbose)
			printf("  стейдж: отсутствует (ок)\n");
	} else {
		size_t files = 0;
		for (size_t i = 0; i < nn; i++) {
			if (strcmp(names[i], ".") && strcmp(names[i], "..")) {
				if (verbose)
					printf("  остался: %s\n", names[i]);
				files++;
			}
			free(names[i]);
		}
		free(names);
		if (verbose)
			printf("  стейдж после очистки: файлов %zu\n", files);
	}
}

/* Постоянный путь FileComplete (§12.5): Fnn-папка F00..F49 (детермини-
 * рованно от track PID), имя — 4 случайные заглавные буквы + .m4a,
 * без столкновений с существующими в папке; отсутствующую Fnn создаём
 * mkdir'ом. Возвращает ROOT-RELATIVE путь (без ведущего /). */
static int atc_permanent_path(irm_afc_t *afc, int64_t track_pid,
			      const char *ext, char *out, size_t outcap)
{
	for (int try_off = 0; try_off < 4; try_off++) {
		unsigned fidx =
			(unsigned)(((uint64_t)track_pid % 50u + (uint64_t)try_off) %
				   50u);
		char folder_rel[48];
		snprintf(folder_rel, sizeof folder_rel,
			 "iTunes_Control/Music/F%02u", fidx);
		char folder_abs[64];
		atc_abs(folder_abs, sizeof folder_abs, folder_rel);
		char **names = NULL;
		size_t nn = 0;
		if (irm_afc_dir_list(afc, folder_abs, &names, &nn) != 0) {
			if (irm_afc_mkdir(afc, folder_abs) != 0) {
				fprintf(stderr, "atc-insert: mkdir %s: %s\n",
					folder_abs, irm_afc_error());
				continue;
			}
			if (irm_afc_dir_list(afc, folder_abs, &names, &nn) !=
			    0) {
				fprintf(stderr, "atc-insert: list %s после "
						"mkdir: %s\n",
					folder_abs, irm_afc_error());
				continue;
			}
		}
		char used[64][36];
		size_t usedn = 0;
		for (size_t i = 0; i < nn && usedn < 64; i++) {
			if (strcmp(names[i], ".") && strcmp(names[i], ".."))
				snprintf(used[usedn++], sizeof used[0], "%s",
					 names[i]);
			free(names[i]);
		}
		free(names);
		for (int ln = 0; ln < 16; ln++) {
			char letters[5], nm[12];
			if (atc_four_letters(letters) != 0)
				return -1;
			snprintf(nm, sizeof nm, "%s.%s",
				 letters, ext ? ext : "m4a");
			int busy = 0;
			for (size_t i = 0; i < usedn; i++) {
				if (strcmp(used[i], nm) == 0) {
					busy = 1;
					break;
				}
			}
			if (busy)
				continue;
			snprintf(out, outcap, "%s/%s", folder_rel, nm);
			return 0;
		}
	}
	return -1;
}

/* Разбор AssetManifest (политика 9f/9g + бэклог-факт):
 *   - собственные записи обязаны покрыть РОВНО весь пакет: их набор
 *     совпадает с tpids[0..tn) (dec-строки, signed), каждая запись
 *     ровно одна, бит аудио (AssetParts & 1) обязателен;
 *   - ПРОЧИЕ записи телефон кладёт В ЕДИНЫЙ whitelist (жёлтые желания,
 *     CONFIRMED 9g-бэктрек): пока файл не донесён, запрос live ВЕЧНО
 *     (FileError{16} в 9f НЕ отменил желание artwork → запрос
 *     повторился в run2). Классификация прочих:
 *       · parts & 1 (audio) → БЭКЛОГ-аудио: донести файл (та же
 *         фикс-фаза upload → rename bare → read-back → FileComplete;
 *         телефон не сверяет метаданные файла — фикстура валидна);
 *       · БЕЗ бита 1, IsDownload=true, AssetType="Music" → ancillary
 *         (artwork/genius/lyrics) → FileError{16} ПОСЛЕ ВСЕХ
 *         FileComplete;
 *       · всё прочее → СТОП без отправок.
 * 0 — успех: own_ids[tn][24] заполнены dec-строками в ПОРЯДКЕ
 *     МАНИФЕСТА (FileComplete можно в любом порядке — rustunes
 *     CONFIRMED), *foreign_n — число прочих записей (rec->parts
 *     решает: аудио-доставка или FileError). */
struct atc_rec {
	char asset_id[40];
	uint64_t parts;
	int is_download;
	char type[16];
};

static int atc_manifest_parse(const irm_bp_node *frame,
			      const uint64_t *tpids, size_t tn,
			      char own_ids[tn][24], struct atc_rec **foreigns,
			      size_t *foreign_n)
{
	int rc = -1;
	size_t own_c = 0;
	*foreign_n = 0;
	if (tn == 0)
		return -1;
	char (*expect)[24] = malloc(tn * sizeof *expect);
	unsigned char *seen = calloc(tn, 1);
	if (!expect || !seen) {
		fprintf(stderr, "atc-insert: память\n");
		goto out;
	}
	for (size_t i = 0; i < tn; i++)
		snprintf(expect[i], sizeof expect[i], "%llu",
			 (unsigned long long)tpids[i]);
	const irm_bp_node *params = irm_bp_dict_get(frame, "Params");
	const irm_bp_node *manifest =
		params ? irm_bp_dict_get(params, "AssetManifest") : NULL;
	const irm_bp_node *media =
		(manifest && irm_bp_type_of(manifest) == IRM_BP_DICT)
			? irm_bp_dict_get(manifest, "Media")
			: NULL;
	if (!media || irm_bp_type_of(media) != IRM_BP_ARRAY) {
		fprintf(stderr, "atc-insert: манифест без Params.AssetManifest"
				".Media — СТОП\n");
		goto out;
	}
	size_t n = irm_bp_array_len(media);
	for (size_t i = 0; i < n; i++) {
		const irm_bp_node *e = irm_bp_array_get(media, i);
		const char *sid = e ? str_of(e, "AssetID") : NULL;
		if (!sid) {
			fprintf(stderr, "atc-insert: запись %zu без AssetID — "
					"СТОП\n",
				i);
			goto out;
		}
		const irm_bp_node *var =
			e ? irm_bp_dict_get(e, "Variant") : NULL;
		const irm_bp_node *pv =
			var ? irm_bp_dict_get(var, "AssetParts") : NULL;
		if (!pv || irm_bp_type_of(pv) != IRM_BP_UINT) {
			fprintf(stderr, "atc-insert: запись %s без Variant."
					"AssetParts — СТОП\n",
				sid);
			goto out;
		}
		uint64_t parts = irm_bp_uint_value(pv);
		int dl = 0;
		{
			const irm_bp_node *db =
				irm_bp_dict_get(e, "IsDownload");
			dl = (db && irm_bp_type_of(db) == IRM_BP_BOOL)
				     ? irm_bp_bool_value(db)
				     : 0;
		}
		const char *typ = str_of(e, "AssetType");
		/* свой ли это? */
		size_t hit = tn; /* > tn-1 = не найден */
		for (size_t j = 0; j < tn; j++) {
			if (strcmp(sid, expect[j]) == 0) {
				hit = j;
				break;
			}
		}
		if (hit < tn) {
			if (!(parts & 1u) || seen[hit]) {
				fprintf(stderr, "atc-insert: own-запись %s "
						"дублирована/без аудио-бита "
						"(parts=%llu) — СТОП\n",
					sid, (unsigned long long)parts);
				goto out;
			}
			seen[hit] = 1;
			own_c++;
			snprintf(own_ids[own_c - 1], 24, "%s", sid);
			continue;
		}
		/* чужая: либо бэклог-аудио, либо ancillary — обе классы
		 * допустимы (rec->parts далее решает способ ответа). */
		if (typ && strcmp(typ, "Music") == 0 && dl) {
			struct atc_rec *rec = (struct atc_rec *)realloc(
				*foreigns, (*foreign_n + 1) * sizeof **foreigns);
			if (!rec) {
				fprintf(stderr, "atc-insert: память\n");
				goto out;
			}
			*foreigns = rec;
			struct atc_rec *r = &rec[*foreign_n];
			snprintf(r->asset_id, sizeof r->asset_id, "%s", sid);
			r->parts = parts;
			r->is_download = dl;
			snprintf(r->type, sizeof r->type, "%s",
				 typ ? typ : "?");
			(*foreign_n)++;
			continue;
		}
		fprintf(stderr, "atc-insert: НЕОЖИДАННАЯ запись %s "
				"(type=%s parts=%llu dl=%d) — СТОП без "
				"отправок\n",
			sid, dash(typ), (unsigned long long)parts, dl);
		goto out;
	}
	if (own_c != tn) {
		fprintf(stderr, "atc-insert: манифест не покрывает пакет: "
				"own=%zu/%zu — СТОП\n",
			own_c, tn);
		goto out;
	}
	rc = 0;
out:
	free(expect);
	free(seen);
	return rc;
}

/* FileComplete (§12.4): {AssetID, Dataclass:"Media", AssetPath}. */
static int atc_file_complete(int fd, int tls, const char *own_id,
			     const char *perm_rel)
{
	irm_bp_node *p = irm_bp_dict();
	if (!p)
		return -1;
	int failed = 0;
	if (irm_bp_dict_set(p, "AssetID", irm_bp_string(own_id)) != 0 ||
	    irm_bp_dict_set(p, "Dataclass", irm_bp_string("Media")) != 0 ||
	    irm_bp_dict_set(p, "AssetPath", irm_bp_string(perm_rel)) != 0)
		failed = 1;
	irm_bp_node *msg = NULL;
	if (!failed) {
		msg = atc_host_msg(2, "FileComplete", p);
		p = NULL;
		if (!msg)
			failed = 1;
	}
	if (!failed && atc_frame_write(fd, tls, msg) != 0)
		failed = 1;
	irm_bp_free(p);
	irm_bp_free(msg);
	if (failed) {
		fprintf(stderr, "atc-insert: FileComplete не отправлен\n");
		return -1;
	}
	printf(" отсылаем FileComplete (AssetID=%s, AssetPath=%s)\n", own_id,
	       perm_rel);
	return 0;
}

/* FileError (§14.2): ровно 4 ключа Params + Session 2. */
static int atc_file_error(int fd, int tls, const char *asset_id)
{
	irm_bp_node *p = irm_bp_dict();
	if (!p)
		return -1;
	int failed = 0;
	if (irm_bp_dict_set(p, "AssetID", irm_bp_string(asset_id)) != 0 ||
	    irm_bp_dict_set(p, "Dataclass", irm_bp_string("Media")) != 0 ||
	    irm_bp_dict_set(p, "ErrorCode", irm_bp_uint(16)) != 0 ||
	    irm_bp_dict_set(p, "ErrorIsVisible", irm_bp_bool(0)) != 0)
		failed = 1;
	irm_bp_node *msg = NULL;
	if (!failed) {
		msg = atc_host_msg(2, "FileError", p);
		p = NULL;
		if (!msg)
			failed = 1;
	}
	if (!failed && atc_frame_write(fd, tls, msg) != 0)
		failed = 1;
	irm_bp_free(p);
	irm_bp_free(msg);
	if (failed) {
		fprintf(stderr, "atc-insert: FileError не отправлен\n");
		return -1;
	}
	printf(" отсылаем FileError (AssetID=%s, ErrorCode=16 "
	       "Unavailable, ErrorIsVisible=false)\n",
	       asset_id);
	return 0;
}

/* Свой ассет: Airlock-загрузка → read-back — rename → bare →
 * read-back → постоянный путь → FileComplete. */
static int atc_own_asset(irm_afc_t *afc, int fd, int tls, int64_t track_pid,
			 const char *own_id, const char *ext,
			 const uint8_t *bytes, size_t n)
{
	char stage[80], stage2[72];
	snprintf(stage, sizeof stage, "/Airlock/Media/%s.%s",
		 own_id, ext ? ext : "m4a");
	if (atc_write_verify(afc, stage, bytes, n) != 0)
		return -1;
	snprintf(stage2, sizeof stage2, "/Airlock/Media/%s", own_id);
	if (irm_afc_rename(afc, stage, stage2) != 0) {
		fprintf(stderr, "atc-insert: rename %s → %s: %s\n", stage,
			stage2, irm_afc_error());
		return -1;
	}
	if (n) {
		uint8_t *rb = NULL;
		size_t rn = 0;
		int bad = (irm_afc_read_full(afc, stage2, &rb, &rn) != 0 ||
			   rn != n || memcmp(rb, bytes, n) != 0);
		free(rb);
		if (bad) {
			fprintf(stderr, "atc-insert: read-back bare %s не "
					"совпал\n",
				stage2);
			return -1;
		}
	}
	char perm[96];
	if (atc_permanent_path(afc, track_pid, ext, perm, sizeof perm) != 0) {
		fprintf(stderr, "atc-insert: не выбрали постоянный путь\n");
		return -1;
	}
	printf("  ассет: staged %s → bare %s (%zu Б), постоянный путь %s\n",
	       stage, stage2, n, perm);
	return atc_file_complete(fd, tls, own_id, perm);
}

/* массив «pid-колонок» для проверки свежих PIDs: из всех таблиц каталога. */
static uint64_t *atc_collect_pids(sqlite3 *db, size_t *out_n)
{
	uint64_t *vals = NULL;
	size_t cap = 0, nn = 0;
	sqlite3_stmt *stt = NULL;
	if (sqlite3_prepare_v2(db,
			       "SELECT name FROM sqlite_master WHERE "
			       "type='table' AND name NOT LIKE 'sqlite_%'",
			       -1, &stt, NULL) != SQLITE_OK) {
		sqlite3_finalize(stt);
		*out_n = 0;
		return NULL;
	}
	while (sqlite3_step(stt) == SQLITE_ROW) {
		const unsigned char *tb = sqlite3_column_text(stt, 0);
		if (!tb)
			continue;
		char q[512];
		snprintf(q, sizeof q, "PRAGMA table_info(%s)", (const char *)tb);
		sqlite3_stmt *stc = NULL;
		if (sqlite3_prepare_v2(db, q, -1, &stc, NULL) != SQLITE_OK)
			continue;
		char cols[16][32];
		int nofc = 0;
		while (sqlite3_step(stc) == SQLITE_ROW && nofc < 15) {
			const unsigned char *cn =
				sqlite3_column_text(stc, 1);
			const unsigned char *ct =
				sqlite3_column_text(stc, 2);
			if (!cn)
				continue;
			const char *lc = (const char *)cn;
			const char *tc = ct ? (const char *)ct : "";
			int pid_like = strstr(lc, "pid") != 0 ||
				       strcmp(lc, "sync_id") == 0;
			int is_int = strstr(tc, "INT") != 0;
			if (pid_like && is_int) {
				snprintf(cols[nofc], sizeof cols[0], "%s", lc);
				nofc++;
			}
		}
		sqlite3_finalize(stc);
		for (int ci = 0; ci < nofc; ci++) {
			snprintf(q, sizeof q, "SELECT %s FROM %s", cols[ci],
				 (const char *)tb);
			sqlite3_stmt *stv = NULL;
			if (sqlite3_prepare_v2(db, q, -1, &stv, NULL) !=
			    SQLITE_OK)
				continue;
			while (sqlite3_step(stv) == SQLITE_ROW && nn < 65536) {
				if (cap == nn) {
					size_t ncap = cap ? cap * 2 : 256;
					uint64_t *nv = (uint64_t *)realloc(
						vals, ncap * sizeof(uint64_t));
					if (!nv)
						break;
					vals = nv;
					cap = ncap;
				}
				vals[nn++] =
					(uint64_t)sqlite3_column_int64(stv, 0);
			}
			sqlite3_finalize(stv);
			if (nn >= 65536)
				break;
		}
		if (nn >= 65536)
			break;
	}
	sqlite3_finalize(stt);
	*out_n = nn;
	return vals;
}

/* --- 9k: обложка ---------------------------------------------------

   Рецепт 3uTools (FINDINGS ~534/743/1561): item-поле
   "artwork_cache_id" (u32, уникальное — max(u32-токены каталога)+1)
   + сырой JPEG/PNG маркер в /Airlock/Media/Artwork/<item_pid>.
   ArtworkDB НЕ пишем (С-путь 01.11: обложки встали без него; формат
   mhfd не разобран). Потребление маркера — ингест item после FSFM;
   маркеры ставим рядом с ops/.cig строго ДО FSFM (как 3uTools).
   Reuse токена даёт чужую/старую обложку (Bangarang-кейс) — поэтому
   кандидата сверяем со всеми строковыми токенами каталога. */
static uint64_t atc_artwork_token_max(sqlite3 *db)
{
	static const char *const qs[] = {
		"SELECT CAST(artwork_token AS INTEGER) FROM artwork_token "
		"WHERE artwork_token GLOB '[0-9]*'",
		"SELECT CAST(available_artwork_token AS INTEGER) FROM "
		"best_artwork_token "
		"WHERE available_artwork_token GLOB '[0-9]*'",
		"SELECT CAST(artwork_token AS INTEGER) FROM artwork "
		"WHERE artwork_token GLOB '[0-9]*'",
		NULL
	};
	uint64_t maxs = 0;
	for (int qi = 0; qs[qi]; qi++) {
		sqlite3_stmt *st = NULL;
		if (sqlite3_prepare_v2(db, qs[qi], -1, &st, NULL) !=
		    SQLITE_OK) {
			sqlite3_finalize(st);
			continue;
		}
		while (sqlite3_step(st) == SQLITE_ROW) {
			if (sqlite3_column_type(st, 0) != SQLITE_INTEGER)
				continue;
			int64_t v = sqlite3_column_int64(st, 0);
			/* u32-представимые только: cache_id пишем u32
			 * (3uTools 483/484/485, старый код guint32) */
			if (v > 0 && (uint64_t)v <= UINT32_MAX - 1 &&
			    (uint64_t)v > maxs)
				maxs = (uint64_t)v;
		}
		sqlite3_finalize(st);
	}
	return maxs;
}

/* занят ли численный токен в трёх artwork-таблицах (CAST-сравнение —
 * страховка от ведущих нулей в строковых токенах) */
static int atc_artwork_token_taken(sqlite3 *db, uint64_t v)
{
	static const char *const qs[] = {
		"SELECT 1 FROM artwork_token "
		"WHERE CAST(artwork_token AS INTEGER)=?1 LIMIT 1",
		"SELECT 1 FROM best_artwork_token "
		"WHERE CAST(available_artwork_token AS INTEGER)=?1 LIMIT 1",
		"SELECT 1 FROM artwork "
		"WHERE CAST(artwork_token AS INTEGER)=?1 LIMIT 1",
		NULL
	};
	for (int qi = 0; qs[qi]; qi++) {
		sqlite3_stmt *st = NULL;
		if (sqlite3_prepare_v2(db, qs[qi], -1, &st, NULL) !=
		    SQLITE_OK) {
			sqlite3_finalize(st);
			return 1; /* консервативно: считаем занятым */
		}
		int64_t sv = (int64_t)v;
		sqlite3_bind_int64(st, 1, sv);
		int row = (sqlite3_step(st) == SQLITE_ROW);
		sqlite3_finalize(st);
		if (row)
			return 1;
	}
	return 0;
}

/* --- собственно команда ------------------------------------------- */

/* (9j) чистка строки: управляющие символы вон, хвостовые пробелы
 * обрезаны, cap по границе utf8. NULL = пусто/отсутствует (дефолты
 * остаются). Общий вариант san_string — и для env, и для строк
 * TSV-плейлиста (9l); env-обёртка ниже. */
static const char *san_string(char *dst, size_t len, const char *src)
{
	size_t n = 0;

	for (const char *p = src; *p && n + 1 < len; p++) {
		unsigned char c = (unsigned char)*p;
		if (c < 0x20 && c != '\t')
			continue;
		dst[n++] = (char)c;
	}
	dst[n] = 0;
	while (n && (unsigned char)dst[n - 1] == ' ')
		dst[--n] = 0;
	if (!dst[0])
		return NULL;
	/* cap не должен рвать utf8-серию: отступаем с континуаций,
	 * затем с незавершённой ведущей */
	size_t k = n;
	while (k > 0 && ((unsigned char)dst[k - 1] & 0xc0) == 0x80)
		k--;
	if (k > 0 && (unsigned char)dst[k - 1] >= 0x80) {
		unsigned char lb = (unsigned char)dst[k - 1];
		size_t want = (lb & 0xe0) == 0xc0 ? 2u
			    : (lb & 0xf0) == 0xe0 ? 3u
			    : 4u;
		if (n - (k - 1) < want)
			dst[k - 1] = 0;
	}
	if (!dst[0])
		return NULL;
	return dst;
}

static const char *env_san(char *dst, size_t len, const char *name)
{
	const char *e = getenv(name);
	if (!e)
		return NULL;
	return san_string(dst, len, e);
}

/* --- 9l: плейлист разных треков в одном конверте ops ---------------- */

/* строка TSV-плейлиста (пишет GUI irm-fill), табы-разделители:
 *   путь<TAB>мс<TAB>рейт<TAB>сэмплы<TAB>title<TAB>исполнитель<TAB>
 *   альбом<TAB>жанр<TAB>обложка
 * Обложка (путь к JPEG/PNG) может быть пустой — item без
 * artwork_cache_id. title/исполнитель/альбом/жанр пустые → прежние
 * дефолты (IRM Tone/IRM/IRM Tones/Test). */
struct atc_playlist_item {
	char path[512];
	uint32_t total_ms, rate;
	uint64_t samples;
	char title[80], artist[256], album[256], genre[256];
	char art_path[512];
	uint32_t art_token; /* artwork_cache_id; 0 = без обложки */
};

/* Гардер размера пейлоада — наша осторожность 9i (64 МиБ; реверсного
 * лимита у 3uTools нет; живой аплоад 45 576 145 Б прошёл). Один
 * пейлоад в памяти за раз (ленивая загрузка per-item). */
/* Гардер размера пейлоада — наша осторожность 9i (реверсного лимита
 * у 3uTools нет; живой аплоад 45 576 145 Б прошёл). Live 13:18:
 * Iowa.m4a 94,2 МиБ отбраковался этим гардером (rc=1, ВСЯ порция) —
 * телефон такого размера не отвергал, это был наш лимит. Дефолтный
 * перекод пакета теперь AAC (~10-16 МиБ), а .m4a-as-is бывают любыми
 * — поднят до 512 МиБ (один пейлоад в памяти за раз). */
#define ATC_PLAY_LOAD_MAX (512L * 1024L * 1024L)

/* разбор TSV-плейлиста: 1..499 строк, пустые и «#…» пропускаются.
 * Возврат: массив (владелец обязан free) + *out_n; NULL при ошибке
 * (причина уже напечатана в stderr). Пути проверяются СТАТом без
 * чтения (само чтение — ленивое, per-item, в upload-петле). */
static struct atc_playlist_item *atc_playlist_parse(const char *tsv,
						    unsigned *out_n)
{
	*out_n = 0;
	FILE *f = fopen(tsv, "rb");
	if (!f) {
		fprintf(stderr, "atc-insert: плейлист %s: %s\n", tsv,
			strerror(errno));
		return NULL;
	}
	fseek(f, 0, SEEK_END);
	long sz = ftell(f);
	fseek(f, 0, SEEK_SET);
	if (sz <= 0 || sz > (8L * 1024L * 1024L)) {
		fprintf(stderr, "atc-insert: плейлист %s: размер %ld "
				"нежелателен (1 Б..8 МиБ)\n", tsv, sz);
		fclose(f);
		return NULL;
	}
	char *buf = (char *)malloc((size_t)sz + 1);
	if (!buf || fread(buf, 1, (size_t)sz, f) != (size_t)sz) {
		fprintf(stderr, "atc-insert: плейлист %s: чтение\n", tsv);
		free(buf);
		fclose(f);
		return NULL;
	}
	fclose(f);
	buf[sz] = 0;

	struct atc_playlist_item *pl = NULL;
	unsigned n = 0, cap = 0;
	for (char *s = buf; *s;) {
		char *line = s;
		char *eol = strchr(s, '\n');
		if (eol) {
			*eol = 0;
			s = eol + 1;
		} else {
			s += strlen(s);
		}
		size_t ll = strlen(line);
		if (ll && line[ll - 1] == '\r')
			line[ll - 1] = 0; /* CRLF от GUI-записи */
		if (!line[0] || line[0] == '#')
			continue; /* пустая строка / комментарий */
		/* разрез по табам: ровно 8 → 9 колонок */
		char *fs[9] = { line, NULL, NULL, NULL, NULL,
				NULL, NULL, NULL, NULL };
		int fi = 0;
		for (char *q = line; *q; q++) {
			if (*q != '\t')
				continue;
			*q = 0;
			if (fi < 8)
				fs[++fi] = q + 1;
			else {
				fprintf(stderr, "atc-insert: плейлист %s: "
						"строка %u — лишние колонки\n",
					tsv, n + 1);
				free(pl);
				free(buf);
				return NULL;
			}
		}
		if (n == 499) {
			fprintf(stderr, "atc-insert: плейлист %s: больше "
					"499 строк\n", tsv);
			free(pl);
			free(buf);
			return NULL;
		}
		if (n == cap) {
			unsigned ncap = cap ? cap * 2 : 16;
			struct atc_playlist_item *np = (struct
				atc_playlist_item *)realloc(pl, ncap *
				sizeof *np);
			if (!np) {
				fprintf(stderr, "atc-insert: плейлист: "
					"память\n");
				free(pl);
				free(buf);
				return NULL;
			}
			pl = np;
			cap = ncap;
		}
		memset(&pl[n], 0, sizeof pl[n]);
		san_string(pl[n].path, sizeof pl[n].path, fs[0]);
		if (!pl[n].path[0]) {
			fprintf(stderr, "atc-insert: плейлист %s: строка %u "
					"— пустой путь\n", tsv, n + 1);
			free(pl);
			free(buf);
			return NULL;
		}
		/* мс/рейт/сэмплы — обязательные числа (формат контракта
		 * с GUI); пределы те же, что у env-переменных (o2). */
		char *end = NULL;
		unsigned long ms = fs[1][0] ? strtoul(fs[1], &end, 10) : 0;
		if (!end || end == fs[1] || *end || ms == 0 || ms > 3600000ul) {
			fprintf(stderr, "atc-insert: плейлист %s: строка %u "
					"— мс «%s» не годится\n",
				tsv, n + 1, fs[1]);
			free(pl);
			free(buf);
			return NULL;
		}
		pl[n].total_ms = (uint32_t)ms;
		end = NULL;
		unsigned long rt = fs[2][0] ? strtoul(fs[2], &end, 10) : 0;
		if (!end || end == fs[2] || *end || rt < 8000 ||
		    rt > 192000ul) {
			fprintf(stderr, "atc-insert: плейлист %s: строка %u "
					"— сэмплрейт «%s» не годится\n",
				tsv, n + 1, fs[2]);
			free(pl);
			free(buf);
			return NULL;
		}
		pl[n].rate = (uint32_t)rt;
		pl[n].samples = fs[3][0] ? strtoull(fs[3], &end, 10) : 0;
		if (!end || end == fs[3] || *end) {
			fprintf(stderr, "atc-insert: плейлист %s: строка %u "
					"— сэмплы «%s» не годятся\n",
				tsv, n + 1, fs[3]);
			free(pl);
			free(buf);
			return NULL;
		}
		if (pl[n].samples == 0)
			pl[n].samples = (uint64_t)ms * (uint64_t)rt / 1000ULL;
		if (pl[n].samples == 0) {
			fprintf(stderr, "atc-insert: плейлист %s: строка %u "
					"— сэмплы=0\n", tsv, n + 1);
			free(pl);
			free(buf);
			return NULL;
		}
		san_string(pl[n].title, sizeof pl[n].title, fs[4]);
		san_string(pl[n].artist, sizeof pl[n].artist, fs[5]);
		san_string(pl[n].album, sizeof pl[n].album, fs[6]);
		san_string(pl[n].genre, sizeof pl[n].genre, fs[7]);
		san_string(pl[n].art_path, sizeof pl[n].art_path, fs[8]);
		/* путь пейлоада: существует, регулярный файл, размер по
		 * гардеру (1 Б..64 МиБ) — СТАТом, без чтения. */
		struct stat st;
		if (stat(pl[n].path, &st) != 0 || !S_ISREG(st.st_mode) ||
		    st.st_size <= 0 || st.st_size > ATC_PLAY_LOAD_MAX) {
			fprintf(stderr, "atc-insert: плейлист %s: строка %u: "
					"пейлоад %s не годится (1 Б..%ld МиБ)\n",
				tsv, n + 1, pl[n].path,
				ATC_PLAY_LOAD_MAX / (1024L * 1024L));
			free(pl);
			free(buf);
			return NULL;
		}
		printf("плейлист[%u]: %s %llu мс @%u %llu сэмплов; "
		       "title=%s artist=%s album=%s genre=%s; обложка=%s\n",
		       n + 1, pl[n].path, (unsigned long long)ms,
		       (unsigned)rt, (unsigned long long)pl[n].samples,
		       pl[n].title[0] ? pl[n].title : "(нет)",
		       pl[n].artist[0] ? pl[n].artist : "(нет)",
		       pl[n].album[0] ? pl[n].album : "(нет)",
		       pl[n].genre[0] ? pl[n].genre : "(нет)",
		       pl[n].art_path[0] ? pl[n].art_path : "без");
		n++;
	}
	free(buf);
	if (n == 0) {
		fprintf(stderr, "atc-insert: плейлист %s: пуст\n", tsv);
		free(pl);
		return NULL;
	}
	*out_n = n;
	return pl;
}

/* ленивая загрузка пейлоада одного item (0 ок / 1 провал; причина
 * уже напечатана). По одному экземпляру в памяти. */
static int atc_playlist_payload(const struct atc_playlist_item *it,
				uint8_t **buf, size_t *bn)
{
	*buf = NULL;
	*bn = 0;
	FILE *f = fopen(it->path, "rb");
	if (!f) {
		fprintf(stderr, "atc-insert: пейлоад %s: %s\n", it->path,
			strerror(errno));
		return 1;
	}
	fseek(f, 0, SEEK_END);
	long sz = ftell(f);
	fseek(f, 0, SEEK_SET);
	if (sz <= 0 || sz > ATC_PLAY_LOAD_MAX) {
		fprintf(stderr, "atc-insert: пейлоад %s: размер %ld "
				"нежелателен\n", it->path, sz);
		fclose(f);
		return 1;
	}
	uint8_t *b = (uint8_t *)malloc((size_t)sz);
	if (!b || fread(b, 1, (size_t)sz, f) != (size_t)sz) {
		fprintf(stderr, "atc-insert: пейлоад %s: чтение\n", it->path);
		free(b);
		fclose(f);
		return 1;
	}
	fclose(f);
	*buf = b;
	*bn = (size_t)sz;
	return 0;
}

/* ленивая загрузка обложки item (JPEG/PNG-магия как в 9k; 0 ок /
 * 1 провал, причина напечатана). */
static int atc_playlist_art(const struct atc_playlist_item *it,
			    uint8_t **buf, size_t *bn)
{
	*buf = NULL;
	*bn = 0;
	FILE *f = fopen(it->art_path, "rb");
	if (!f) {
		fprintf(stderr, "atc-insert: обложка %s: %s\n", it->art_path,
			strerror(errno));
		return 1;
	}
	fseek(f, 0, SEEK_END);
	long sz = ftell(f);
	fseek(f, 0, SEEK_SET);
	if (sz <= 0 || sz > (4L * 1024L * 1024L)) {
		fprintf(stderr, "atc-insert: обложка %s: размер %ld "
				"нежелателен (1 Б..4 МиБ)\n", it->art_path, sz);
		fclose(f);
		return 1;
	}
	uint8_t *b = (uint8_t *)malloc((size_t)sz);
	if (!b || fread(b, 1, (size_t)sz, f) != (size_t)sz) {
		fprintf(stderr, "atc-insert: обложка %s: чтение\n",
			it->art_path);
		free(b);
		fclose(f);
		return 1;
	}
	fclose(f);
	int fjpg = sz >= 3 && b[0] == 0xff && b[1] == 0xd8 && b[2] == 0xff;
	int fpng = sz >= 8 && b[0] == 0x89 && b[1] == 0x50 && b[2] == 0x4e &&
		   b[3] == 0x47 && b[4] == 0x0d && b[5] == 0x0a &&
		   b[6] == 0x1a && b[7] == 0x0a;
	if (!fjpg && !fpng) {
		fprintf(stderr, "atc-insert: обложка %s: не JPEG и не PNG "
				"— вставка БЕЗ обложки\n", it->art_path);
		free(b);
		return 1;
	}
	*buf = b;
	*bn = (size_t)sz;
	return 0;
}

static int cmd_atc_insert(const char *path, const char *selector)
{
	uint32_t device_id = 0;
	char udid[128] = "-";
	if (find_device(path, selector, &device_id, udid, sizeof udid) != 0)
		return 1;
	printf("device: id=%u udid=%s\n", device_id, udid);

	irm_pair_t *pair = NULL;
	if (irm_pair_load(udid, &pair) != 0) {
		fprintf(stderr, "atc-insert: %s\n", irm_pair_error());
		return 1;
	}
	printf("pair: %s\n", pair->src);

	irm_lk_t *lk = irm_lk_open(path, device_id, IRM_LK_DEFAULT_PORT, 5);
	if (!lk) {
		fprintf(stderr, "atc-insert: lockdown: %s\n", irm_lk_error());
		irm_pair_free(pair);
		return 1;
	}
	if (irm_lk_start_session(lk, pair) != 0) {
		fprintf(stderr, "atc-insert: session: %s\n", irm_lk_error());
		irm_lk_close(lk);
		irm_pair_free(pair);
		return 1;
	}

	const char *ve = getenv("IRMA_ATC_VERSION");
	const char *ver = (ve && *ve) ? ve : "13.2.4.123";
	const char *sve = getenv("IRMA_ATC_SERVICE");
	const char *svc = (sve && *sve) ? sve : "com.apple.atc";
	const char *fixt = getenv("IRMA_ATC_FIXTURE");
	int stage_only = 0;
	{
		const char *e = getenv("IRMA_ATC_STAGE_ONLY");
		stage_only = (e && *e && strcmp(e, "0") != 0);
	}
	int rc = 1;
	int cfd = -1, ctl = 0; /* AFC-канал (staging/airlock) */
	int afd = -1, atl = 0; /* ATC-канал (handshake/FSFM/ассеты) */
	irm_afc_t *afc = NULL;
	uint8_t *gr = NULL;
	size_t grn = 0;
	uint8_t *ops_bytes = NULL;
	size_t ops_n = 0;
	uint8_t cig[21];          /* .cig sidecar — ровно 21 Б (f) */
	size_t cig_n = 21;
	uint8_t *fix = NULL;
	size_t fixn = 0;
	irm_bp_node *ops_root = NULL;
	uint64_t *taken = NULL;
	size_t takenn = 0;
	uint64_t *tpids = NULL;    /* трековые PIDs пакета (c) */
	uint64_t *apids = NULL;    /* 9l: альбомные PIDs per-item */
	uint64_t *rps = NULL;      /* 9l: артистные PIDs per-item */
	char (*own_ids)[24] = NULL; /* own AssetID в порядке манифеста */
	char (*titles)[80] = NULL;  /* заголовки per track (d) */
	unsigned batch_n = 1;       /* вставок в пакете (1..499, 9g) */
	struct atc_rec *foreigns = NULL;
	size_t fgn = 0;
	struct atc_playlist_item *pl = NULL; /* 9l: строки плейлиста */
	int playlist = 0;                    /* IRMA_ATC_PLAYLIST задан */
	int64_t db_pid = 0, container = 0; /* каталог db_info (b) */
	uint32_t anchor_a = 0;            /* якерь A из DB-копии */
	uint64_t al = 0, ar = 0;          /* свежие PIDs альбома/артиста (c) */
	uint64_t art_next = 0;            /* первый artwork_cache_id (9k) */
	char anch[16] = "", anch_next[16] = ""; /* RS=A, FSFM=A+1 */
	char scratch[512];
	snprintf(scratch, sizeof scratch, "/tmp/opencode/%s-music", udid);

	/* (o) размер пакета: один конверт [update_db_info, insert_track × N],
	 * лимиты rustunes: MAX_OPERATIONS=500 (с update_db_info → 499
	 * вставок), ops ≤ 4 МиБ (batch.rs). */
	{
		const char *e = getenv("IRMA_ATC_BATCH_N");
		if (e && *e) {
			char *end = NULL;
			long v = strtol(e, &end, 10);
			if (!end || end == e || *end || v < 1 || v > 499) {
				fprintf(stderr, "atc-insert: "
						"IRMA_ATC_BATCH_N=%s вне "
						"1..499\n",
					e);
				goto close;
			}
			batch_n = (unsigned)v;
		}
	}
	printf("batch: %u вставка(ок) в одном конверте\n", batch_n);

	/* (o2) метаданные вставки: env-переопределения (смотрят GUI- и
	 * прочие внешние транскоды): IRMA_ATC_TOTAL_MS (total_time_ms),
	 * IRMA_ATC_RATE (сэмплрейт); samples = ms*rate/1000, если
	 * IRMA_ATC_SAMPLES не задан явно. Дефолты — фикстура 9f
	 * (100/4410/44100). */
	unsigned total_ms = 100, rate = 44100;
	uint64_t samples = 0;
	{
		const char *e = getenv("IRMA_ATC_TOTAL_MS");
		if (e && *e) {
			char *end = NULL;
			unsigned long v = strtoul(e, &end, 10);
			if (!end || end == e || *end || v == 0 ||
			    v > 3600000UL) {
				fprintf(stderr, "atc-insert: "
						"IRMA_ATC_TOTAL_MS=%s вне "
						"1..3600000\n",
					e);
				goto close;
			}
			total_ms = (unsigned)v;
		}
		e = getenv("IRMA_ATC_RATE");
		if (e && *e) {
			char *end = NULL;
			unsigned long v = strtoul(e, &end, 10);
			if (!end || end == e || *end || v < 8000 ||
			    v > 192000) {
				fprintf(stderr, "atc-insert: "
						"IRMA_ATC_RATE=%s вне "
						"8000..192000\n",
					e);
				goto close;
			}
			rate = (unsigned)v;
		}
		e = getenv("IRMA_ATC_SAMPLES");
		if (e && *e) {
			char *end = NULL;
			unsigned long long v = strtoull(e, &end, 10);
			if (!end || end == e || *end || v == 0 ||
			    v > 1000000000ULL) {
				fprintf(stderr, "atc-insert: "
						"IRMA_ATC_SAMPLES=%s вне "
						"1..1e9\n",
					e);
				goto close;
			}
			samples = v;
		}
	}
	if (samples == 0)
		samples = (uint64_t)total_ms * (uint64_t)rate / 1000ULL;
	if (samples == 0) {
		fprintf(stderr, "atc-insert: samples = 0\n");
		goto close;
	}
	printf("метаданные: total_ms=%u rate=%u samples=%llu\n", total_ms,
	       rate, (unsigned long long)samples);

	/* (9j) строки вставки: IRMA_ATC_TITLE/ARTIST/ALBUM/GENRE —
	 * GUI передаёт теги источника (TagLib). Пустые/отсутствующие =
	 * прежние фирменные дефолты (IRM Tone/IRM/IRM Tones/Test). */
	char s_title[256], s_artist[256], s_album[256], s_genre[256];
	const char *title_e = env_san(s_title, sizeof s_title,
				      "IRMA_ATC_TITLE");
	const char *artist_e = env_san(s_artist, sizeof s_artist,
				       "IRMA_ATC_ARTIST");
	const char *album_e = env_san(s_album, sizeof s_album,
				      "IRMA_ATC_ALBUM");
	const char *genre_e = env_san(s_genre, sizeof s_genre,
				      "IRMA_ATC_GENRE");
	if (title_e || artist_e)
		printf("теги источника: title=%s artist=%s album=%s\n",
		       title_e ? title_e : "(нет)",
		       artist_e ? artist_e : "(нет)",
		       album_e ? album_e : "(нет)");

	/* (o3, 9l) плейлист разных треков: TSV-файл от GUI
	 * (IRMA_ATC_PLAYLIST). Задан → per-item мета с строк; env
	 * IRMA_ATC_TITLE/ARTIST/ALBUM/GENRE/ARTWORK/TOTAL_MS/RATE/
	 * SAMPLES игнорируются (прочем полнее), batch_n = строкам
	 * плейлиста (1..499). Одиночный путь IRMA_ATC_FIXTURE
	 * сохраняется без плейлиста (back-compat 9g/9i/9k). */
	{
		const char *pe = getenv("IRMA_ATC_PLAYLIST");
		if (pe && *pe) {
			if (batch_n != 1)
				printf("плейлист: IRMA_ATC_BATCH_N=%u "
				       "игнорируется\n", batch_n);
			pl = atc_playlist_parse(pe, &batch_n);
			if (!pl)
				goto close;
			playlist = 1;
			printf("плейлист: %u трек(ов) в одном конверте "
			       "(env-теги/мета/обложка игнорируются)\n",
			       batch_n);
		}
	}

	/* (p) фикстура (валидный ALAC; берём из env; обязательно). */
	if (!playlist) {
		if (!fixt || !*fixt) {
			fprintf(stderr, "atc-insert: задай IRMA_ATC_FIXTURE="
					"<файл .m4a ALAC> (или "
					"IRMA_ATC_PLAYLIST=<TSV>)\n");
			goto close;
		}
		{
			FILE *f = fopen(fixt, "rb");
			if (!f) {
				fprintf(stderr, "atc-insert: фикстура %s: %s\n", fixt,
					strerror(errno));
				goto close;
			}
			fseek(f, 0, SEEK_END);
			long sz = ftell(f);
			fseek(f, 0, SEEK_SET);
			if (sz <= 0 ||
			    sz > (64L * 1024L * 1024L)) {
				fprintf(stderr, "atc-insert: фикстура %s: размер %ld "
						"нежелателен (1 Б..64 МиБ)\n",
					fixt, sz);
				fclose(f);
				goto close;
			}
			fix = (uint8_t *)malloc((size_t)sz);
			if (!fix || fread(fix, 1, (size_t)sz, f) != (size_t)sz) {
				fprintf(stderr, "atc-insert: фикстура %s: чтение\n",
					fixt);
				fclose(f);
				goto close;
			}
			fclose(f);
			fixn = (size_t)sz;
		}
		printf("fixture: %s (%zu Б)\n", fixt, fixn);
	}

	/* (9k) обложка: env IRMA_ATC_ARTWORK = путь к JPEG/PNG. Сырые
	 * байты уйдут маркером; без env поле artwork_cache_id в декларацию
	 * не пишем (без обложки телефон «удочеряет» случайный старый
	 * artwork — способ отключения не проверен, 9k-эксперимент). */
	uint8_t *art = NULL;
	size_t artn = 0;
	if (playlist) {
		printf("обложка: env IRMA_ATC_ARTWORK игнорируется "
		       "(плейлист — per-item пути)\n");
	} else {
		const char *art_e = getenv("IRMA_ATC_ARTWORK");
		if (art_e && *art_e) {
			FILE *af = fopen(art_e, "rb");
			if (!af) {
				fprintf(stderr, "atc-insert: обложка %s: %s\n",
					art_e, strerror(errno));
				goto close;
			}
			fseek(af, 0, SEEK_END);
			long asz = ftell(af);
			fseek(af, 0, SEEK_SET);
			if (asz <= 0 || asz > (4L * 1024L * 1024L)) {
				fprintf(stderr, "atc-insert: обложка %s: "
						"размер %ld нежелателен "
						"(1 Б..4 МиБ)\n",
					art_e, asz);
				fclose(af);
				goto close;
			}
			art = (uint8_t *)malloc((size_t)asz);
			if (!art || fread(art, 1, (size_t)asz, af) !=
					    (size_t)asz) {
				fprintf(stderr, "atc-insert: обложка %s: "
						"чтение\n",
					art_e);
				fclose(af);
				goto close;
			}
			fclose(af);
			artn = (size_t)asz;
			/* магия: JPEG ffd8ff… / PNG 89 50 4e 47 0d 0a 1a 0a;
			 * прочие форматы телефонам не отсылаем */
			int fjpg = artn >= 3 && art[0] == 0xff &&
				   art[1] == 0xd8 && art[2] == 0xff;
			int fpng = artn >= 8 && art[0] == 0x89 &&
				   art[1] == 0x50 && art[2] == 0x4e &&
				   art[3] == 0x47 && art[4] == 0x0d &&
				   art[5] == 0x0a && art[6] == 0x1a &&
				   art[7] == 0x0a;
			if (!fjpg && !fpng) {
				fprintf(stderr, "atc-insert: обложка %s: "
						"не JPEG и не PNG — "
						"вставка без обложки\n",
					art_e);
				free(art);
				art = NULL;
				artn = 0;
			} else {
				printf("обложка: %s (%zu Б, %s)\n", art_e,
				       artn, fjpg ? "JPEG" : "PNG");
			}
		}
	}

	/* (a) AFC-канал: держим ЖИВЫМ на весь прогон (staging+airlock). */
	if (atc_serve_open(lk, pair, path, device_id, "com.apple.afc", &cfd,
			   &ctl) != 0) {
		fprintf(stderr, "atc-insert: com.apple.afc не открыт\n");
		goto close;
	}
	afc = irm_afc_new(cfd, ctl, 20);
	if (!afc) {
		fprintf(stderr, "atc-insert: irm_afc_new: %s\n",
			irm_afc_error());
		goto close;
	}

	/* (a2) staging ДОЛЖЕН быть пуст (инвариант §8.2). Исключение:
	 * брошенный СТЕЙДЖ НАШЕЙ прошлой aborted-сессии (только наша
	 * пара naming'а: Sync_00000000.plist + .plist.cig) — телефон
	 * потребляет стейдж ТОЛЬКО на FSFM (факт 9f), она не состоялась;
	 * чистим и идём дальше. ЧУЖИЕ файлы = abort как раньше. */
	{
		char **names = NULL;
		size_t nn = 0, nfiles = 0, nown = 0;
		if (irm_afc_dir_list(afc, "/iTunes_Control/Sync/Media",
				     &names, &nn) == 0) {
			for (size_t i = 0; i < nn; i++) {
				if (!strcmp(names[i], ".") ||
				    !strcmp(names[i], "..")) {
					free(names[i]);
					continue;
				}
				if (!strcmp(names[i],
					    "Sync_00000000.plist") ||
				    !strcmp(names[i],
					    "Sync_00000000.plist.cig")) {
					nown++;
					nfiles++;
					printf("  стейдж: брошенный наш "
					       "%s\n",
					       names[i]);
				} else {
					printf("  стейдж не пуст: %s\n",
					       names[i]);
					nfiles++;
				}
				free(names[i]);
			}
			free(names);
			if (nfiles > nown) {
				fprintf(stderr, "atc-insert: staging НЕ ПУСТ "
						"(чужие файлы) — abort до "
						"любых операций\n");
				goto close;
			}
			if (nfiles) {
				irm_afc_remove(afc,
					       "/iTunes_Control/Sync/Media/"
					       "Sync_00000000.plist");
				irm_afc_remove(afc,
					       "/iTunes_Control/Sync/Media/"
					       "Sync_00000000.plist.cig");
				printf("  стейдж: брошенный наш очищен — "
				       "продолжаю\n");
			}
		}
		printf("staging /iTunes_Control/Sync/Media: пуст (ок)\n");
	}

	/* (b) DB-копия → якерь A, db_pid/primary_container_pid, PID-набор. */
	{
		int have_wal = 1;
		uint8_t *a = NULL;
		size_t na = 0;
		if (irm_afc_read_full(afc,
				      "/iTunes_Control/iTunes/"
				      "MediaLibrary.sqlitedb",
				      &a, &na) != 0) {
			fprintf(stderr, "atc-insert: DB: %s\n",
				irm_afc_error());
			goto close;
		}
		if (irm_mkpath(scratch) != 0) {
			fprintf(stderr, "atc-insert: mkdir %s: %s\n", scratch,
				strerror(errno));
			free(a);
			goto close;
		}
		char dbp[640];
		snprintf(dbp, sizeof dbp, "%s/MediaLibrary.sqlitedb",
			 scratch);
		FILE *df = fopen(dbp, "wb");
		if (!df || fwrite(a, 1, na, df) != na) {
			fprintf(stderr, "atc-insert: копия DB: %s\n",
				strerror(errno));
			if (df)
				fclose(df);
			free(a);
			goto close;
		}
		fclose(df);
		free(a);
		uint8_t *w = NULL;
		size_t wn = 0;
		if (irm_afc_read_full(afc,
				      "/iTunes_Control/iTunes/"
				      "MediaLibrary.sqlitedb-wal",
				      &w, &wn) == 0) {
			char wp[680];
			snprintf(wp, sizeof wp, "%s-wal", dbp);
			FILE *wf = fopen(wp, "wb");
			if (wf) {
				fwrite(w, 1, wn, wf);
				fclose(wf);
			} else {
				have_wal = 0;
			}
			free(w);
		} else {
			have_wal = 0;
		}
		printf("DB-копия: %s (%s)\n", dbp,
		       have_wal ? "с -wal" : "без -wal");

		sqlite3 *db = NULL;
		if (sqlite3_open_v2(dbp, &db, SQLITE_OPEN_READWRITE, NULL) !=
		    SQLITE_OK) {
			fprintf(stderr, "atc-insert: sqlite: %s\n",
				db ? sqlite3_errmsg(db) : "нет памяти");
			if (db)
				sqlite3_close(db);
			goto close;
		}
		{
			sqlite3_stmt *st = NULL;
			const char *ic = "?";
			if (sqlite3_prepare_v2(db, "PRAGMA integrity_check",
					       -1, &st, NULL) == SQLITE_OK &&
			    sqlite3_step(st) == SQLITE_ROW)
				ic = (const char *)sqlite3_column_text(st, 0);
			printf("integrity_check: %s\n", ic ? ic : "?");
			sqlite3_finalize(st);
			if (!ic || strcmp(ic, "ok") != 0) {
				fprintf(stderr, "atc-insert: DB-копия битая\n");
				sqlite3_close(db);
				goto close;
			}
		}
		/* db_pid + primary_container_pid (docs/02 §8.4: существующие,
		 * из db_info; НЕ allocate). */
		{
			sqlite3_stmt *st = NULL;
			if (sqlite3_prepare_v2(
				    db,
				    "SELECT db_pid, primary_container_pid "
				    "FROM db_info",
				    -1, &st, NULL) != SQLITE_OK ||
			    sqlite3_step(st) != SQLITE_ROW) {
				fprintf(stderr, "atc-insert: db_info: %s\n",
					st ? sqlite3_errmsg(db) : "?");
				sqlite3_finalize(st);
				sqlite3_close(db);
				goto close;
			}
			db_pid = sqlite3_column_int64(st, 0);
			container = sqlite3_column_int64(st, 1);
			sqlite3_finalize(st);
		}
		if (db_pid == 0 || container == 0) {
			fprintf(stderr, "atc-insert: db_pid=%lld container="
					"%lld — пустая идентичность, СТОП\n",
				(long long)db_pid, (long long)container);
			sqlite3_close(db);
			goto close;
		}
		printf("каталог: db_pid=%lld primary_container_pid=%lld\n",
		       (long long)db_pid, (long long)container);
		/* якерь A (MLSyncClientSyncAnchor) — государственное значение
		 * для RS и FSFM(A+1). */
		{
			sqlite3_stmt *st = NULL;
			if (sqlite3_prepare_v2(
				    db,
				    "SELECT value FROM _MLDatabaseProperties "
				    "WHERE key='MLSyncClientSyncAnchor'",
				    -1, &st, NULL) != SQLITE_OK ||
			    sqlite3_step(st) != SQLITE_ROW) {
				fprintf(stderr, "atc-insert: якерь: %s\n",
					st ? sqlite3_errmsg(db) : "?");
				sqlite3_finalize(st);
				sqlite3_close(db);
				goto close;
			}
			anchor_a =
				(uint32_t)strtoul((const char *)sqlite3_column_text(st, 0),
						  NULL, 10);
			sqlite3_finalize(st);
		}
		if (anchor_a == 0) {
			fprintf(stderr, "atc-insert: якерь A = 0 — СТОП\n");
			sqlite3_close(db);
			goto close;
		}
		const char *ae = getenv("IRMA_ATC_ANCHOR");
		if (ae && *ae) {
			uint32_t env_a =
				(uint32_t)strtoul(ae, NULL, 10);
			if (env_a != anchor_a) {
				fprintf(stderr, "atc-insert: env IRMA_ATC_"
						"ANCHOR=%u != DB якерь %u — "
						"СТОП\n",
					env_a, anchor_a);
				sqlite3_close(db);
				goto close;
			}
		}
		snprintf(anch, sizeof anch, "%u", anchor_a);
		snprintf(anch_next, sizeof anch_next, "%u", anchor_a + 1);
		printf("якерь: A=%u → FSFM A+1=%llu\n", anchor_a,
		       (unsigned long long)(anchor_a + 1));
		taken = atc_collect_pids(db, &takenn);
		printf("PID-набор: %zu значений\n", takenn);
		/* (9k) токены обложек: u32-max каталога + 1, коллизию
		 * сверяем по CAST-равенству (3uTools 678 = max+1 «тем же
		 * алгоритмом» — FINDINGS ~1561) */
		if (playlist) {
			/* 9l: токены только items С обложкой — art_next +
			 * счётчик (без обложечных пропусков). */
			unsigned have = 0;
			for (unsigned i = 0; i < batch_n; i++)
				if (pl[i].art_path[0])
					have++;
			if (have) {
				uint64_t amax = atc_artwork_token_max(db);
				art_next = amax ? (amax + 1) : 481;
				for (int tries = 0; tries < 64 &&
				     atc_artwork_token_taken(db, art_next);
				     tries++)
					art_next++;
				if (art_next + (uint64_t)have >
				    (uint64_t)UINT32_MAX) {
					fprintf(stderr, "atc-insert: u32-"
							"токены обложек "
							"исчерпаны — пакет "
							"без обложек\n");
					for (unsigned i = 0; i < batch_n;
					     i++)
						pl[i].art_path[0] = 0;
				} else {
					uint32_t tk = 0;
					for (unsigned i = 0; i < batch_n;
					     i++)
						if (pl[i].art_path[0])
							pl[i].art_token =
							    (uint32_t)
							    (art_next +
							     tk++);
					printf("artwork-токен: max в "
					       "базе=%llu → новый=%llu "
					       "(%u обложек)\n",
					       (unsigned long long)amax,
					       (unsigned long long)art_next,
					       have);
				}
			}
		} else if (art) {
			uint64_t amax = atc_artwork_token_max(db);
			art_next = amax ? (amax + 1) : 481;
			for (int tries = 0; tries < 64 &&
			     atc_artwork_token_taken(db, art_next);
			     tries++)
				art_next++;
			if (art_next > UINT32_MAX - 1) {
				fprintf(stderr, "atc-insert: u32-токены "
						"обложек исчерпаны — вставка "
						"без обложки\n");
				free(art);
				art = NULL;
				artn = 0;
			} else {
				printf("artwork-токен: max в базе=%llu → "
				       "новый=%llu\n",
				       (unsigned long long)amax,
				       (unsigned long long)art_next);
			}
		}
		sqlite3_close(db);

		/* (c) свежие PIDs: batch_n трековых + 1 альбом + 1 артист;
		 * все попарно различны и без коллизий с каталогом.
		 * 9l (playlist): альбом/артист ПЕР-ITEM (треки разных
		 * альбомов/исполнителей) — ещё 2×batch_n PIDs, попарно
		 * различны и не пересекаются с трековыми. */
		apids = NULL;
		rps = NULL;
		tpids = (uint64_t *)malloc((size_t)batch_n * sizeof *tpids);
		own_ids = (char (*)[24])malloc((size_t)batch_n *
					       sizeof *own_ids);
		titles = (char (*)[80])malloc((size_t)batch_n *
					      sizeof *titles);
		if (playlist) {
			apids = (uint64_t *)malloc((size_t)batch_n *
						   sizeof *apids);
			rps = (uint64_t *)malloc((size_t)batch_n *
						 sizeof *rps);
		}
		if (!tpids || !own_ids || !titles || (playlist && (!apids ||
		    !rps))) {
			fprintf(stderr, "atc-insert: память\n");
			goto close;
		}
		if (atc_pid_fresh(&al, taken, takenn) != 0 ||
		    atc_pid_fresh(&ar, taken, takenn) != 0 || al == ar) {
			fprintf(stderr, "atc-insert: свежие PIDs не вышли\n");
			goto close;
		}
		if (playlist) {
			/* 9l: альбом [0] = al, артист [0] = ar; остальные —
			 * свежие, попарно различны со всем выше. */
			apids[0] = al;
			rps[0] = ar;
			for (unsigned i = 0; i < batch_n; i++) {
				if (i) {
					for (int t = 0; t < 128; t++) {
						if (atc_pid_fresh(&apids[i],
								  taken,
								  takenn) !=
						    0)
							break;
						int ok = apids[i] != ar;
						for (unsigned j = 0;
						     ok && j < i; j++)
							ok = apids[j] !=
							     apids[i];
						if (ok)
							break;
						apids[i] = 0;
					}
					if (apids[i] == 0) {
						fprintf(stderr,
							"atc-insert: свежие "
							"PIDs не вышли "
							"(альбом %u)\n",
							i + 1);
						goto close;
					}
				}
				for (int t = 0; t < 128; t++) {
					if (atc_pid_fresh(&rps[i], taken,
							  takenn) != 0)
						break;
					int ok = apids[i] != rps[i];
					for (unsigned j = 0; ok && j < i;
					     j++)
						ok = rps[j] != rps[i];
					for (unsigned j = 0; ok && j <= i;
					     j++)
						ok = apids[j] != rps[i];
					if (ok)
						break;
					rps[i] = 0;
				}
				if (rps[i] == 0) {
					fprintf(stderr, "atc-insert: свежие "
							"PIDs не вышли "
							"(артист %u)\n",
						i + 1);
					goto close;
				}
			}
		}
		for (unsigned i = 0; i < batch_n; i++) {
			for (int t = 0; t < 128; t++) {
				if (atc_pid_fresh(&tpids[i], taken, takenn) !=
				    0)
					break;
				/* попарная различность внутри пакета
				 * и с альбомом/артистом (audio_batch:
				 * "must be distinct" — ancillary.rs). */
				int ok = (tpids[i] != al && tpids[i] != ar);
				if (playlist) {
					/* 9l: и с пер-итемными альбомами/
					 * артистами (нечётные позиции
					 * выше уже выделены). */
					for (unsigned j = 0; ok && j < batch_n;
					     j++)
						ok = apids[j] != tpids[i] &&
						     rps[j] != tpids[i];
				}
				for (unsigned j = 0; ok && j < i; j++)
					ok = (tpids[j] != tpids[i]);
				if (ok)
					break;
				tpids[i] = 0;
			}
			if (tpids[i] == 0) {
				fprintf(stderr, "atc-insert: свежие PIDs не "
						"вышли (трек %u)\n",
					i + 1);
				goto close;
			}
		}
		if (playlist) {
			printf("PIDs (playlist): album[%u]=%lld artist[%u]=%lld; "
			       "треков %u:",
			       0, (long long)al, 0, (long long)ar, batch_n);
			for (unsigned i = 0; i < batch_n; i++)
				printf(" т%u: %llu (ал %llu, ар %llu)", i + 1,
				       (unsigned long long)tpids[i],
				       (unsigned long long)apids[i],
				       (unsigned long long)rps[i]);
			printf("\n");
		} else {
			printf("PIDs: album=%lld artist=%lld; треков %u:",
			       (long long)al, (long long)ar, batch_n);
			for (unsigned i = 0; i < batch_n; i++)
				printf(" %llu",
				       (unsigned long long)tpids[i]);
			printf("\n");
		}
		for (unsigned i = 0; i < batch_n && !playlist; i++) {
			/* (9j) env-тегам приоритет; пакету добавляем номер
			 * по образцу прежнего «IRM Tone %u» (плейлист не
			 * заполняет — там per-item строки). */
			if (title_e) {
				if (batch_n == 1)
					snprintf(titles[i],
						 sizeof titles[i], "%s",
						 title_e);
				else
					snprintf(titles[i],
						 sizeof titles[i], "%s %u",
						 title_e, i + 1);
			} else if (batch_n == 1) {
				snprintf(titles[i], sizeof titles[i],
					 "IRM Tone");
			} else {
				snprintf(titles[i], sizeof titles[i],
					 "IRM Tone %u", i + 1);
			}
		}

		/* (9k, d0) маркеры обложки: mkdir /Airlock/Media/Artwork
		 * (при отсутствии) + сырой jpeg/png по
		 * /Airlock/Media/Artwork/<item_pid>; потребление — ингест
		 * item после FSFM. Стейдж ПОСЛЕ выделения tpids (прежде
		 * блок стоял до (c) и читал ещё НЕвыделенный массив —
		 * SIGSEGV 05.11) и ДО сборки ops. ТОЛЬКО при живой вставке:
		 * stage-only маркеры на телефон не пишет (обязательство
		 * «записей НЕ делаем»), а ops обложку сохраняет. */
		/* плейлистовый флаг «есть обложки» (после сброса токенов). */
		int pl_haveart = 0;
		for (unsigned i = 0; playlist && i < batch_n; i++)
			if (pl[i].art_token)
				pl_haveart = 1;
		if (stage_only && (art || pl_haveart))
			printf("  artwork-маркеры: только стадия — на "
			       "телефон НЕ пишем\n");
		if (playlist && pl_haveart && !stage_only) {
			char **bn2 = NULL;
			size_t bn2_n = 0;
			int have_artdir =
				irm_afc_dir_list(afc, "/Airlock/Media/Artwork",
						 &bn2, &bn2_n) == 0;
			if (have_artdir) {
				for (size_t i = 0; i < bn2_n; i++)
					free(bn2[i]);
				free(bn2);
				printf("  artwork-каталог: есть\n");
			} else {
				int mrc = irm_afc_mkdir(afc,
							"/Airlock/Media/"
							"Artwork");
				if (mrc != 0) {
					fprintf(stderr, "atc-insert: mkdir "
							"/Airlock/Media/Artwork"
							": %s — вставка БЕЗ "
							"обложек\n",
						irm_afc_error());
					for (unsigned i = 0; i < batch_n;
					     i++) {
						pl[i].art_path[0] = 0;
						pl[i].art_token = 0;
					}
				} else {
					printf("  artwork-каталог: создан\n");
				}
			}
			for (unsigned i = 0; i < batch_n; i++) {
				char amk[96];
				uint8_t *ab = NULL;
				size_t an2 = 0;
				if (!pl[i].art_token)
					continue;
				snprintf(amk, sizeof amk,
					 "/Airlock/Media/Artwork/%llu",
					 (unsigned long long)tpids[i]);
				if (atc_playlist_art(&pl[i], &ab, &an2) !=
				    0) {
					fprintf(stderr, "atc-insert: "
							"обложка item %u не "
							"читается — без "
							"обложки\n", i + 1);
					pl[i].art_path[0] = 0;
					pl[i].art_token = 0;
					continue;
				}
				int wrote = 0;
				for (int attempt = 1; attempt <= 2 &&
				     !wrote; attempt++) {
					if (atc_write_verify(afc, amk, ab,
							     an2) != 0) {
						fprintf(stderr,
							"atc-insert: "
							"маркер %s "
							"(попытка %d): "
							"%s\n",
							amk, attempt,
							irm_afc_error());
						if (attempt == 1) {
							printf("  пауза 1 "
							       "с перед "
							       "повтором"
							       "\n");
							sleep(1);
						}
					} else {
						wrote = 1;
						printf("  маркер %s: %zu "
						       "Б записано "
						       "(read-back ок)\n",
						       amk, an2);
					}
				}
				free(ab);
				if (!wrote) {
					fprintf(stderr, "atc-insert: "
							"обложка item %u не "
							"залита — вставка "
							"БЕЗ обложки\n",
						i + 1);
					pl[i].art_path[0] = 0;
					pl[i].art_token = 0;
				}
			}
		} else if (art && !stage_only) {
			char **bn = NULL;
			size_t bn_n = 0;
			int have_artdir =
				irm_afc_dir_list(afc, "/Airlock/Media/Artwork",
						 &bn, &bn_n) == 0;
			if (have_artdir) {
				for (size_t i = 0; i < bn_n; i++)
					free(bn[i]);
				free(bn);
				printf("  artwork-каталог: есть\n");
			} else {
				int mrc = irm_afc_mkdir(afc,
							"/Airlock/Media/"
							"Artwork");
				if (mrc != 0) {
					fprintf(stderr, "atc-insert: mkdir "
							"/Airlock/Media/Artwork"
							": %s — вставка БЕЗ "
							"обложки\n",
						irm_afc_error());
					free(art);
					art = NULL;
					artn = 0;
					art_next = 0;
				} else {
					printf("  artwork-каталог: создан\n");
				}
			}
			for (unsigned i = 0; i < batch_n && art; i++) {
				char amk[96];
				snprintf(amk, sizeof amk,
					 "/Airlock/Media/Artwork/%llu",
					 (unsigned long long)tpids[i]);
				int wrote = 0;
				for (int attempt = 1; attempt <= 2 &&
				     !wrote; attempt++) {
					if (atc_write_verify(afc, amk, art,
							     artn) != 0) {
						fprintf(stderr,
							"atc-insert: маркер "
							"%s (попытка %d): %s"
							"\n",
							amk, attempt,
							irm_afc_error());
						if (attempt == 1) {
							printf("  пауза 1 с "
							       "перед "
							       "повтором\n");
							sleep(1);
						}
					} else {
						wrote = 1;
						printf("  маркер %s: %zu Б "
						       "записано (read-back "
						       "ок)\n",
						       amk, artn);
					}
				}
				if (!wrote) {
					fprintf(stderr, "atc-insert: "
							"обложка не залита — "
							"вставка БЕЗ обложки "
							"(маркер-функция "
							"того же пути у 3uTools "
							"работала; см. "
							"FINDINGS §9k open)."
							"\n");
					free(art);
					art = NULL;
					artn = 0;
					art_next = 0;
					break;
				}
			}
		}

		/* (d) конверт операций (порядок ключей 1:1 alac.rs):
		 * ОДИН конверт на пакет [update_db_info, insert_track × N],
		 * один revision/timestamp (rustunes insert_batch:
		 * "single operations session"). */
		ops_root = irm_bp_dict();
		if (!ops_root) {
			fprintf(stderr, "atc-insert: конверт: нет памяти\n");
			goto close;
		}
		if (irm_bp_dict_set(ops_root, "revision",
				    irm_bp_uint((uint64_t)anchor_a + 1)) !=
		    0) {
			fprintf(stderr, "atc-insert: revision\n");
			goto close;
		}
		{
			irm_bp_node *arr = irm_bp_array();
			irm_bp_node *ops1 = atc_op_update_db_info(db_pid,
								  container);
			if (!arr || !ops1) {
				/* set/add ниже не звали → владение наше */
				irm_bp_free(ops1);
				irm_bp_free(arr);
				fprintf(stderr, "atc-insert: сборка ops не "
						"удалась\n");
				goto close;
			}
			if (irm_bp_dict_set(ops_root, "operations", arr) !=
			    0) {
				/* set освободил arr сам */
				irm_bp_free(ops1);
				fprintf(stderr, "atc-insert: сборка ops не "
						"удалась\n");
				goto close;
			}
			/* arr с этого момента принадлежит ops_root. */
			if (irm_bp_array_add(arr, ops1) != 0) {
				/* add при неудаче НЕ освобождает val */
				irm_bp_free(ops1);
				fprintf(stderr, "atc-insert: сборка ops не "
						"удалась\n");
				goto close;
			}
			ops1 = NULL; /* arr владеет */
			for (unsigned i = 0; i < batch_n; i++) {
				struct atc_insert_data td;
				memset(&td, 0, sizeof td);
				if (playlist) {
					/* 9l: per-item мета из строк
					 * плейлиста; пустые текстовые —
					 * прежние дефолты. */
					td.title = pl[i].title;
					td.artist = pl[i].artist[0] ?
						    pl[i].artist : "IRM";
					td.album = pl[i].album[0] ?
						   pl[i].album : "IRM Tones";
					td.genre = pl[i].genre[0] ?
						   pl[i].genre : "Test";
					td.track_pid = (int64_t)tpids[i];
					td.total_time_ms = pl[i].total_ms;
					td.samples = pl[i].samples;
					td.sample_rate = pl[i].rate;
					td.number = i + 1;
					td.album_pid = (int64_t)apids[i];
					td.artist_pid = (int64_t)rps[i];
					td.artwork_cache_id = pl[i].art_token;
					/* mp3-пейлоады (06.11): карта
					 * 3uTools — kind MPEG Audio,
					 * 301, фактический битрейт;
					 * album/artist pid = 0, аль-
					 * бом-исполнителем сверяются
					 * строки (телефон подберёт
					 * контейнер сам — повторы
					 * залива не плодят пустых
					 * альбомов) */
					td.mp3 = atc_path_is_mp3(pl[i].path);
					if (td.mp3) {
						td.bit_rate =
							atc_mp3_bitrate(
								pl[i].path,
								pl[i].total_ms);
						td.album_pid = 0;
						td.artist_pid = 0;
						td.album_artist =
							pl[i].artist;
						printf("  карта[%u]: mp3 "
						       "(MPEG Audio/301, "
						       "%u кбит/с, "
						       "album/artist pid 0)\n",
						       i + 1, td.bit_rate);
					}
				} else {
					td.title = titles[i];
					td.artist = artist_e ? artist_e
							     : "IRM";
					td.album = album_e ? album_e
							   : "IRM Tones";
					td.genre = genre_e ? genre_e
							   : "Test";
					td.track_pid = (int64_t)tpids[i];
					td.album_pid = (int64_t)al;
					td.artist_pid = (int64_t)ar;
					td.total_time_ms = total_ms;
					td.samples = samples;
					td.sample_rate = rate;
					td.number = batch_n == 1 ? 1 : i + 1;
					td.artwork_cache_id =
						art ? (art_next + i) : 0;
				}
				irm_bp_node *opi = atc_op_insert_track(&td);
				if (!opi || irm_bp_array_add(arr, opi) != 0) {
					/* add при неудаче НЕ освобождает */
					irm_bp_free(opi);
					fprintf(stderr, "atc-insert: сборка "
							"ops: вставка %u не "
							"вышла\n",
						i + 1);
					goto close;
				}
				/* arr владеет opi */
			}
		}
		/* timestamp = CFDate (сек от 2001-01-01T00:00:00Z). */
		if (irm_bp_dict_set(ops_root, "timestamp",
				    irm_bp_date((double)time(NULL) -
						ATC_EPOCH_2001)) != 0) {
			fprintf(stderr, "atc-insert: timestamp\n");
			goto close;
		}
		if (irm_bp_write(ops_root, &ops_bytes, &ops_n) != 0) {
			fprintf(stderr, "atc-insert: сериализация bplist\n");
			goto close;
		}
		printf("ops-файл: %zu байт (head:", ops_n);
		for (size_t i = 0; i < ops_n && i < 24; i++)
			printf(" %02x", ops_bytes[i]);
		printf("...)\n");
		{
			/* (9k) локальный дамп конверта для разбора
			 * (телефона не касается; env IRMA_ATC_DUMP_OPS) */
			const char *dops = getenv("IRMA_ATC_DUMP_OPS");
			if (dops && *dops) {
				FILE *f = fopen(dops, "wb");
				if (f) {
					size_t w = fwrite(ops_bytes, 1,
							  ops_n, f);
					fclose(f);
					if (w == ops_n)
						printf("ops-дамп: %s (%zu "
						       "байт)\n", dops, ops_n);
					else
						fprintf(stderr,
							"atc-insert: дамп "
							"ops: fwrite %zu/%zu"
							"\n", w, ops_n);
				} else {
					fprintf(stderr, "atc-insert: дамп "
							"ops: %s: %s\n", dops,
						strerror(errno));
				}
			}
		}
	}

	/* (e) ATC: Ping S1 → SyncAllowed → RS S2 (anchor A) → Ready. */
	if (atc_serve_open(lk, pair, path, device_id, svc, &afd, &atl) != 0)
		goto close;
	{
		irm_bp_node *ping = atc_host_msg(1, "Ping", NULL);
		if (!ping || atc_frame_write(afd, atl, ping) != 0) {
			fprintf(stderr, "atc-insert: Ping: %s\n",
				atl ? "tls-ошибка" : strerror(errno));
			irm_bp_free(ping);
			goto close;
		}
		irm_bp_free(ping);
	}
	{
		int ok = 0;
		for (int k = 1; k <= 10 && !ok; k++) {
			uint8_t lb[4];
			if (svc_read_full_t(afd, atl, lb, sizeof lb, 15) != 0)
				break;
			uint32_t len = (uint32_t)lb[0] |
				       ((uint32_t)lb[1] << 8) |
				       ((uint32_t)lb[2] << 16) |
				       ((uint32_t)lb[3] << 24);
			if (len < 8 || len > (8u << 20))
				break;
			uint8_t *body = (uint8_t *)malloc(len);
			if (!body)
				break;
			if (svc_read_full_t(afd, atl, body, len, 15) != 0) {
				free(body);
				break;
			}
			irm_bp_node *d = (memcmp(body, "bplist00", 8) == 0)
						 ? irm_bp_read(body, len)
						 : NULL;
			free(body);
			const char *cmdc = d ? str_of(d, "Command") : NULL;
			printf("  кадр %d: len=%u Command=%s\n", k, len,
			       dash(cmdc));
			if (!d)
				break;
			if (cmdc && strcmp(cmdc, "SyncAllowed") == 0)
				ok = 1;
			else if (cmdc && strcmp(cmdc, "Ping") == 0) {
				const irm_bp_node *sn =
					irm_bp_dict_get(d, "Session");
				uint64_t ses =
					sn ? irm_bp_uint_value(sn) : 1;
				irm_bp_node *pong =
					atc_host_msg(ses, "Pong", NULL);
				if (pong)
					atc_frame_write(afd, atl, pong);
				irm_bp_free(pong);
			}
			irm_bp_free(d);
		}
		if (!ok) {
			fprintf(stderr, "atc-insert: SyncAllowed не пришёл\n");
			goto close;
		}
	}
	/* (e2) RequestingSync: якерь обязателен из DB-копии (anch); env
	 * IRMA_ATC_ANCHOR, если задан, сверен в (b) со значением DB. */
	{
		irm_bp_node *params = atc_build_rs_params(ver, anch);
		if (!params) {
			fprintf(stderr, "atc-insert: Params RS\n");
			goto close;
		}
		irm_bp_node *req = atc_host_msg(2, "RequestingSync", params);
		if (!req || atc_frame_write(afd, atl, req) != 0) {
			fprintf(stderr, "atc-insert: RequestingSync\n");
			irm_bp_free(req);
			goto close;
		}
		irm_bp_free(req);
		printf(" отсылаем RequestingSync (Session=2, якерь %s)\n",
		       anch);
	}
	{
		char ready_anchor[32] = "";
		if (atc_wait_ready(afd, atl, ready_anchor,
				   sizeof ready_anchor, &gr, &grn) != 0) {
			fprintf(stderr, "atc-insert: ReadyForSync не получен\n");
			goto close;
		}
		unsigned long long sA = strtoull(anch, NULL, 10);
		unsigned long long rA = ready_anchor[0]
						? strtoull(ready_anchor,
							   NULL, 10)
						: 0ull;
		printf(" anchor: sent=%llu ready=%llu\n", sA, rA);
		if (ready_anchor[0] == 0 || rA != sA) {
			fprintf(stderr, "atc-insert: якерь Ready != sent — "
					"ABORT БЕЗ FSFM\n");
			goto close;
		}
	}

	/* (f) подпись .cig: grappa из Ready-ответа. */
	if (grn != IRM_GRAPPA_REPLY_LEN || !gr) {
		fprintf(stderr, "atc-insert: GRAPPA-ответ не 83 Б (%zu)\n",
			grn);
		goto close;
	}
	irm_grappa_t *gs = irm_grappa_from_reply(IRM_GRAPPA_HOST_REQUEST,
						 sizeof IRM_GRAPPA_HOST_REQUEST,
						 gr, grn);
	if (!gs) {
		fprintf(stderr, "atc-insert: grappa: %s\n", irm_grappa_error());
		goto close;
	}
	if (irm_grappa_sign(gs, ops_bytes, ops_n, cig) != 0) {
		fprintf(stderr, "atc-insert: подпись: %s\n",
			irm_grappa_error());
		irm_grappa_free(gs);
		goto close;
	}
	irm_grappa_free(gs);
	printf("sidecar .cig: 0x01 + HMAC-SHA1⊕mask (%zu б):", cig_n);
	for (size_t i = 0; i < cig_n; i++)
		printf(" %02x", cig[i]);
	printf("\n");

	if (stage_only) {
		printf("STAGE-ONLY: подпись сверена; записей на телефон НЕ "
		       "делаем, сессию отменяем (close) — телефон потребляет "
		       "файлы ТОЛЬКО на FSFM (§14.3)\n");
		atc_stage_clean(afc, 0);
		rc = 0;
		goto close;
	}

	/* (g) префлайт Airlock (write/rename/read/remove — самоочистка). */
	if (atc_airlock_ready(afc) != 0) {
		fprintf(stderr, "atc-insert: префлайт не прошёл — abort ДО "
				"стейджа (ничего не применено)\n");
		goto close;
	}

	/* (h) стейдж: ops-файл, ЗАТЕМ sidecar (§8.2; не атомарно, у нас
	 * read-back каждую). */
	if (atc_write_verify(afc,
			     "/iTunes_Control/Sync/Media/Sync_00000000.plist",
			     ops_bytes, ops_n) != 0) {
		fprintf(stderr, "atc-insert: стейдж ops: abort (очистка)\n");
		atc_stage_clean(afc, 1);
		goto close;
	}
	if (atc_write_verify(
		    afc,
		    "/iTunes_Control/Sync/Media/Sync_00000000.plist.cig",
		    cig, cig_n) != 0) {
		fprintf(stderr, "atc-insert: стейдж .cig: abort (очистка; "
				"ops-файл удалён — sidecar не писал)\n");
		atc_stage_clean(afc, 1);
		goto close;
	}
	printf("стейдж: Sync_00000000.plist (%zu Б) + .plist.cig (%zu Б) — "
	       "готово; телефон потребляет их ТОЛЬКО на FSFM\n",
	       ops_n, cig_n);

	/* (i) FSFM с анкером A+1 (якерь растёт ТОЛЬКО этой сессией). */
	{
		/* anch_next = anchor+1 (dec) выведен в (b) из DB-копии. */
		irm_bp_node *params = atc_build_fsfm_params(anch_next);
		if (!params) {
			fprintf(stderr, "atc-insert: FSFM Params\n");
			/* (9k) телефон FSFM не получил — маркеры никогда
			 * не потребит, чистим */
			if (art || playlist)
				for (unsigned mi = 0; mi < batch_n; mi++) {
					if (playlist && !pl[mi].art_token)
						continue;
					char amk[96];
					snprintf(amk, sizeof amk,
						 "/Airlock/Media/Artwork/"
						 "%llu",
						 (unsigned long long)
							 tpids[mi]);
					irm_afc_remove(afc, amk);
				}
			goto close;
		}
		irm_bp_node *fsfm = atc_host_msg(2, "FinishedSyncingMetadata",
						 params);
		if (!fsfm || atc_frame_write(afd, atl, fsfm) != 0) {
			fprintf(stderr, "atc-insert: FSFM: %s\n",
				atl ? "tls-ошибка" : strerror(errno));
			irm_bp_free(fsfm);
			/* (9k) телефон FSFM не получил — маркеры никогда
			 * не потребит, чистим */
			if (art || playlist)
				for (unsigned mi = 0; mi < batch_n; mi++) {
					if (playlist && !pl[mi].art_token)
						continue;
					char amk[96];
					snprintf(amk, sizeof amk,
						 "/Airlock/Media/Artwork/"
						 "%llu",
						 (unsigned long long)
							 tpids[mi]);
					irm_afc_remove(afc, amk);
				}
			goto close;
		}
		irm_bp_free(fsfm);
		printf(" отсылаем FinishedSyncingMetadata (Session=2, якерь "
		       "%s)\n",
		       anch_next);
	}

	/* (j) терминал: телеметрия пропускается; AssetManifest → строго
	 * политика (свои ассеты — РОВНО весь пакет — загрузить в ПОРЯДКЕ
	 * МАНИФЕСТА каждый ровно раз + FileComplete; чужие ancillary →
	 * FileError 16 ПОСЛЕ всех FileComplete; иначе СТОП); телефонный
	 * Ping → Pong; SyncFinished (Session=2) = успех. */
	{
		int done = 0, failed = 0, got_manifest = 0;
		for (int k = 1; k <= 512 && !done; k++) {
			uint8_t lb[4];
			if (svc_read_full_t(afd, atl, lb, sizeof lb, 20) !=
			    0) {
				printf(" (тишина %d: телефон думает)\n", k);
				continue;
			}
			uint32_t len = (uint32_t)lb[0] |
				       ((uint32_t)lb[1] << 8) |
				       ((uint32_t)lb[2] << 16) |
				       ((uint32_t)lb[3] << 24);
			if (len < 8 || len > (16u << 20)) {
				printf(" (аномальная длина кадра %u)\n", len);
				failed = 1;
				break;
			}
			uint8_t *body = (uint8_t *)malloc(len);
			if (!body) {
				failed = 1;
				break;
			}
			if (svc_read_full_t(afd, atl, body, len, 20) != 0) {
				free(body);
				failed = 1;
				break;
			}
			irm_bp_node *d = (memcmp(body, "bplist00", 8) == 0)
						 ? irm_bp_read(body, len)
						 : NULL;
			free(body);
			if (!d) {
				printf(" (кадр не plist — стоп)\n");
				failed = 1;
				break;
			}
			const char *cmdc = str_of(d, "Command");
			printf("  кадр %d: len=%u Command=%s\n", k, len,
			       dash(cmdc));
			if (cmdc && strcmp(cmdc, "Ping") == 0) {
				const irm_bp_node *sn =
					irm_bp_dict_get(d, "Session");
				uint64_t ses =
					sn ? irm_bp_uint_value(sn) : 2;
				irm_bp_node *pong =
					atc_host_msg(ses, "Pong", NULL);
				if (pong)
					atc_frame_write(afd, atl, pong);
				irm_bp_free(pong);
				continue;
			}
			if (cmdc &&
			    (strcmp(cmdc, "Progress") == 0 ||
			     strcmp(cmdc, "SyncAllowed") == 0 ||
			     strcmp(cmdc, "AssetMetrics") == 0 ||
			     strcmp(cmdc, "InstalledAssets") == 0)) {
				printf("    телеметрия (игнор)\n");
				irm_bp_free(d);
				continue;
			}
			if (!cmdc) {
				failed = 1;
				irm_bp_free(d);
				break;
			}
			{
				uint8_t *xm = NULL;
				size_t xn = 0;
				if (irm_xml_write(d, &xm, &xn) == 0) {
					printf("  dump:\n");
					fwrite(xm, 1, xn, stdout);
					printf("\n");
					free(xm);
				}
			}
			if (strcmp(cmdc, "SyncFinished") == 0) {
				const irm_bp_node *sn =
					irm_bp_dict_get(d, "Session");
				uint64_t ses =
					sn ? irm_bp_uint_value(sn) : 0ull;
				if (ses != 2) {
					fprintf(stderr, "atc-insert: "
							"SyncFinished в чужой "
							"сессии %llu — СТОП\n",
						(unsigned long long)ses);
					failed = 1;
				} else {
					printf("atc-insert: SYNC FINISHED — "
					       "применено; якерь обязан быть "
					       "A+1 (проверка: irmctl "
					       "music-id)\n");
					done = 1;
					rc = 0;
				}
			} else if (strcmp(cmdc, "SyncFailed") == 0) {
				fprintf(stderr, "atc-insert: SyncFailed — "
						"ErrorCode в dump выше\n");
				failed = 1;
			} else if (strcmp(cmdc, "AssetManifest") == 0) {
				if (got_manifest) {
					fprintf(stderr, "atc-insert: второй "
							"манифест — СТОП\n");
					failed = 1;
				} else {
					free(foreigns);
					foreigns = NULL;
					fgn = 0;
					if (atc_manifest_parse(
						    d, tpids, batch_n,
						    own_ids, &foreigns,
						    &fgn) != 0) {
						fprintf(stderr, "atc-insert: "
								"манифест "
								"отклонён — "
								"СТОП без "
								"отправок\n");
						failed = 1;
					} else {
						got_manifest = 1;
						{
							size_t ba = 0,
							       anc = 0;
							for (size_t i = 0;
							     i < fgn; i++)
								if (foreigns[i]
									    .parts &
								    1u)
									ba++;
								else
									anc++;
							printf("манифест: own (%u),"
							       " в порядке манифеста:",
							       batch_n);
							for (unsigned i = 0;
							     i < batch_n; i++)
								printf(" %s",
								       own_ids[i]);
							printf("; бэклог-аудио=%zu"
							       " ancillary=%zu\n",
							       ba,
							       anc);
						}
						/* Свои ассеты: каждый ровно один раз, в порядке
						 * манифеста (FileComplete можно в любом порядке —
						 * session.rs: "Native completions are not
						 * ordered by manifest position"); ЛЮБАЯ ошибка
						 * upload → НИКАКИХ FileError: отказы строго
						 * после всех FileComplete. */
						for (unsigned i = 0;
						     i < batch_n && !failed;
						     i++) {
							uint64_t pid_i =
							    strtoull(own_ids[i], NULL, 10);
							/* membership-проверка
							 * (не по позиции!):
							 * own_ids в ПОРЯДКЕ
							 * МАНИФЕСТА, tpids — в
							 * порядке генерации;
							 * parse уже сверил
							 * наборы. */
							int hitp = 0;
							unsigned pj = 0;
							for (unsigned j = 0;
							     j < batch_n;
							     j++)
								if (pid_i ==
								    tpids[j]) {
									hitp = 1;
									pj = j;
									break;
								}
							if (!hitp) {
								fprintf(stderr,
									"atc-insert: own "
									"%s не из "
									"пакета — "
									"СТОП\n",
									own_ids[i]);
								failed = 1;
							} else if (playlist) {
								/* 9l: пейлоад
								 * per-item,
								 * ленивая загрузка
								 * (в памяти один
								 * экземпляр за
								 * раз). */
								uint8_t *pay = NULL;
								size_t payn = 0;
								if (atc_playlist_payload(
									    &pl[pj],
									    &pay,
									    &payn) !=
								    0) {
									failed = 1;
								} else {
									printf("  пейлоад[%u]: "
									       "%s (%zu Б)\n",
									       pj + 1,
									       pl[pj].path,
									       payn);
									if (atc_own_asset(
											    afc, afd, atl,
											    (int64_t)pid_i,
											    own_ids[i],
											    atc_path_is_mp3(
												    pl[pj].path)
												    ? "mp3"
												    : "m4a",
											    pay,
											    payn) !=
									    0)
										failed = 1;
									free(pay);
								}
							} else if (atc_own_asset(
									   afc, afd, atl,
									   (int64_t)pid_i,
									   own_ids[i], "m4a",
									   fix,
									   fixn) != 0)
								failed = 1;
						}
						/* БЭКЛОГ-аудио (записи вне
						 * пакета с битом 1): донести
						 * файл и FileComplete —
						 * телефон копит желания, пока
						 * файл не донесён (CONFIRMED
						 * 9g). Файл невалидируем —
						 * метаданные симметричны. */
						for (size_t i = 0;
						     i < fgn && !failed;
						     i++) {
							if (!(foreigns[i].parts &
							      1u))
								continue; /* ancillary ниже */
							uint64_t pid_f =
							    strtoull(
								    foreigns[i].asset_id,
								    NULL,
								    10);
							if (!pid_f) {
								failed = 1;
							} else if (playlist) {
								/* 9l: файл бэклога
								 * невалидируем —
								 * пейлоад pl[0]
								 * (симметрия 9g с
								 * fix). */
								uint8_t *pay = NULL;
								size_t payn = 0;
								if (atc_playlist_payload(
										    &pl[0],
										    &pay,
										    &payn) !=
									    0) {
									failed = 1;
								} else {
									if (atc_own_asset(
											    afc, afd, atl,
											    (int64_t)pid_f,
											    foreigns[i].asset_id,
											    atc_path_is_mp3(
												    pl[0].path)
												    ? "mp3"
												    : "m4a",
											    pay,
											    payn) !=
									    0)
										failed = 1;
									free(pay);
								}
							} else if (atc_own_asset(
									   afc, afd, atl,
									   (int64_t)pid_f,
									   foreigns[i].asset_id,
									   "m4a",
									   fix,
									   fixn) != 0)
								failed = 1;
						}
						/* Отказы ancillary ЗАВЕДОМО
						 * ПОСЛЕ ВСЕХ FileComplete
						 * (пакета и бэклога).
						 * Аудио-бэклог здесь
						 * пропуск (он уже
						 * донесён выше). */
						for (size_t i = 0;
						     i < fgn && !failed;
						     i++) {
							if (foreigns[i].parts &
								    1u)
								continue;
							if (atc_file_error(
								    afd, atl,
								    foreigns[i].asset_id) !=
							    0)
								failed = 1;
						}
					}
				}
			} else {
				fprintf(stderr, "atc-insert: НЕОЖИДАННАЯ "
						"команда \"%s\" — СТОП\n",
					cmdc);
				failed = 1;
			}
			irm_bp_free(d);
		}
		if (!done)
			rc = 1;
		/* собственный ассет не выгрузился → никакие чужие не трогаем */
	}
close:
	/* Владение/память/каналы. На FAIL ДО FSFM стейдж обязателен пуст:
	 * телефон потребляет файлы ТОЛЬКО на FSFM (§14.3) — снимем сами;
	 * после SyncFailed очистка безопасна (успех не считаем). */
	if (rc != 0 && afc && !stage_only)
		atc_stage_clean(afc, 0);
	irm_bp_free(ops_root);
	free(gr);
	free(ops_bytes);
	free(fix);
	free(taken);
	free(tpids);
	free(apids);
	free(rps);
	free(own_ids);
	free(titles);
	free(pl); /* 9l: строки плейлиста (NULL ок) */
	free(foreigns);
	/* cig — стек-буфер, не free. */
	irm_afc_free(afc);
	if (atl)
		irm_tls_disarm(afd);
	if (afd >= 0)
		irm_mux_close(afd);
	if (ctl)
		irm_tls_disarm(cfd);
	if (cfd >= 0)
		irm_mux_close(cfd);
	irm_lk_close(lk);
	irm_pair_free(pair);
	return rc;
}

static int cmd_atc_probe(const char *path, const char *selector)
{
	uint32_t device_id = 0;
	char udid[128] = "-";
	if (find_device(path, selector, &device_id, udid, sizeof udid) != 0)
		return 1;
	printf("device: id=%u udid=%s\n", device_id, udid);

	irm_pair_t *pair = NULL;
	if (irm_pair_load(udid, &pair) != 0) {
		fprintf(stderr, "atc-probe: %s\n", irm_pair_error());
		return 1;
	}
	printf("pair: %s\n  HostID=%s SystemBUID=%s\n", pair->src,
	       pair->host_id, pair->sys_buid);

	irm_lk_t *lk = irm_lk_open(path, device_id, IRM_LK_DEFAULT_PORT, 5);
	if (!lk) {
		fprintf(stderr, "atc-probe: lockdown: %s\n", irm_lk_error());
		irm_pair_free(pair);
		return 1;
	}

	irm_bp_node *qt = irm_lk_query_type(lk);
	printf("checkin Type: %s\n", dash(qt ? str_of(qt, "Type") : NULL));
	irm_bp_free(qt);

	if (irm_lk_start_session(lk, pair) != 0) {
		fprintf(stderr, "atc-probe: session: %s\n", irm_lk_error());
		irm_lk_close(lk);
		irm_pair_free(pair);
		return 1;
	}
	printf("session: TLS поднят на lockconn\n");

	/* GetValue сквозь TLS — проверка обеих сторон канала. */
	irm_bp_node *v = irm_lk_get_value(lk, NULL, "ProductVersion");
	printf("lockdown ProductVersion (через TLS): %s\n",
	       v ? dash(str_of(v, "Value")) : (irm_lk_error()[0] ?
					       irm_lk_error() : "-"));
	irm_bp_free(v);

	probe_service(lk, pair, path, device_id, "com.apple.atc");
	probe_service(lk, pair, path, device_id, "com.apple.atc2");

	irm_lk_close(lk);
	irm_pair_free(pair);
	return 0;
}

static void print_get_value(irm_lk_t *lk, const char *domain, const char *key)
{
	irm_bp_node *resp = irm_lk_get_value(lk, domain, key);
	const irm_bp_node *val = resp ? irm_bp_dict_get(resp, "Value") : NULL;
	const char *err = resp ? irm_lk_error() : NULL;
	size_t n = 0;
	if (val && irm_bp_type_of(val) == IRM_BP_STRING) {
		printf("  %-22s %s\n", key, irm_bp_string_ptr(val, &n));
	} else if (val) {
		printf("  %-22s (%s-узел, u64=%llu)\n", key,
		       irm_bp_type_of(val) == IRM_BP_UINT
			       ? "uint"
			       : "нестроковый",
		       (unsigned long long)irm_bp_uint_value(val));
	} else {
		printf("  %-22s (нет; %s)\n", key,
		       err && *err ? err : "пусто");
	}
	irm_bp_free(resp);
}

static void try_start_service(irm_lk_t *lk, const char *svc)
{
	uint16_t port = 0;
	int ssl = 0;
	if (irm_lk_start_service(lk, svc, &port, &ssl) == 0)
		printf("  %-38s OK port=%u ssl=%d\n", svc, port, ssl);
	else
		printf("  %-38s %s\n", svc, irm_lk_error());
}

static int cmd_info(const char *path, const char *selector)
{
	uint32_t device_id = 0;
	char udid[128] = "-";
	if (find_device(path, selector, &device_id, udid, sizeof udid) != 0)
		return 1;
	printf("device: id=%u udid=%s\n", device_id, udid);

	irm_lk_t *lk = irm_lk_open(path, device_id, IRM_LK_DEFAULT_PORT, 5);
	if (!lk) {
		fprintf(stderr, "irmctl info: lockdown: %s\n", irm_lk_error());
		return 1;
	}
	irm_bp_node *qt = irm_lk_query_type(lk);
	const char *type = qt ? str_of(qt, "Type") : NULL;
	printf("lockdown Type: %s\n", dash(type));
	if (type && strcmp(type, "com.apple.mobile.lockdown") != 0)
		fprintf(stderr, "irmctl info: неожиданный Type=%s\n", type);
	irm_bp_free(qt);

	printf("values:\n");
	print_get_value(lk, NULL, "ProductType");
	print_get_value(lk, NULL, "ProductVersion");
	print_get_value(lk, NULL, "BuildVersion");
	print_get_value(lk, NULL, "ActivationState");
	print_get_value(lk, NULL, "SerialNumber");
	print_get_value(lk, "com.apple.mobile.iTunes", "FireWireGUID");

	printf("services:\n");
	try_start_service(lk, "com.apple.mobile.notification_proxy");
	try_start_service(lk, "com.apple.afc");
	try_start_service(lk, "com.apple.atc");

	irm_lk_close(lk);
	return 0;
}

static void usage(FILE *f)
{
	fprintf(f,
		"irmctl — управление iPhone (libirm)\n"
		"  irmctl [-s SOCKET] list          список устройств\n"
		"  irmctl [-s SOCKET] info [UDID|i] lockdown-инфо + сервисы\n"
		"  irmctl [-s SOCKET] atc-probe     пара→StartSession+TLS→atc/atc2\n"
		"                                   (обследование ATC, шаг 8+)\n"
		"  irmctl [-s SOCKET] atc-talk      клиентская последовательность ATC:\n"
		"                                   HostInfo→Ping (read-only, E12)\n"
		"  irmctl [-s SOCKET] atc-sync [1-17] проба RequestingSync (R1, E12):\n"
		"                                   1=пусто (валидатор), 2=anchors,\n"
		"                                   3=Dataclasses+anchors,\n"
		"                                   4=3+HostInfo, 5=SyncDataClasses,\n"
		"                                   6=SyncDataclasses, 7=+SyncTypes,\n"
		"                                   10=Music, 11=anchors-uint,\n"
		"                                   15=Grappa в HostInfo,\n"
		"                                   16=Grappa-сиблинг,\n"
		"                                   17=якорь 0xFFFFFFFF\n"
		"  irmctl [-s SOCKET] atc-sync: env IRMA_ATC_SERVICE=имя (Q4 atc2),\n"
		"                                    IRMA_ATC_VERSION, IRMA_ATC_SYNCED_DC,\n"
		"                                    IRMA_ATC_SYNCED_TYPES\n"
		"\n"
		"  irmctl [-s SOCKET] syslog [сек]  сырой syslog-поток (R1; на iOS 27 InvalidService)\n"
		"  irmctl [-s SOCKET] atc-handshake read-only рукопожатие (R2, E13):\n"
		"                                   Ping S1 → RS S2 → ReadyForSync;\n"
		"                                   env IRMA_ATC_LIBID/ANCHOR/VERSION/SERVICE\n"
		"  irmctl [-s SOCKET] afc-ls [ПУТЬ]  AFC: devinfo + список каталога\n"
		"                                   (env IRMA_AFC_PATH, E14; read-only)\n"
		"  irmctl [-s SOCKET] afc-stat       AFC: атрибутика пути (E14 §2)\n"
		"  irmctl [-s SOCKET] music-id       frpd-идентичность + якерь Media\n"
		"                                   (E14 §3; read-only; копии DB в scratch)\n"
		"  irmctl [-s SOCKET] atc-delta      ПУСТОЙ Delta-синк (E14 §4, мутационн.\n"
		"                                   шаг): staging-проверка → RS S2 →\n"
		"                                   FSFM пустой → SyncFinished; якерь НЕ\n"
		"                                   растёт; env IRMA_ATC_LIBID/ANCHOR/\n"
		"                                   VERSION/SERVICE\n"
		"  irmctl [-s SOCKET] atc-insert     РЕАЛЬНЫЙ Delta (9f/9g, пакет):\n"
		"                                   grappa-.cig → staging ops+cig →\n"
		"                                   FSFM A+1 → AssetManifest → upload\n"
		"                                   каждого own-ассета (в порядке\n"
		"                                   манифеста) + FileComplete/\n"
		"                                   FileError → SyncFinished; env\n"
		"                                   IRMA_ATC_FIXTURE (обязателен, .m4a\n"
		"                                   ALAC), IRMA_ATC_BATCH_N=1..499\n"
		"                                   (вставок в ОДНОМ конверте; ops ≤4\n"
		"                                   МиБ, якерь A+1 на пакет),\n"
		"                                   IRMA_ATC_STAGE_ONLY=1 (без записей на\n"
		"                                   телефон), env IRMA_ATC_LIBID/ANCHOR/\n"
		"                                   VERSION/SERVICE; IRMA_ATC_DUMP_OPS=\n"
		"                                   путь (локальный дамп ops-конверта,\n"
		"                                   телефон не касается)\n"
		"  irmctl [-s SOCKET] lk-dump [ДОМЕН[/КЛЮЧ]]\n"
		"                                   read-only GetValue доменов lockdown\n"
		"                                   внутри StartSession (LibraryID/синк-домены,\n"
		"                                   гипотеза R1a)\n");
}

int main(int argc, char **argv)
{
	signal(SIGPIPE, SIG_IGN); /* закрытый peer → EPIPE в errno, не смерть */
	const char *path = getenv("IRM_MUX_SOCKET");
	const char *cmd = NULL;
	const char *arg = NULL;
	for (int i = 1; i < argc; i++) {
		if (strcmp(argv[i], "-s") == 0 && i + 1 < argc)
			path = argv[++i];
		else if (!cmd)
			cmd = argv[i];
		else if (!arg)
			arg = argv[i];
		else {
			usage(stderr);
			return 2;
		}
	}
	if (!cmd) {
		usage(stderr);
		return 2;
	}
	if (strcmp(cmd, "list") == 0)
		return cmd_list(path ? path : IRM_MUX_DEFAULT_SOCKET);
	if (strcmp(cmd, "info") == 0)
		return cmd_info(path ? path : IRM_MUX_DEFAULT_SOCKET, arg);
	if (strcmp(cmd, "atc-probe") == 0)
		return cmd_atc_probe(path ? path : IRM_MUX_DEFAULT_SOCKET, arg);
	if (strcmp(cmd, "atc-talk") == 0)
		return cmd_atc_talk(path ? path : IRM_MUX_DEFAULT_SOCKET,
				    arg);
	if (strcmp(cmd, "atc-sync") == 0) {
		int variant = 1;
		if (arg && *arg) {
			char *endp = NULL;
			long v = strtol(arg, &endp, 10);
			if (arg[0] >= '1' && arg[0] <= '9' && endp &&
			    !*endp && v >= 1 && v <= 17)
				variant = (int)v;
			else {
				usage(stderr);
				return 2;
			}
		}
		return cmd_atc_sync(path ? path : IRM_MUX_DEFAULT_SOCKET,
				    NULL, variant);
	}
	if (strcmp(cmd, "syslog") == 0)
		return cmd_syslog(path ? path : IRM_MUX_DEFAULT_SOCKET, NULL,
				  arg);
	if (strcmp(cmd, "lk-dump") == 0)
		return cmd_lkdump(path ? path : IRM_MUX_DEFAULT_SOCKET, arg,
				  NULL);
	if (strcmp(cmd, "atc-handshake") == 0)
		return cmd_atc_handshake(
			path ? path : IRM_MUX_DEFAULT_SOCKET, arg);
	if (strcmp(cmd, "afc-ls") == 0)
		return cmd_afc_ls(path ? path : IRM_MUX_DEFAULT_SOCKET, arg);
	if (strcmp(cmd, "afc-stat") == 0)
		return cmd_afc_stat(path ? path : IRM_MUX_DEFAULT_SOCKET, arg);
	if (strcmp(cmd, "afc-pull") == 0)
		return cmd_afc_pull(path ? path : IRM_MUX_DEFAULT_SOCKET,
				    arg);
	if (strcmp(cmd, "music-id") == 0)
		return cmd_music_id(path ? path : IRM_MUX_DEFAULT_SOCKET, arg);
	if (strcmp(cmd, "atc-delta") == 0)
		return cmd_atc_delta(path ? path : IRM_MUX_DEFAULT_SOCKET, arg);
	if (strcmp(cmd, "atc-insert") == 0)
		return cmd_atc_insert(path ? path : IRM_MUX_DEFAULT_SOCKET,
				      arg);
	usage(stderr);
	return 2;
}
