/* libirm — AFC-клиент: пакетный слой CFA6LPAA (см. libirm/afc.h — шапка
 * модуля с полными wire-фактами E14). Транспорт — готовый туннель; TLS
 * (если сервис требует) поднимается снаружи, экземпляру передаётся флаг.
 * Модель обмена = «запрос → ОДИН ответ-пакт» (Status или Data), как у
 * рабочей Rust-реализации idevice 0.1.68 (rustunes, iPhone17,2/iOS 27.0.1). */
#include "libirm/afc.h"
#include "libirm/tls.h"

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/time.h>
#include <unistd.h>

static char g_err[192] = "";

static void aerr(const char *msg)
{
	snprintf(g_err, sizeof g_err, "%s", msg);
}

const char *irm_afc_error(void)
{
	return g_err[0] ? g_err : "ok";
}

/* AFC-коды (0..36) — перевод рода «имя-на-русском» не нужен: те же имена,
 * что в описании ошибок в idevice 0.1.68 errors.rs (E14 §1, таблица). */
const char *irm_afc_status_name(unsigned code)
{
	switch (code) {
	case 0:  return "Success";
	case 1:  return "Unknown error";
	case 2:  return "Operation header invalid";
	case 3:  return "No resources";
	case 4:  return "Read error";
	case 5:  return "Write error";
	case 6:  return "Unknown packet type";
	case 7:  return "Invalid argument";
	case 8:  return "Object not found";
	case 9:  return "Object is dir";
	case 10: return "Permission denied";
	case 11: return "Service not connected";
	case 12: return "Operation timeout";
	case 13: return "Too much data";
	case 14: return "End of data";
	case 15: return "Operation not supported";
	case 16: return "Object exists";
	case 17: return "Object busy";
	case 18: return "No space left";
	case 19: return "Operation would block";
	case 20: return "I/O error";
	case 21: return "Operation interrupted";
	case 22: return "Operation in progress";
	case 23: return "Internal error";
	case 30: return "Mux error";
	case 31: return "No mem";
	case 32: return "Not enough data";
	case 33: return "Dir not empty";
	case 34: return "Unknown opcode";
	case 35: return "Invalid magic";
	case 36: return "Missing attribute";
	default: return "unknown AFC code";
	}
}

struct irm_afc {
	int fd;
	int tls;
	/* Счётчик packet_num (не сбрасывается; проверка телефон-сервера
	 * бывает строгой к дубликатам, инкремент — на каждый пакет). */
	uint64_t packet_num;
};

irm_afc_t *irm_afc_new(int fd, int tls, int timeout_sec)
{
	irm_afc_t *a = (irm_afc_t *)calloc(1, sizeof(*a));
	if (!a) {
		aerr("no memory");
		return NULL;
	}
	a->fd = fd;
	a->tls = tls;
	if (!tls && timeout_sec > 0) {
		struct timeval tv;
		tv.tv_sec = timeout_sec;
		tv.tv_usec = 0;
		if (setsockopt(fd, SOL_SOCKET, SO_RCVTIMEO, &tv,
			       sizeof tv) != 0) {
			free(a);
			aerr("setsockopt SO_RCVTIMEO");
			return NULL;
		}
	}
	return a;
}

void irm_afc_free(irm_afc_t *a)
{
	/* fd НЕ наш — не закрываем. */
	free(a);
}

static int raw_read_full(int fd, uint8_t *b, size_t n)
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

static int raw_write_full(int fd, const uint8_t *b, size_t n)
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

/* доставка точного объёма по выбранному транспорту: 0 — ок, -1 — ошибка. */
static int afc_read_exact(const irm_afc_t *a, uint8_t *b, size_t n)
{
	if (a->tls)
		return irm_tls_read_full(a->fd, b, n, 15) == 0 ? 0 : -1;
	int rc = raw_read_full(a->fd, b, n);
	if (rc == 0)
		return 0;
	aerr(rc == -2 ? "AFC: таймаут чтения" : "AFC: EOF/ошибка чтения");
	return -1;
}

static int afc_write_exact(const irm_afc_t *a, const uint8_t *b, size_t n)
{
	if (a->tls)
		return irm_tls_write_full(a->fd, b, n) == 0 ? 0 : -1;
	if (raw_write_full(a->fd, b, n) == 0)
		return 0;
	aerr("AFC: ошибка записи");
	return -1;
}

