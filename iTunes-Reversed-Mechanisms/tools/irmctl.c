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
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/time.h>
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
 * (для TLS деталей — irm_tls_error()). */
static int svc_read_full(int fd, int tls, uint8_t *b, size_t n)
{
	if (tls) {
		int rc = irm_tls_read_full(fd, b, n, 12);
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

/* Читает до max кадров [LE32 len][bplist00] из канала сервиса; печатает
 * дампы (XML) каждого dict-кадра; осторожно с мусором — стоп по границам. */
static void atc_read_frames(int fd, int tls, int max)
{
	for (int k = 1; k <= max; k++) {
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
 * Wakeable. Значения — стартовые заглушки пробника (read-only). */
static irm_bp_node *atc_hostinfo_params(void)
{
	irm_bp_node *p = irm_bp_dict();
	if (!p || irm_bp_dict_set(p, "Type", irm_bp_string("iTunes")) != 0 ||
	    irm_bp_dict_set(p, "Version", irm_bp_string("13.5.6.12")) != 0 ||
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
	/* Read-only-пробник: пустые списки dataclass/asset-types, Wakeable=0
	 * (никаких обещаний синка серверу). */
	irm_bp_node *arr = irm_bp_array();
	if (!arr || irm_bp_dict_set(p, "SyncedDataclasses", arr) != 0) {
		irm_bp_free(arr);
		goto fail;
	}
	arr = irm_bp_array();
	if (!arr || irm_bp_dict_set(p, "SyncedAssetTypes", arr) != 0) {
		irm_bp_free(arr);
		goto fail;
	}
	if (irm_bp_dict_set(p, "Wakeable", irm_bp_bool(0)) != 0)
		goto fail;
	return p;
fail:
	irm_bp_free(p);
	return NULL;
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
	if (atc_serve_open(lk, pair, path, device_id, "com.apple.atc",
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
		"                                   HostInfo→Ping (read-only, E12)\n");
}

int main(int argc, char **argv)
{
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
		return cmd_atc_talk(path ? path : IRM_MUX_DEFAULT_SOCKET, arg);
	usage(stderr);
	return 2;
}
