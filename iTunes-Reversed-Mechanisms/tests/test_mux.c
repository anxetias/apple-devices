/* Дымовой тест против РЕАЛЬНОГО демона usbmuxd (E01b §1-4):
 *   ./test_mux [SOCKET]
 * open → ListDevices → recv. Без подключённых устройств DeviceList == []
 * — это успех ПРОТОКОЛА (демон жив, кадр раскодирован, тег эхом).
 * Ожидания: ответ dict; либо {DeviceList:[...]}, либо {MessageType:"Result",
 * Number:0}. Иные коды Result и конструкции — отчёт + FAIL.
 */
#include "libirm/bplist.h"
#include "libirm/mux.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int g_fail;

#define CHECK(c)                                                               \
	do {                                                                   \
		if (!(c)) {                                                    \
			fprintf(stderr, "FAIL %d: %s\n", __LINE__, #c);        \
			g_fail++;                                              \
		}                                                              \
	} while (0)

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

static void print_device(size_t i, const irm_bp_node *d)
{
	if (!d || irm_bp_type_of(d) != IRM_BP_DICT)
		return;
	printf("  [%zu] DeviceID=%llu Type=%s UDID=%s Serial=%s\n", i,
	       (unsigned long long)uint_of(d, "DeviceID"),
	       dash(str_of(d, "ConnectionType")),
	       dash(str_of(d, "UDID")), dash(str_of(d, "SerialNumber")));
}

static void print_devices_from(const irm_bp_node *dl)
{
	if (!dl || irm_bp_type_of(dl) != IRM_BP_ARRAY)
		return;
	size_t n = irm_bp_array_len(dl);
	printf("DeviceList: %zu\n", n);
	for (size_t i = 0; i < n; i++)
		print_device(i, irm_bp_array_get(dl, i));
}

int main(int argc, char **argv)
{
	const char *path = argc > 1 ? argv[1] : getenv("IRM_MUX_SOCKET");
	if (!path)
		path = IRM_MUX_DEFAULT_SOCKET;

	int fd = irm_mux_open(path, 5);
	CHECK(fd >= 0);
	if (fd < 0) {
		fprintf(stderr, "open %s: %s\n", path, irm_mux_error());
		return g_fail;
	}
	printf("mux %s: connected (fd %d)\n", path, fd);

	irm_bp_node *msg = irm_bp_dict();
	CHECK(msg != NULL);
	CHECK(irm_bp_dict_set(msg, "MessageType", irm_bp_string("ListDevices")) == 0);
	uint32_t tag = irm_mux_tag_next();
	CHECK(irm_mux_send(fd, tag, msg) == 0);

	uint32_t rtag = 0;
	irm_bp_node *resp = irm_mux_recv(fd, &rtag);
	CHECK(resp != NULL);
	if (resp) {
		CHECK(irm_bp_type_of(resp) == IRM_BP_DICT);
		CHECK(rtag == tag); /* эхо тега (E01b §1) */
		printf("recv: tag=%u (запрос %u)\n", rtag, rtag == tag ? tag : rtag);
		const irm_bp_node *dl = irm_bp_dict_get(resp, "DeviceList");
		if (dl) {
			print_devices_from(dl);
		} else {
			const char *mt = str_of(resp, "MessageType");
			printf("MessageType=%s Number=%llu\n",
			       dash(mt), (unsigned long long)uint_of(resp, "Number"));
			CHECK(mt && strcmp(mt, "Result") == 0);
			CHECK(uint_of(resp, "Number") == 0);
		}
		irm_bp_free(resp);
	}

	irm_bp_free(msg);
	irm_mux_close(fd);
	printf(g_fail ? "test_mux: FAIL\n" : "test_mux: OK\n");
	return g_fail;
}