static void put_le64(uint8_t *p, uint64_t v)
{
	for (int i = 0; i < 8; i++)
		p[i] = (uint8_t)((v >> (8 * i)) & 0xFF);
}

static uint64_t get_le64(const uint8_t *p)
{
	uint64_t v = 0;
	for (int i = 7; i >= 0; i--)
		v = (v << 8) | p[i];
	return v;
}

/* Описатель ответа. status = 1, когда пришёл Status (code валиден);
 * op — opcode ответа (0x0001/0x0002/0x000e...); hp/pl — header_payload
 * и payload (владение у вызывающего после afc_exchange). */
typedef struct {
	int status;     /* 1 = Status-пакет (code); 0 = Data/прочее */
	uint64_t op;    /* opcode ответа (0x0001/0x0002/0x000e...) */
	uint64_t code;  /* только при Status */
	uint8_t *hp;    /* header_payload (без 40-байтового заголовка) */
	size_t hn;
	uint8_t *pl;    /* payload */
	size_t pn;
} afc_reply;

/* Отправить пакет (op; header_payload hp/hn; payload pl/pn) и получить ОДИН
 * ответ-пакт. 0 — ок (reply наполнен), -1 — транспорт/структура (error set). */
static int afc_exchange(irm_afc_t *a, uint64_t op, const uint8_t *hp,
			size_t hn, const uint8_t *pl, size_t pn,
			afc_reply *r)
{
	if (40 + hn > IRM_AFC_MAX_PACKET ||
	    pn > IRM_AFC_MAX_PACKET ||
	    40 + hn + pn > IRM_AFC_MAX_PACKET) {
		aerr("AFC: пакет выходит за границу 16 МиБ");
		return -1;
	}
	size_t total = 40 + hn + pn;
	uint8_t *buf = (uint8_t *)malloc(total);
	if (!buf) {
		aerr("AFC: нет памяти под пакет");
		return -1;
	}
	put_le64(buf + 0, IRM_AFC_MAGIC);
	put_le64(buf + 8, (uint64_t)total);
	put_le64(buf + 16, (uint64_t)(40 + hn));
	put_le64(buf + 24, a->packet_num);
	put_le64(buf + 32, op);
	a->packet_num++;
	if (hn)
		memcpy(buf + 40, hp, hn);
	if (pn)
		memcpy(buf + 40 + hn, pl, pn);
	int rc = afc_write_exact(a, buf, total);
	free(buf);
	if (rc != 0)
		return -1;

	uint8_t hdr[IRM_AFC_HDR_LEN];
	if (afc_read_exact(a, hdr, sizeof hdr) != 0)
		return -1;
	if (get_le64(hdr + 0) != IRM_AFC_MAGIC) {
		aerr("AFC: ответ не magic CFA6LPAA");
		return -1;
	}
	uint64_t total_len = get_le64(hdr + 8);
	uint64_t hlen = get_le64(hdr + 16);
	uint64_t rnum = get_le64(hdr + 24);
	r->op = get_le64(hdr + 32);
	if (total_len < hlen || hlen < 40 || total_len > IRM_AFC_MAX_PACKET) {
		aerr("AFC: аномальные длины ответа");
		return -1;
	}
	size_t hn2 = (size_t)(hlen - 40);
	size_t pn2 = (size_t)(total_len - hlen);
	memset(r, 0, sizeof *r);
	r->hn = hn2;
	r->pn = pn2;
	if (hn2) {
		r->hp = (uint8_t *)malloc(hn2);
		if (!r->hp) {
			aerr("AFC: нет памяти под header_payload");
			return -1;
		}
		if (afc_read_exact(a, r->hp, hn2) != 0) {
			free(r->hp);
			r->hp = NULL;
			return -1;
		}
	}
	if (pn2) {
		r->pl = (uint8_t *)malloc(pn2);
		if (!r->pl) {
			free(r->hp);
			r->hp = NULL;
			aerr("AFC: нет памяти под payload");
			return -1;
		}
		if (afc_read_exact(a, r->pl, pn2) != 0) {
			free(r->hp);
			r->hp = NULL;
			free(r->pl);
			r->pl = NULL;
			return -1;
		}
	}
	(void)rnum;
	if (r->op == IRM_AFC_OP_STATUS && r->hn >= 8) {
		r->status = 1;
		r->code = get_le64(r->hp);
		if (r->code != 0) {
			char t[128];
			snprintf(t, sizeof t, "AFC: %s",
				 irm_afc_status_name((unsigned)r->code));
			aerr(t);
		}
	}
	if (getenv("IRM_AFC_DEBUG")) {
		printf("afc: reply op=%llu code=%llu hn=%zu pn=%zu",
		       (unsigned long long)r->op,
		       (unsigned long long)r->code, r->hn, r->pn);
		for (size_t i = 0; i < 16 && i < r->hn; i++)
			printf(" %02x", r->hp[i]);
		printf(" |");
		for (size_t i = 0; i < 16 && i < r->pn; i++)
			printf(" %02x", r->pl[i]);
		printf("\n");
	}
	return 0;
}

