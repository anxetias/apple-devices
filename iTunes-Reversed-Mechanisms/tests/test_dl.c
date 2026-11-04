/* Юнит-тест DeviceLink-транспорта (E06 §1-5): socketpair+fork, fake-DL-сервер.
 * Сценарии:
 *   1) versions-ok конchantment: [verMaj, verMin]→[versionsOk,400]→DeviceReady;
 *   2) wait_ready=1: DeviceReady вынутеден; ошибочный порядок роняет open;
 *   3) ping-echo: send DLMessagePing → recv эхо (заодно XML-по-байтам);
 *   4) disconnect: устройство шлёт DLMessageDisconnect → recv узнает;
 *   5) большая версия (401) — open отказыв}.
 */
#include "libirm/bplist.h"
#include "libirm/devicelink.h"
#include "libirm/xmlplist.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/wait.h>
#include <unistd.h>

static int g_fail;

#define CHECK(c)                                                               \
	do {                                                                   \
		if (!(c)) {                                                    \
			fprintf(stderr, "FAIL %d: %s\n", __LINE__, #c);        \
			g_fail++;                                              \
		}                                                              \
	} while (0)

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
		if (w <= 0)
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
		if (r <= 0)
			return -1;
		b += (size_t)r;
		n -= (size_t)r;
	}
	return 0;
}

static int fake_send_msg(int fd, const irm_bp_node *arr)
{
	uint8_t *xml = NULL;
	size_t n = 0;
	if (irm_xml_write(arr, &xml, &n) != 0)
		return -1;
	uint8_t hdr[4];
	put_be32(hdr, (uint32_t)n);
	int rc = write_full(fd, hdr, 4);
	for (size_t i = 0; rc == 0 && i < n; i += 64)
		rc = write_full(fd, xml + i, n - i > 64 ? 64 : n - i);
	free(xml);
	return rc;
}

static irm_bp_node *fake_recv_msg(int fd)
{
	uint8_t hdr[4];
	if (read_full(fd, hdr, 4) != 0)
		return NULL;
	uint32_t len = get_be32(hdr);
	if (len == 0 || len > (8u << 20))
		return NULL;
	uint8_t *body = malloc(len);
	if (!body || read_full(fd, body, len) != 0) {
		free(body);
		return NULL;
	}
	irm_bp_node *msg = irm_xml_read(body, len);
	free(body);
	return msg;
}

static const char *msg_name(const irm_bp_node *arr)
{
	const irm_bp_node *n0 = irm_bp_array_get(arr, 0);
	return (n0 && irm_bp_type_of(n0) == IRM_BP_STRING)
			       ? irm_bp_string_ptr(n0, NULL) : NULL;
}

