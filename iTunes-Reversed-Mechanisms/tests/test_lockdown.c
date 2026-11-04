/* Юнит-тест lockdown-клиента (E02 §2-4). Фейковый lockdownd на socketpair:
 *   сервер читает [BE32 len][bplist00], парсит СВОИМ (irm_bp_read) reader-ом,
 *   проверяет envelope {"Request","ProtocolVersion":"2","Label"} и раздаёт
 *   сценарии. Проверки байтов не ограничиваются API-ответами. Без сети. */
#include "libirm/bplist.h"
#include "libirm/lockdown.h"

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

/* Прислать ответ: [BE32][payload]. payload конвертится из узла/NULL. */
static void fake_reply(int cfd, const irm_bp_node *dict)
{
	uint8_t *body = NULL;
	size_t blen = 0;
	uint8_t hdr[4];
	if (irm_bp_write(dict, &body, &blen) != 0) {
		fprintf(stderr, "fake: write failed\n");
		g_fail++;
		return;
	}
	put_be32(hdr, (uint32_t)blen);
	if (write_full(cfd, hdr, 4) != 0 || write_full(cfd, body, blen) != 0) {
		fprintf(stderr, "fake: send failed\n");
		g_fail++;
	}
	free(body);
}

/* Строгая проверка запроса и диспетчер сценариев. */
static int fake_dispatch(int cfd, const irm_bp_node *req)
{
	size_t n = 0;
	const char *reqname = NULL, *ver = NULL, *label = NULL;
	const irm_bp_node *v;

	v = irm_bp_dict_get(req, "Request");
	CHECK(v && irm_bp_type_of(v) == IRM_BP_STRING);
	reqname = v ? irm_bp_string_ptr(v, &n) : NULL;

	v = irm_bp_dict_get(req, "ProtocolVersion");
	CHECK(v && irm_bp_type_of(v) == IRM_BP_STRING);
	ver = v ? irm_bp_string_ptr(v, &n) : NULL;
	CHECK(ver && strcmp(ver, "2") == 0); /* E02 §2: строка "2"! */

	v = irm_bp_dict_get(req, "Label");
	CHECK(v && irm_bp_type_of(v) == IRM_BP_STRING);
	label = v ? irm_bp_string_ptr(v, &n) : NULL;
	CHECK(label && n > 0); /* 0x10f2d2: Label = progname (непустой) */

	fprintf(stderr, "fake: request=\"%s\" ver=%s label=%s\n",
		reqname ? reqname : "?", ver ? ver : "-", label ? label : "-");

	if (reqname && strcmp(reqname, "QueryType") == 0) {
		irm_bp_node *r = irm_bp_dict();
		irm_bp_dict_set(r, "Type", irm_bp_string("com.apple.mobile.lockdown"));
		fake_reply(cfd, r);
		irm_bp_free(r);
		return 0;
	}
	if (reqname && strcmp(reqname, "GetValue") == 0) {
		v = irm_bp_dict_get(req, "Key");
		const char *key =
			(v && irm_bp_type_of(v) == IRM_BP_STRING)
				? irm_bp_string_ptr(v, &n) : NULL;
		if (key && strcmp(key, "ProductType") == 0) {
			irm_bp_node *r = irm_bp_dict();
			irm_bp_dict_set(r, "Value", irm_bp_string("iPhone17,3"));
			fake_reply(cfd, r);
			irm_bp_free(r);
			return 0;
		}
		if (key && strcmp(key, "Nope") == 0) {
			irm_bp_node *r = irm_bp_dict();
			irm_bp_dict_set(r, "Error",
					irm_bp_string("MissingKey or wrong Value"));
			fake_reply(cfd, r);
			irm_bp_free(r);
			return 0;
		}
		/* спокойный пустой ответ (нет ни Value, ни Error) */
		irm_bp_node *r = irm_bp_dict();
		fake_reply(cfd, r);
		irm_bp_free(r);
		return 0;
	}
	if (reqname && strcmp(reqname, "StartService") == 0) {
		v = irm_bp_dict_get(req, "Service");
		const char *svc =
			(v && irm_bp_type_of(v) == IRM_BP_STRING)
				? irm_bp_string_ptr(v, &n) : NULL;
		irm_bp_node *r = irm_bp_dict();
		if (svc && strcmp(svc, "com.apple.afc") == 0) {
			irm_bp_dict_set(r, "Port", irm_bp_uint(0xF27E));
			irm_bp_dict_set(r, "EnableServiceSSL", irm_bp_bool(1));
		} else if (svc && strcmp(svc, "com.apple.atc") == 0) {
			irm_bp_dict_set(r, "Error",
					irm_bp_string("not authorized"));
		} else {
			irm_bp_dict_set(r, "Error", irm_bp_string("nope"));
		}
		fake_reply(cfd, r);
		irm_bp_free(r);
		return 0;
	}
	if (reqname && strcmp(reqname, "Broken") == 0) {
		/* сырой мусорный payload (не bplist00) */
		uint8_t junk[4] = { 0xDE, 0xAD, 0xBE, 0xEF };
		uint8_t hdr[4];
		put_be32(hdr, (uint32_t)sizeof junk);
		if (write_full(cfd, hdr, 4) != 0 ||
		    write_full(cfd, junk, sizeof junk) != 0) {
			fprintf(stderr, "fake: junk send failed\n");
			g_fail++;
		}
		return 0;
	}
	/* по умолчанию: Error-ответ */
	irm_bp_node *r = irm_bp_dict();
	irm_bp_dict_set(r, "Error", irm_bp_string("bad request"));
	fake_reply(cfd, r);
	irm_bp_free(r);
	return 0;
}