/* Разорвать пакет на NUL-разбел; в out массив строк (malloc каждой). */
static int split_nul_strings(const uint8_t *b, size_t n, char ***out,
			     size_t *out_n)
{
	/* подсчёт непустых фрагментов */
	size_t cnt = 0;
	for (size_t i = 0; i < n;) {
		size_t j = i;
		while (j < n && b[j] != 0)
			j++;
		if (j > i)
			cnt++;
		i = j + 1;
	}
	char **arr = (char **)calloc(cnt ? cnt : 1, sizeof(char *));
	if (!arr) {
		aerr("AFC: нет памяти под список");
		return -1;
	}
	size_t k = 0;
	for (size_t i = 0; i < n && k < cnt;) {
		size_t j = i;
		while (j < n && b[j] != 0)
			j++;
		if (j > i) {
			size_t len = j - i;
			arr[k] = (char *)malloc(len + 1);
			if (!arr[k]) {
				for (size_t t = 0; t < k; t++)
					free(arr[t]);
				free(arr);
				aerr("AFC: нет памяти под строку");
				return -1;
			}
			memcpy(arr[k], b + i, len);
			arr[k][len] = 0;
			k++;
		}
		i = j + 1;
	}
	*out = arr;
	*out_n = k;
	return 0;
}

int irm_afc_devinfo(irm_afc_t *a, char ***kvs, size_t *n)
{
	afc_reply r;
	memset(&r, 0, sizeof r);
	if (afc_exchange(a, IRM_AFC_OP_GETDEVINFO, NULL, 0, NULL, 0, &r) != 0)
		return -1;
	int rc = (r.op == IRM_AFC_OP_STATUS)
			 ? (r.code == 0 ? 0 : -1)
			 : split_nul_strings(r.pl, r.pn, kvs, n);
	free(r.hp);
	free(r.pl);
	return rc;
}

int irm_afc_dir_list(irm_afc_t *a, const char *path, char ***names,
		     size_t *n)
{
	afc_reply r;
	memset(&r, 0, sizeof r);
	size_t pl = strlen(path);
	uint8_t *hp = (uint8_t *)malloc(pl);
	if (!hp) {
		aerr("AFC: нет памяти");
		return -1;
	}
	memcpy(hp, path, pl);
	int rc = afc_exchange(a, IRM_AFC_OP_READDIR, hp, pl, NULL, 0, &r);
	free(hp);
	if (rc != 0)
		return -1;
	rc = (r.op == IRM_AFC_OP_STATUS && r.code != 0) ? -1
							: split_nul_strings(
							  r.pl, r.pn, names,
							  n);
	free(r.hp);
	free(r.pl);
	return rc;
}

int irm_afc_file_info(irm_afc_t *a, const char *path, char ***kvs, size_t *n)
{
	afc_reply r;
	memset(&r, 0, sizeof r);
	size_t pl = strlen(path);
	uint8_t *hp = (uint8_t *)malloc(pl);
	if (!hp) {
		aerr("AFC: нет памяти");
		return -1;
	}
	memcpy(hp, path, pl);
	int rc = afc_exchange(a, IRM_AFC_OP_GETFILEINFO, hp, pl, NULL, 0,
			      &r);
	free(hp);
	if (rc != 0)
		return -1;
	rc = (r.op == IRM_AFC_OP_STATUS && r.code != 0) ? -1
							: split_nul_strings(
							  r.pl, r.pn, kvs, n);
	free(r.hp);
	free(r.pl);
	return rc;
}

