/* libirm/src/pairing.c — загрузка пейр-рекорда (XML plist по путям
 * libimobiledevice). Никаких сторонних зависимостей: POSIX + irm xml/bplist. */
#include "libirm/pairing.h"
#include "libirm/bplist.h"
#include "libirm/xmlplist.h"

#include <errno.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

static char g_pair_err[192] = "";

static void set_err(const char *fmt, ...)
{
	va_list ap;
	va_start(ap, fmt);
	vsnprintf(g_pair_err, sizeof g_pair_err, fmt, ap);
	va_end(ap);
}

const char *irm_pair_error(void)
{
	return g_pair_err;
}

void irm_pair_free(irm_pair_t *p)
{
	if (!p)
		return;
	free(p->host_cert);
	free(p->host_key);
	free(p->device_cert);
	free(p->root_cert);
	free(p->root_key);
	free(p);
}

static int get_str(const irm_bp_node *d, const char *key, char *out, size_t n)
{
	const irm_bp_node *v = irm_bp_dict_get(d, key);
	size_t len = 0;
	if (!v || (irm_bp_type_of(v) != IRM_BP_STRING))
		return -1;
	const char *s = irm_bp_string_ptr(v, &len);
	if (!s || len >= n)
		return -1;
	memcpy(out, s, len);
	out[len] = 0;
	return 0;
}

/* Достать PEM-блобы (в XML рекорде сертификаты — <data>; ридер уже
 * раскодировал base64, итоговых байтах PEM-текст). */
static int get_pem(const irm_bp_node *d, const char *key,
		   uint8_t **data_out, size_t *len_out)
{
	const irm_bp_node *v = irm_bp_dict_get(d, key);
	size_t len = 0;
	if (!v)
		return -1; /* поле может отсутствовать — не фатально */
	const void *s;
	if (irm_bp_type_of(v) == IRM_BP_DATA)
		s = irm_bp_data_ptr(v, &len);
	else if (irm_bp_type_of(v) == IRM_BP_STRING)
		s = irm_bp_string_ptr(v, &len);
	else
		return -1;
	if (!s || !len)
		return -1;
	*data_out = (uint8_t *)malloc(len + 1);
	if (!*data_out)
		return -1;
	memcpy(*data_out, s, len);
	(*data_out)[len] = 0;
	*len_out = len;
	return 0;
}

int irm_pair_load(const char *udid, irm_pair_t **out)
{
	*out = NULL;
	if (!udid || !*udid) {
		set_err("%s", "pair: пустой UDID");
		return -1;
	}

	/* Кандидаты: системный usbmuxd-рекорд, потом кэш пользователя. */
	char path[512], path2[512];
	snprintf(path, sizeof path, "/var/lib/lockdown/%s.plist", udid);
	const char *xdg = getenv("XDG_CACHE_HOME");
	const char *home = getenv("HOME");
	if (xdg && *xdg)
		snprintf(path2, sizeof path2, "%s/libimobiledevice/%s.plist",
			 xdg, udid);
	else if (home && *home)
		snprintf(path2, sizeof path2,
			 "%s/.cache/libimobiledevice/%s.plist", home, udid);
	else
		path2[0] = 0;
	const char *list[2] = { path, path2 };

	g_pair_err[0] = 0;
	FILE *f = NULL;
	const char *usep = NULL;
	for (int i = 0; i < 2 && !f; i++) {
		const char *p = list[i];
		if (!p || !*p)
			continue;
		struct stat st;
		if (stat(p, &st) != 0 || !S_ISREG(st.st_mode) || st.st_size <= 0)
			continue;
		f = fopen(p, "rb");
		if (f)
			usep = p;
	}
	if (!f) {
		set_err("pair: рекорд не найден (смотрели /var/lib/lockdown и ~/.cache)");
		return -1;
	}
	fseek(f, 0, SEEK_END);
	long n = ftell(f);
	fseek(f, 0, SEEK_SET);
	if (n <= 0 || n > 1024 * 1024) {
		fclose(f);
		set_err("pair: рекорд подозрительного размера");
		return -1;
	}
	uint8_t *buf = (uint8_t *)malloc((size_t)n + 1);
	if (!buf) {
		fclose(f);
		set_err("%s", "oom");
		return -1;
	}
	if (fread(buf, 1, (size_t)n, f) != (size_t)n) {
		free(buf);
		fclose(f);
		set_err("pair: чтение рекорда сорвалось: %s", strerror(errno));
		return -1;
	}
	fclose(f);
	buf[n] = 0;

	irm_bp_node *root = (buf[0] == 'b') ? irm_bp_read(buf, (size_t)n) :
					     irm_xml_read(buf, (size_t)n);
	free(buf);
	if (!root) {
		set_err("pair: рекорд не разобран");
		return -1;
	}

	irm_pair_t *p = (irm_pair_t *)calloc(1, sizeof *p);
	if (!p) {
		irm_bp_free(root);
		set_err("%s", "oom");
		return -1;
	}
	int rc = 0;
	rc |= get_str(root, "HostID", p->host_id, sizeof p->host_id);
	rc |= get_str(root, "SystemBUID", p->sys_buid, sizeof p->sys_buid);
	/* отсутствие части сертификатов — не фатально: у разных рекордов
	 * разный набор (лицензии Apple vs libimobiledevice). */
	get_pem(root, "HostCertificate", &p->host_cert, &p->host_cert_n);
	get_pem(root, "HostPrivateKey", &p->host_key, &p->host_key_n);
	get_pem(root, "DeviceCertificate", &p->device_cert, &p->device_cert_n);
	get_pem(root, "RootCertificate", &p->root_cert, &p->root_cert_n);
	get_pem(root, "RootPrivateKey", &p->root_key, &p->root_key_n);
	irm_bp_free(root);
	snprintf(p->src, sizeof p->src, "%s", usep);
	if (rc != 0 || !p->host_id[0] || !p->host_cert || !p->host_key) {
		set_err("pair: неполный рекорд в %s (HostID/HostCertificate/"
			"HostPrivateKey обязательны)",
			p->src);
		irm_pair_free(p);
		return -1;
	}
	*out = p;
	return 0;
}