int main(void)
{
	int sv[2];
	CHECK(socketpair(AF_UNIX, SOCK_STREAM, 0, sv) == 0);

	/* «lockdownd» живёт в child (клиент в recv не может обслужить его
	 * сам — иначе deadlock). Child возвращает свой g_fail. */
	pid_t child = fork();
	if (child == 0) {
		/* --- server loop --- */
		close(sv[1]);
		for (;;) {
			uint8_t hdr[4];
			if (read_full(sv[0], hdr, 4) != 0)
				break; /* клиент ушёл — конец */
			uint32_t len = get_be32(hdr);
			CHECK(len > 0 && len <= 0x40000);
			uint8_t *body = malloc(len);
			if (!body)
				break;
			if (read_full(sv[0], body, len) != 0) {
				free(body);
				break;
			}
			CHECK(memcmp(body, "bplist00", 8) == 0);
			irm_bp_node *req = irm_bp_read(body, len);
			free(body);
			if (!req)
				break;
			irm_bp_node *rq = irm_bp_dict_get(req, "Request");
			size_t rqn = 0;
			const char *rqs =
				(rq && irm_bp_type_of(rq) == IRM_BP_STRING)
					? irm_bp_string_ptr(rq, &rqn) : "";
			int stop = strcmp(rqs, "Broken") == 0;
			fake_dispatch(sv[0], req);
			irm_bp_free(req);
			if (stop)
				break; /* после Broken закрываем поток: EOF */
		}
		close(sv[0]);
		_exit(g_fail != 0);
	}
	CHECK(child > 0);
	if (child <= 0)
		return g_fail;
	close(sv[0]);

	/* --- клиент --- */
	irm_lk_t *lk = irm_lk_attach_fd(sv[1], 2);
	CHECK(lk != NULL);
	if (!lk)
		return g_fail;
	irm_lk_set_label(lk, "test_lockdown");

	/* --- QueryType (E02 §3, 0x10f18c) --- */
	irm_bp_node *qt = irm_lk_query_type(lk);
	CHECK(qt != NULL);
	if (qt) {
		irm_bp_node *t = irm_bp_dict_get(qt, "Type");
		size_t n = 0;
		CHECK(t && irm_bp_type_of(t) == IRM_BP_STRING &&
		      strcmp(irm_bp_string_ptr(t, &n),
			     "com.apple.mobile.lockdown") == 0);
		irm_bp_free(qt);
	}

	/* --- GetValue ok --- */
	irm_bp_node *gv = irm_lk_get_value(lk, NULL, "ProductType");
	CHECK(gv != NULL);
	if (gv) {
		irm_bp_node *val = irm_bp_dict_get(gv, "Value");
		size_t n = 0;
		CHECK(val && irm_bp_type_of(val) == IRM_BP_STRING &&
		      strcmp(irm_bp_string_ptr(val, &n), "iPhone17,3") == 0);
		CHECK(irm_lk_error()[0] == 0);
		irm_bp_free(gv);
	}

	/* --- GetValue с ошибкой от устройства --- */
	gv = irm_lk_get_value(lk, NULL, "Nope");
	CHECK(gv != NULL);
	if (gv) {
		irm_bp_node *e = irm_bp_dict_get(gv, "Error");
		CHECK(e != NULL);
		CHECK(strstr(irm_lk_error(), "MissingKey") != NULL);
		irm_bp_free(gv);
	}

	/* --- StartService: ok-сценарий (afc, SSL) --- */
	uint16_t port = 0;
	int ssl = 0;
	CHECK(irm_lk_start_service(lk, "com.apple.afc", &port, &ssl) == 0);
	CHECK(port == 0xF27E);
	CHECK(ssl == 1);

	/* --- StartService: устройство отказывает --- */
	CHECK(irm_lk_start_service(lk, "com.apple.atc", &port, &ssl) != 0);
	CHECK(strstr(irm_lk_error(), "not authorized") != NULL);

	/* --- Мусорный payload (сервер отдаёт junk и закрывает поток) --- */
	irm_bp_node *reqb = NULL;
	CHECK(irm_lk_make_request(lk, "Broken", &reqb) == 0);
	CHECK(irm_lk_send(lk, reqb) == 0);
	irm_bp_free(reqb);
	irm_bp_node *r = irm_lk_recv(lk);
	CHECK(r == NULL);
	CHECK(irm_lk_error()[0] != 0);

	/* --- EOF после закрытия сервера → kAMDReadError --- */
	CHECK(irm_lk_recv(lk) == NULL);
	CHECK(strstr(irm_lk_error(), "EOF") != NULL);

	irm_lk_close(lk);
	close(sv[1]);

	/* exit-код child = счетчик серверных проверок; 0 = сервер чист */
	int st = 0;
	CHECK(waitpid(child, &st, 0) == child);
	CHECK(WIFEXITED(st) && WEXITSTATUS(st) == 0);

	printf(g_fail ? "test_lockdown: FAIL\n" : "test_lockdown: OK\n");
	return g_fail;
}