int irm_afc_size_info(irm_afc_t *a, const char *path, size_t *size,
		      int *is_dir)
{
	char **kvs = NULL;
	size_t n = 0;
	if (irm_afc_file_info(a, path, &kvs, &n) != 0)
		return -1;
	*size = 0;
	*is_dir = 0;
	/* Пары ЧЕРЕДУЮТСЯ: st_size, 123, st_ifmt, NSFileTypeDirectory, ...
	 * (idevice 0.1.68 get_file_info_raw -> parse_kv_payload =
	 * as_chunks::<2>; по одиночке «ключ=значение» их НЕТ). */
	for (size_t i = 0; i + 1 < n; i += 2) {
		const char *key = kvs[i];
		const char *val = kvs[i + 1];
		if (strcmp(key, "st_size") == 0)
			*size = (size_t)strtoull(val, NULL, 10);
		else if (strcmp(key, "st_ifmt") == 0 &&
			 (strcmp(val, "S_IFDIR") == 0 ||
			  strcmp(val, "NSFileTypeDirectory") == 0))
			*is_dir = 1;
	}
	for (size_t i = 0; i < n; i++)
		free(kvs[i]);
	free(kvs);
	return 0;
}

int irm_afc_read_full(irm_afc_t *a, const char *path, uint8_t **out,
		      size_t *out_len)
{
	*out = NULL;
	*out_len = 0;
	size_t pl = strlen(path);
	uint8_t *hp = (uint8_t *)malloc(8 + pl);
	if (!hp) {
		aerr("AFC: нет памяти");
		return -1;
	}
	put_le64(hp, (uint64_t)IRM_AFC_RDONLY);
	memcpy(hp + 8, path, pl);
	afc_reply r;
	memset(&r, 0, sizeof r);
	int rc = afc_exchange(a, IRM_AFC_OP_FILEOPEN, hp, 8 + pl, NULL, 0,
			      &r);
	free(hp);
	/* Live-факт E14 (iPhone12,1/iOS 27.2): ответ FileOpen приходит с
	 * op=0 (не 0x0e) и fd в header_payload[0..8]; проверять строго op
	 * НЕЛЬЗЯ — fd валиден, если header_payload >= 8 и Status-ошибки нет. */
	if (rc != 0 || (r.status && r.code != 0) || r.hn < 8) {
		if (rc == 0)
			aerr("AFC: FileOpen без ответа fd");
		free(r.hp);
		free(r.pl);
		return -1;
	}
	uint64_t fdid = get_le64(r.hp);
	free(r.hp);
	free(r.pl);

	/* Read-чанки до EOF: при повторе с пустым Data/Status — разбор */
	size_t cap = 0, len = 0;
	uint8_t *acc = NULL;
	for (;;) {
		uint8_t hpr[16];
		put_le64(hpr, fdid);
		put_le64(hpr + 8, 1024u * 1024u);
		memset(&r, 0, sizeof r);
		rc = afc_exchange(a, IRM_AFC_OP_READ, hpr, sizeof hpr, NULL,
				  0, &r);
		if (rc != 0) {
			free(acc);
			return -1;
		}
		int stop = 0;
		if (r.op == IRM_AFC_OP_STATUS && r.code != 0) {
			free(r.hp);
			free(r.pl);
			free(acc);
			return -1;
		}
		if (r.pn == 0)
			stop = 1;
		if (!stop && r.pn) {
			if (len + r.pn > cap) {
				size_t ncap = cap ? cap * 2 : 256 * 1024;
				while (ncap < len + r.pn)
					ncap *= 2;
				uint8_t *na = (uint8_t *)realloc(acc, ncap);
				if (!na) {
					free(r.hp);
					free(r.pl);
					free(acc);
					aerr("AFC: нет памяти под файл");
					return -1;
				}
				acc = na;
				cap = ncap;
			}
			memcpy(acc + len, r.pl, r.pn);
			len += r.pn;
		}
		free(r.hp);
		free(r.pl);
		if (stop)
			break;
	}
	/* Закрыть дескриптор файла. */
	{
		uint8_t hpc[8];
		put_le64(hpc, fdid);
		memset(&r, 0, sizeof r);
		if (afc_exchange(a, IRM_AFC_OP_CLOSE, hpc, sizeof hpc, NULL,
				 0, &r) != 0) {
			free(acc);
			return -1;
		}
		free(r.hp);
		free(r.pl);
	}
	*out = acc;
	*out_len = len;
	return 0;
}

