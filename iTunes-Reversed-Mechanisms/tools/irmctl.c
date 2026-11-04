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
#include "libirm/xmlplist.h"

#include <errno.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
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
 * Возврат: сколько dict-кадров прочитано; *stop (м不为 NULL): 0 = max
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
			       : "нестрокowy",
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
	usage(stderr);
	return 2;
}
