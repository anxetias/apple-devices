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

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
			const irm_bp_node *p =
				irm_bp_dict_get(d, "Properties");
			*device_id_out = (uint32_t)uint_of(d, "DeviceID");
			const char *u = p ? str_of(p, "UDID") : NULL;
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
		"  irmctl [-s SOCKET] info [UDID|i] lockdown-инфо + сервисы\n");
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
	usage(stderr);
	return 2;
}