int irm_afc_write_full(irm_afc_t *a, const char *path, const uint8_t *b,
		       size_t n)
{
	size_t pl = strlen(path);
	uint8_t *hp = (uint8_t *)malloc(8 + pl);
	if (!hp) {
		aerr("AFC: нет памяти");
		return -1;
	}
	put_le64(hp, (uint64_t)IRM_AFC_WONLY);
	memcpy(hp + 8, path, pl);
	afc_reply r;
	memset(&r, 0, sizeof r);
	int rc = afc_exchange(a, IRM_AFC_OP_FILEOPEN, hp, 8 + pl, NULL, 0,
			      &r);
	free(hp);
	/* Как в read_full: op ответа = 0 (live-факт E14), fd при hn >= 8. */
	if (rc != 0 || (r.status && r.code != 0) || r.hn < 8) {
		free(r.hp);
		free(r.pl);
		if (rc == 0)
			aerr("AFC: FileOpen(WrOnly) без ответа fd");
		return -1;
	}
	uint64_t fdid = get_le64(r.hp);
	free(r.hp);
	free(r.pl);

	rc = 0;
	for (size_t off = 0; off < n && rc == 0;
	     off += IRM_AFC_WRITE_CHUNK) {
		size_t chunk = n - off;
		if (chunk > IRM_AFC_WRITE_CHUNK)
			chunk = IRM_AFC_WRITE_CHUNK;
		uint8_t hpr[8];
		put_le64(hpr, fdid);
		/* payload = данные; весь пакет — путь к приёму телефона */
		memset(&r, 0, sizeof r);
		rc = afc_exchange(a, IRM_AFC_OP_WRITE, hpr, sizeof hpr,
				  b + off, chunk, &r);
		if (rc == 0 && r.status && r.code != 0)
			rc = -1;
		free(r.hp);
		free(r.pl);
	}
	if (rc == 0) {
		uint8_t hpc[8];
		put_le64(hpc, fdid);
		memset(&r, 0, sizeof r);
		if (afc_exchange(a, IRM_AFC_OP_CLOSE, hpc, sizeof hpc, NULL,
				 0, &r) != 0)
			rc = -1;
		else if (r.status && r.code != 0)
			rc = -1;
		free(r.hp);
		free(r.pl);
	}
	return rc;
}

int irm_afc_mkdir(irm_afc_t *a, const char *path)
{
	size_t pl = strlen(path);
	uint8_t *hp = (uint8_t *)malloc(pl);
	if (!hp) {
		aerr("AFC: нет памяти");
		return -1;
	}
	memcpy(hp, path, pl);
	afc_reply r;
	memset(&r, 0, sizeof r);
	int rc = afc_exchange(a, IRM_AFC_OP_MAKEDIR, hp, pl, NULL, 0, &r);
	free(hp);
	int ok = (r.op == IRM_AFC_OP_STATUS) ? (r.code == 0 ? 0 : -1)
					     : (rc == 0 ? 0 : -1);
	free(r.hp);
	free(r.pl);
	if (ok != 0 && rc == 0)
		aerr(irm_afc_status_name((unsigned)r.code));
	return ok;
}

int irm_afc_rename(irm_afc_t *a, const char *from, const char *to)
{
	size_t fl = strlen(from), tl = strlen(to);
	uint8_t *hp = (uint8_t *)malloc(fl + 1 + tl + 1);
	if (!hp) {
		aerr("AFC: нет памяти");
		return -1;
	}
	memcpy(hp, from, fl);
	hp[fl] = 0;
	memcpy(hp + fl + 1, to, tl);
	hp[fl + 1 + tl] = 0;
	afc_reply r;
	memset(&r, 0, sizeof r);
	int rc = afc_exchange(a, IRM_AFC_OP_RENAME, hp, fl + 1 + tl + 1,
			      NULL, 0, &r);
	free(hp);
	int ok = (r.op == IRM_AFC_OP_STATUS) ? (r.code == 0 ? 0 : -1)
					     : (rc == 0 ? 0 : -1);
	free(r.hp);
	free(r.pl);
	if (ok != 0 && rc == 0)
		aerr(irm_afc_status_name((unsigned)r.code));
	return ok;
}