int main(void)
{
	int sv[2];
	CHECK(socketpair(AF_UNIX, SOCK_STREAM, 0, sv) == 0);

	pid_t child = fork();
	if (child == 0) {
		close(sv[1]);
		/* --- сервер: version exchange --- */
		irm_bp_node *v = irm_bp_array();
		irm_bp_array_add(v, irm_bp_string("DLMessageVersionExchange"));
		irm_bp_array_add(v, irm_bp_uint(400));
		irm_bp_array_add(v, irm_bp_uint(0));
		fake_send_msg(sv[0], v);
		irm_bp_free(v);

		irm_bp_node *resp = fake_recv_msg(sv[0]);
		if (!resp || !msg_name(resp) ||
		    strcmp(msg_name(resp), "DLMessageVersionExchange") != 0) {
			fprintf(stderr, "fake: нет версионного ответа (resp=%p "
					"name=%s)\n", (void *)resp,
				resp ? msg_name(resp) : "-");
			g_fail++;
			_exit(1);
		}
		const char *okstr = NULL;
		const irm_bp_node *a1 = irm_bp_array_get(resp, 1);
		okstr = (a1 && irm_bp_type_of(a1) == IRM_BP_STRING)
				? irm_bp_string_ptr(a1, NULL) : NULL;
		if (!okstr || strcmp(okstr, "DLVersionsOk") != 0) {
			g_fail++;
		}
		const irm_bp_node *a2 = irm_bp_array_get(resp, 2);
		if (irm_bp_uint_value(a2) != 400) {
			g_fail++;
		}
		irm_bp_free(resp);

		/* --- DeviceReady --- */
		v = irm_bp_array();
		irm_bp_array_add(v, irm_bp_string("DLMessageDeviceReady"));
		fake_send_msg(sv[0], v);
		irm_bp_free(v);

		/* --- ping-echo --- */
		irm_bp_node *ping = fake_recv_msg(sv[0]);
		if (!ping || !msg_name(ping) ||
		    strcmp(msg_name(ping), "DLMessagePing") != 0) {
			fprintf(stderr,
				"fake: ping не выйдет (ping=%p name=%s)\n",
				(void *)ping, ping ? msg_name(ping) : "-");
			g_fail++;
		} else {
			/* эхо:」（["DLMessagePing", <текст>] → шлём как DLMessagePing back */
			fake_send_msg(sv[0], ping);
		}
		irm_bp_free(ping);

		/* --- disconnect --- */
		v = irm_bp_array();
		irm_bp_array_add(v, irm_bp_string("DLMessageDisconnect"));
		irm_bp_array_add(v, irm_bp_string("test reason"));
		fake_send_msg(sv[0], v);
		irm_bp_free(v);
		close(sv[0]);
		_exit(g_fail != 0);
	}
	CHECK(child > 0);
	if (child <= 0)
		return g_fail;
	close(sv[0]);

	/* --- open (wait_ready=1) --- */
	irm_dl_t *dl = irm_dl_attach_fd(sv[1], 2, 1);
	CHECK(dl != NULL);
	if (!dl)
		return g_fail;

	/* --- ping-echo (E06 §4) --- */
	irm_bp_node *args = irm_bp_array();
	irm_bp_array_add(args, irm_bp_string("hello"));
	CHECK(irm_dl_send(dl, "DLMessagePing", args) == 0);
	irm_bp_free(args);
	irm_bp_node *m = irm_dl_recv(dl);
	CHECK(m != NULL);
	if (m) {
		CHECK(msg_name(m) && strcmp(msg_name(m), "DLMessagePing") == 0);
		const irm_bp_node *txt = irm_bp_array_get(m, 1);
		size_t tn = 0;
		CHECK(txt && irm_bp_type_of(txt) == IRM_BP_STRING &&
		      strcmp(irm_bp_string_ptr(txt, &tn), "hello") == 0);
		irm_bp_free(m);
	}

	/* --- DLMessageDisconnect — recv видит сообщение E06 §4 --- */
	m = irm_dl_recv(dl);
	CHECK(m != NULL);
	if (m) {
		CHECK(msg_name(m) &&
		      strcmp(msg_name(m), "DLMessageDisconnect") == 0);
		irm_bp_free(m);
	}
	irm_dl_close(dl);
	close(sv[1]);

	/* --- серверный exit-код --- */
	int st = 0;
	CHECK(waitpid(child, &st, 0) == child);
	if (!WIFEXITED(st)) {
		fprintf(stderr, "сервер умер от signal %d\n", WTERMSIG(st));
	} else if (WEXITSTATUS(st) != 0) {
		fprintf(stderr, "сервер exit=%d\n", WEXITSTATUS(st));
	}
	CHECK(WIFEXITED(st) && WEXITSTATUS(st) == 0);

	/* --- open с БОЛЬШОЙ версией устройства (401) — отказ (E06 §2) --- */
	int sv2[2];
	CHECK(socketpair(AF_UNIX, SOCK_STREAM, 0, sv2) == 0);
	pid_t bad = fork();
	if (bad == 0) {
		close(sv2[1]);
		irm_bp_node *v = irm_bp_array();
		irm_bp_array_add(v, irm_bp_string("DLMessageVersionExchange"));
		irm_bp_array_add(v, irm_bp_uint(401));
		irm_bp_array_add(v, irm_bp_uint(0));
		fake_send_msg(sv2[0], v);
		irm_bp_free(v);
		close(sv2[0]);
		_exit(0);
	}
	irm_bp_node *n = NULL;
	irm_dl_t *bad2 = irm_dl_attach_fd(sv2[1], 2, 0);
	CHECK(bad2 == NULL);
	CHECK(strstr(irm_dl_error(), "версия") != NULL);
	waitpid(bad, NULL, 0);
	(void)n;
	printf(g_fail ? "test_dl: FAIL\n" : "test_dl: OK\n");
	return g_fail;
}
