/* libirm/src/xmlplist.c — mini-reader XML-plist (см. xmlplist.h).
 * Реализация: однопроходный рекурсивный спуск по буферу; имена тегов
 * короткоживущие (массив на стеке), текст узлов копируется в IRM_BP_*.
 * Синтаксические лишние пробелы/переводы строк вокруг тегов игнорируются
 * (javax|Apple XML-writer форматирует с \t/\n). */
#include "libirm/xmlplist.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

static char g_err[96] = "";

const char *irm_xml_error(void)
{
	return g_err;
}

struct xctx {
	const uint8_t *b;
	size_t n, off;
	int depth;
	char err[96];
};

static void eset(struct xctx *c, const char *m)
{
	snprintf(c->err, sizeof c->err, "%s (pos %zu)", m, c->off);
}

static int is_ws(uint8_t ch)
{
	return ch == ' ' || ch == '\t' || ch == '\r' || ch == '\n';
}

static void skip_ws(struct xctx *c)
{
	while (c->off < c->n && is_ws(c->b[c->off]))
		c->off++;
}

/* Тег: пропустить до '<', взять имя до ws/'>'/'/', флаг selfclose.
 * Возврат 0 — ок; -1 — конец файла/нет следующие '<'. */
static int open_tag(struct xctx *c, char *name, size_t cap, int *selfclose)
{
	while (c->off < c->n && c->b[c->off] != '<')
		c->off++;
	if (c->off >= c->n) {
		eset(c, "eof (ожидается тег)");
		return -1;
	}
	c->off++; /* '<' */
	size_t nn = 0;
	while (c->off < c->n && !is_ws(c->b[c->off]) && c->b[c->off] != '>' &&
	       c->b[c->off] != '/') {
		char ch = (char)c->b[c->off++];
		if (nn + 1 >= cap) {
			eset(c, "tag name too long");
			return -1;
		}
		name[nn++] = ch;
	}
	name[nn] = 0;
	*selfclose = 0;
	while (c->off < c->n && c->b[c->off] != '>') {
		if (c->b[c->off] == '/') {
			*selfclose = 1;
			break;
		}
		c->off++;
	}
	if (c->off >= c->n) {
		eset(c, "eof in tag");
		return -1;
	}
	/* '<?xml ...?>': '?>' — '?' перед '>'; иначе '/' в self-close */
	if (c->b[c->off] == '/' || c->b[c->off] == '?')
		c->off++;
	if (c->b[c->off] != '>') {
		eset(c, "no '>' in tag");
		return -1;
	}
	c->off++; /* '>' */
	return 0;
}

/* проверить и съесть закрывающий тег "</name>" */
static int close_tag(struct xctx *c, const char *name)
{
	while (c->off < c->n && c->b[c->off] != '<')
		c->off++;
	if (c->off + 2 > c->n || c->b[c->off] != '<' || c->b[c->off + 1] != '/') {
		eset(c, "expected closing tag");
		return -1;
	}
	c->off += 2;
	size_t ln = strlen(name);
	if (c->off + ln > c->n || memcmp(c->b + c->off, name, ln) != 0) {
		eset(c, "closing tag name mismatch");
		return -1;
	}
	c->off += ln;
	while (c->off < c->n && c->b[c->off] != '>') {
		if (!is_ws(c->b[c->off])) {
			eset(c, "junk in closing tag");
			return -1;
		}
		c->off++;
	}
	if (c->off >= c->n) {
		eset(c, "eof after closing tag");
		return -1;
	}
	c->off++;
	return 0;
}

/* text между тегами с раскрытием сущностей; len может быть 0.
 * Возврат malloc-буфер (собственник — вызывающий) или NULL. */
static uint8_t *take_text(struct xctx *c, size_t *out_len)
{
	size_t start = c->off;
	/* фарищ: раскодировать в выделенный буфер */
	uint8_t *out = (uint8_t *)malloc(c->n - c->off + 1);
	if (!out) {
		eset(c, "oom");
		return NULL;
	}
	size_t o = 0;
	while (c->off < c->n && c->b[c->off] != '<') {
		uint8_t ch = c->b[c->off++];
		if (ch != '&') {
			out[o++] = ch;
			continue;
		}
		/* сущность */
		size_t e = c->off;
		while (e < c->n && c->b[e] != ';' && e - c->off < 12)
			e++;
		if (e >= c->n || c->b[e] != ';') {
			eset(c, "bad entity");
			free(out);
			return NULL;
		}
		size_t elen = e - c->off;
		const char *ent = (const char *)c->b + c->off;
		c->off = e + 1;
		/* elen — байты между '&' и ';' (без точки с запятой) */
		if (elen == 3 && memcmp(ent, "amp", 3) == 0) out[o++] = '&';
		else if (elen == 2 && memcmp(ent, "lt", 2) == 0)  out[o++] = '<';
		else if (elen == 2 && memcmp(ent, "gt", 2) == 0)  out[o++] = '>';
		else if (elen == 4 && memcmp(ent, "quot", 4) == 0) out[o++] = '"';
		else if (elen == 4 && memcmp(ent, "apos", 4) == 0) out[o++] = '\'';
		else if (elen >= 1 && ent[0] == '#') {
			uint32_t v = 0;
			int hex = elen >= 2 && (ent[1] == 'x' || ent[1] == 'X');
			for (size_t i = hex ? 2u : 1u; i < elen; i++) {
				uint8_t d = (uint8_t)ent[i];
				v = v * (hex ? 16u : 10u) +
				    (d >= '0' && d <= '9' ? (uint32_t)(d - '0') :
				     hex && d >= 'a' && d <= 'f' ?
					     (uint32_t)(d - 'a' + 10) :
				     hex && d >= 'A' && d <= 'F' ?
					     (uint32_t)(d - 'A' + 10) :
				     99u);
			}
			if (v > 0x10FFFF) {
				eset(c, "bad char ref");
				free(out);
				return NULL;
			}
			if (v < 0x80)
				out[o++] = (uint8_t)v;
			else if (v < 0x800) {
				out[o++] = (uint8_t)(0xC0 | (v >> 6));
				out[o++] = (uint8_t)(0x80 | (v & 0x3F));
			} else if (v < 0x10000) {
				out[o++] = (uint8_t)(0xE0 | (v >> 12));
				out[o++] = (uint8_t)(0x80 | ((v >> 6) & 0x3F));
				out[o++] = (uint8_t)(0x80 | (v & 0x3F));
			} else {
				out[o++] = (uint8_t)(0xF0 | (v >> 18));
				out[o++] = (uint8_t)(0x80 | ((v >> 12) & 0x3F));
				out[o++] = (uint8_t)(0x80 | ((v >> 6) & 0x3F));
				out[o++] = (uint8_t)(0x80 | (v & 0x3F));
			}
		} else {
			eset(c, "unknown entity (plen)");
			free(out);
			return NULL;
		}
	}
	*out_len = o;
	out[o] = '\0'; /* Портирование (Linux): гарантия NUL-терминатора —
	                * ключи dict'ов и strtoll/strtod строятся из этой
	                * строки как из C-строки (см. irm_bp_string_bytes). */
	/* text из [start..c->off) — out уже указатель на декодирование; текст мог
	 * обрезаться из-за фиктивного начала... */
	(void)start;
	return out;
}

/* Прочитать ТЕКСТ между открывающим и закрывающим тегом name (уже после '>').
 * Само имя тега передаётся только для пар </name>. */
static uint8_t *elem_text(struct xctx *c, const char *name, size_t *out_len)
{
	uint8_t *t = take_text(c, out_len);
	if (!t)
		return NULL;
	if (close_tag(c, name)) {
		free(t);
		return NULL;
	}
	return t;
}

/* --- base64 --- */
static int b64v(uint8_t ch)
{
	if (ch >= 'A' && ch <= 'Z')
		return ch - 'A';
	if (ch >= 'a' && ch <= 'z')
		return ch - 'a' + 26;
	if (ch >= '0' && ch <= '9')
		return ch - '0' + 52;
	if (ch == '+')
		return 62;
	if (ch == '/')
		return 63;
	return -1;
}

static uint8_t *b64_decode(const uint8_t *s, size_t len, size_t *out_n)
{
	uint8_t *out = (uint8_t *)malloc(len / 4 * 3 + 3);
	if (!out)
		return NULL;
	size_t o = 0;
	uint32_t acc = 0;
	unsigned bits = 0, pad = 0;
	for (size_t i = 0; i < len; i++) {
		uint8_t ch = s[i];
		if (is_ws(ch))
			continue;
		if (ch == '=') {
			pad++;
			continue;
		}
		int v = b64v(ch);
		if (v < 0 || pad) {
			free(out);
			return NULL;
		}
		acc = (acc << 6) | (uint32_t)v;
		bits += 6;
		if (bits >= 8) {
			bits -= 8;
			out[o++] = (uint8_t)((acc >> bits) & 0xFFu);
		}
	}
	*out_n = o;
	return out;
}

/* --- ISO 8601 → секунды от 2001-01-01T00:00:00Z --- */
static int leap_year(long y)
{
	return (y % 4 == 0 && y % 100 != 0) || y % 400 == 0;
}

static long days_from_civil(long y, unsigned m, unsigned d)
{
	static const unsigned md[] = { 31, 28, 31, 30, 31, 30,
					   31, 31, 30, 31, 30, 31 };
	long days = 0;
	if (y > 2001) {
		for (long yy = 2001; yy < y; yy++)
			days += leap_year(yy) ? 366 : 365;
	} else if (y < 2001) {
		for (long yy = y; yy < 2001; yy++)
			days -= leap_year(yy) ? 366 : 365;
	}
	for (unsigned mm = 1; mm < m; mm++) {
		days += md[mm - 1];
		if (mm == 2 && leap_year(y))
			days += 1;
	}
	return days + (long)d - 1;
}

static int date_from_iso(const uint8_t *s, size_t len, int64_t *out)
{
	long y;
	unsigned mo, d, h, mi, se;
	if (len < 19 ||
	    sscanf((const char *)s, "%ld-%2u-%2uT%2u:%2u:%2u",
	           &y, &mo, &d, &h, &mi, &se) != 6)
		return -1;
	if (mo < 1 || mo > 12 || d < 1 || d > 31)
		return -1;
	int64_t sec = days_from_civil(y, mo, d) * 86400 +
		      (int64_t)h * 3600 + (int64_t)mi * 60 + se;
	/* Apple-эпоха: 2001-01-01T00:00:00Z */
	*out = sec - 0LL; /* days уже от 2001 */
	return 0;
}

/* --- разбор значения-элемента ---------------------------------------- */
static irm_bp_node *parse_val(struct xctx *c, int depth);

static irm_bp_node *parse_val(struct xctx *c, int depth)
{
	if (depth > 128) {
		eset(c, "depth");
		return NULL;
	}
	char name[24];
	int selfclose = 0;
	skip_ws(c);
	if (open_tag(c, name, sizeof name, &selfclose) != 0)
		return NULL;

	irm_bp_node *n = NULL;
	if (strcmp(name, "true") == 0) {
		if (!selfclose) {
			eset(c, "<true> not self-closed");
			return NULL;
		}
		n = irm_bp_bool(1);
	} else if (strcmp(name, "false") == 0) {
		if (!selfclose) {
			eset(c, "<false> not self-closed");
			return NULL;
		}
		n = irm_bp_bool(0);
	} else if (strcmp(name, "string") == 0) {
		if (selfclose)
			n = irm_bp_string_bytes("", 0);
		else {
			size_t tl;
			uint8_t *t = elem_text(c, name, &tl);
			if (!t)
				return NULL;
			n = irm_bp_string_bytes((const char *)t, tl);
			free(t);
		}
	} else if (strcmp(name, "integer") == 0) {
		size_t tl;
		if (selfclose) {
			eset(c, "empty integer");
			return NULL;
		}
		uint8_t *t = elem_text(c, name, &tl);
		if (!t)
			return NULL;
		/* trim; диапазон ПОЛНЫЙ u64: без минуса — strtoull, с минусом —
		 * SInt64 в endian-канонике нашего хранилища (u64, two's compl).
		 * CF-серализация больших объектов даёт u64-литералы (DL/backup). */
		size_t i = 0;
		while (tl && is_ws(t[i]))
			i++, tl--;
		while (tl && is_ws(t[tl - 1]))
			tl--;
		t[tl] = 0;
		if (i < tl && t[i] == '-') {
			int64_t sv = (int64_t)strtoll((const char *)t + i, NULL, 10);
			n = irm_bp_uint((uint64_t)sv);
		} else {
			n = irm_bp_uint(strtoull((const char *)t + i, NULL, 10));
		}
		free(t);
	} else if (strcmp(name, "real") == 0) {
		size_t tl;
		uint8_t *t = elem_text(c, name, &tl);
		if (!t) {
			eset(c, "real text");
			return NULL;
		}
		n = irm_bp_real(strtod((const char *)t, NULL));
		free(t);
	} else if (strcmp(name, "data") == 0) {
		size_t tl;
		if (selfclose) {
			n = irm_bp_data("", 0);
		} else {
			uint8_t *t = elem_text(c, name, &tl);
			if (!t)
				return NULL;
			size_t dn = 0;
			uint8_t *d = b64_decode(t, tl, &dn);
			free(t);
			if (!d) {
				eset(c, "base64");
				return NULL;
			}
			n = irm_bp_data(d, dn);
			free(d);
		}
	} else if (strcmp(name, "date") == 0) {
		size_t tl;
		uint8_t *t = elem_text(c, name, &tl);
		if (!t) {
			eset(c, "date text");
			return NULL;
		}
		int64_t sec = 0;
		if (date_from_iso(t, tl, &sec) != 0) {
			free(t);
			eset(c, "bad date");
			return NULL;
		}
		n = irm_bp_date((double)sec);
		free(t);
	} else if (strcmp(name, "plist") == 0) {
		/* корневая обёртка: ровно одно значение, затем </plist> */
		if (selfclose) {
			eset(c, "empty plist");
			return NULL;
		}
		n = parse_val(c, depth + 1);
		if (!n)
			return NULL;
		if (close_tag(c, "plist") != 0) {
			irm_bp_free(n);
			return NULL;
		}
		return n;
	} else if (strcmp(name, "array") == 0) {
		n = irm_bp_array();
		if (!n)
			return NULL;
		if (!selfclose) {
			for (;;) {
				skip_ws(c);
				if (c->off + 2 <= c->n && c->b[c->off] == '<' &&
				    c->b[c->off + 1] == '/') {
					break;
				}
				irm_bp_node *ch = parse_val(c, depth + 1);
				if (!ch || irm_bp_array_add(n, ch) != 0) {
					if (ch) {
						irm_bp_free(ch);
						eset(c, "array add oom");
					}
					irm_bp_free(n);
					return NULL;
				}
			}
			if (close_tag(c, name)) {
				irm_bp_free(n);
				return NULL;
			}
		}
	} else if (strcmp(name, "dict") == 0) {
		n = irm_bp_dict();
		if (!n)
			return NULL;
		if (!selfclose) {
			for (;;) {
				skip_ws(c);
				if (c->off + 2 <= c->n && c->b[c->off] == '<' &&
				    c->b[c->off + 1] == '/') {
					break;
				}
				/* <key>... </key> */
				char kn[24];
				int ksc = 0;
				if (open_tag(c, kn, sizeof kn, &ksc) != 0 ||
				    strcmp(kn, "key") != 0 || ksc) {
					eset(c, "dict: expected <key>");
					irm_bp_free(n);
					return NULL;
				}
				size_t kl = 0;
				uint8_t *kt = elem_text(c, kn, &kl);
				if (!kt) {
					irm_bp_free(n);
					return NULL;
				}
				irm_bp_node *v = parse_val(c, depth + 1);
				if (!v ||
				    irm_bp_dict_set(n, (const char *)kt, v) != 0) {
					if (v)
						irm_bp_free(v);
					else
						eset(c, "dict value");
					free(kt);
					irm_bp_free(n);
					return NULL;
				}
				free(kt);
			}
			if (close_tag(c, name)) {
				irm_bp_free(n);
				return NULL;
			}
		}
	} else {
		eset(c, "unknown tag");
		return NULL;
	}
	if (!n && !c->err[0])
		eset(c, "oom");
	return n;
}

irm_bp_node *irm_xml_read(const uint8_t *buf, size_t len)
{
	g_err[0] = 0;
	if (!buf || !len) {
		snprintf(g_err, sizeof g_err, "empty buf");
		return NULL;
	}
	struct xctx c = {0};
	c.b = buf;
	c.n = len;
	skip_ws(&c);
	if (c.off + 5 <= len && memcmp(buf + c.off, "<?xml", 5) == 0) {
		while (c.off < len && c.b[c.off] != '>')
			c.off++;
		if (c.off < len)
			c.off++;
	}
	/* DOCTYPE (и пр. <!...>) — съесть целиком; '/' в кавычках не мешает */
	skip_ws(&c);
	while (c.off + 2 <= len && buf[c.off] == '<' &&
	       buf[c.off + 1] == '!') {
		while (c.off < len && c.b[c.off] != '>')
			c.off++;
		if (c.off < len)
			c.off++;
		skip_ws(&c);
	}
	/* корневой <plist> (опционально) — содержимое = корневой элемент */
	irm_bp_node *root = parse_val(&c, 0);
	if (!root) {
		snprintf(g_err, sizeof g_err, "%s", c.err[0] ? c.err : "parse");
		return NULL;
	}
	/* хвост: закрывающий </plist> или мусор — допустимы пробелы */
	while (c.off < len && is_ws(c.b[c.off]))
		c.off++;
	if (c.off < len && c.b[c.off] == '<' && c.off + 2 <= len &&
	    c.b[c.off + 1] == '/') {
		if (close_tag(&c, "plist") != 0) {
			irm_bp_free(root);
			return NULL;
		}
	}
	while (c.off < len && is_ws(c.b[c.off]))
		c.off++;
	if (c.off < len) {
		snprintf(g_err, sizeof g_err, "trailing junk at %zu", c.off);
		irm_bp_free(root);
		return NULL;
	}
	return root;
}

/* ------------------------------------------------------------------ */
/* WRITER (CF-совместимый XML, E06 §1: DL-пейлоады — format=200)        */
/* ------------------------------------------------------------------ */

struct wbuf {
	uint8_t *p;
	size_t n, cap;
};

static int wb_reserve(struct wbuf *w, size_t add)
{
	if (w->n + add <= w->cap)
		return 0;
	size_t ncap = w->cap ? w->cap : 128;
	while (ncap < w->n + add)
		ncap *= 2;
	uint8_t *np = (uint8_t *)realloc(w->p, ncap);
	if (!np)
		return -1;
	w->p = np;
	w->cap = ncap;
	return 0;
}

static int wb_put(struct wbuf *w, const void *s, size_t n)
{
	if (wb_reserve(w, n) != 0)
		return -1;
	if (n) {
		memcpy(w->p + w->n, s, n);
		w->n += n;
	}
	return 0;
}

static int wb_puts(struct wbuf *w, const char *s)
{
	return wb_put(w, s, strlen(s));
}

static const char B64TAB[] =
	"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

/* base64 без переносов строк (CF-разбор терーナ tolerant; и наш reader тоже). */
static int wb_b64(struct wbuf *w, const uint8_t *d, size_t n)
{
	size_t i = 0;
	while (i + 3 <= n) {
		uint32_t v = ((uint32_t)d[i] << 16) | ((uint32_t)d[i + 1] << 8) |
			     (uint32_t)d[i + 2];
		char q[4] = {
			B64TAB[(v >> 18) & 0x3F], B64TAB[(v >> 12) & 0x3F],
			B64TAB[(v >> 6) & 0x3F], B64TAB[v & 0x3F]
		};
		if (wb_put(w, q, 4) != 0)
			return -1;
		i += 3;
	}
	if (i < n) {
		uint32_t rem = d[i];
		char q[4] = { 0, 0, '=', '=' };
		q[1] = B64TAB[(rem & 0xFC) >> 2];
		if (i + 1 < n) {
			rem = (rem << 8) | d[i + 1];
			q[2] = B64TAB[(rem & 0x0F0) >> 4];
		}
		if (wb_put(w, q, 4) != 0)
			return -1;
	}
	return 0;
}

/* cf-escape текст: & < > → entities (UTF-8 идёт как есть). */
static int wb_escape(struct wbuf *w, const char *s, size_t n)
{
	for (size_t i = 0; i < n; i++) {
		char ch = s[i];
		switch (ch) {
		case '&':  if (wb_puts(w, "&amp;") != 0) return -1; break;
		case '<':  if (wb_puts(w, "&lt;") != 0) return -1; break;
		case '>':  if (wb_puts(w, "&gt;") != 0) return -1; break;
		case '\r': if (wb_puts(w, "&#13;") != 0) return -1; break;
		default:   if (wb_put(w, &ch, 1) != 0) return -1;
		}
	}
	return 0;
}

static int wb_indent(struct wbuf *w, int depth)
{
	for (int i = 0; i < depth; i++)
		if (wb_put(w, "\t", 1) != 0)
			return -1;
	return 0;
}

static int wb_real(struct wbuf *w, double v)
{
	char b[64];
	/* короткий вида Apple (0.5 → "0.5"); при потере точности — %.17g */
	snprintf(b, sizeof b, "%.15g", v);
	if (strtod(b, NULL) != v)
		snprintf(b, sizeof b, "%.17g", v);
	return wb_puts(w, b);
}

static int wb_date(struct wbuf *w, double secs)
{
	/* DATE = секунды от 2001-01-01T00:00:00Z (как в bplist): 978307200 */
	time_t t = (time_t)(978307200.0 + secs);
	struct tm tm;
	gmtime_r(&t, &tm);
	char b[40];
	snprintf(b, sizeof b, "%04d-%02d-%02dT%02d:%02d:%02dZ",
		 tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday,
		 tm.tm_hour, tm.tm_min, tm.tm_sec);
	return wb_puts(w, b);
}

static int xml_write_node(struct wbuf *w, const irm_bp_node *node, int depth)
{
	if (!node) {
		/* NULL — PLIST-зашёт CF: <null/> (🔴 Q15 live-сверка). */
		if (wb_indent(w, depth) != 0)
			return -1;
		return wb_puts(w, "<null/>\n");
	}
	switch (irm_bp_type_of(node)) {
	case IRM_BP_STRING: {
		size_t n = 0;
		const char *s = irm_bp_string_ptr(node, &n);
		if (wb_indent(w, depth) != 0 || wb_puts(w, "<string>") != 0)
			return -1;
		if (wb_escape(w, s, n) != 0 || wb_puts(w, "</string>\n") != 0)
			return -1;
		break;
	}
	case IRM_BP_UINT: {
		char b[32];
		snprintf(b, sizeof b, "%llu", (unsigned long long)irm_bp_uint_value(node));
		if (wb_indent(w, depth) != 0 ||
		    wb_puts(w, "<integer>") != 0 ||
		    wb_puts(w, b) != 0 ||
		    wb_puts(w, "</integer>\n") != 0)
			return -1;
		break;
	}
	case IRM_BP_REAL:
		if (wb_indent(w, depth) != 0 || wb_puts(w, "<real>") != 0 ||
		    wb_real(w, irm_bp_real_value(node)) != 0 ||
		    wb_puts(w, "</real>\n") != 0)
			return -1;
		break;
	case IRM_BP_DATE:
		if (wb_indent(w, depth) != 0 || wb_puts(w, "<date>") != 0 ||
		    wb_date(w, irm_bp_real_value(node)) != 0 ||
		    wb_puts(w, "</date>\n") != 0)
			return -1;
		break;
	case IRM_BP_BOOL:
		if (wb_indent(w, depth) != 0)
			return -1;
		return wb_puts(w, irm_bp_bool_value(node) ?
			       "<true/>\n" : "<false/>\n");
	case IRM_BP_NULL:
		if (wb_indent(w, depth) != 0)
			return -1;
		return wb_puts(w, "<null/>\n");
	case IRM_BP_DATA: {
		size_t n = 0;
		const uint8_t *d = irm_bp_data_ptr(node, &n);
		if (wb_indent(w, depth) != 0 || wb_puts(w, "<data>") != 0)
			return -1;
		if (wb_b64(w, d, n) != 0 || wb_puts(w, "</data>\n") != 0)
			return -1;
		break;
	}
	case IRM_BP_ARRAY: {
		size_t n = irm_bp_array_len(node);
		if (n == 0) {
			if (wb_indent(w, depth) != 0)
				return -1;
			return wb_puts(w, "<array/>\n");
		}
		if (wb_indent(w, depth) != 0 || wb_puts(w, "<array>\n") != 0)
			return -1;
		for (size_t i = 0; i < n; i++)
			if (xml_write_node(w, irm_bp_array_get(node, i),
					   depth + 1) != 0)
				return -1;
		if (wb_indent(w, depth) != 0 || wb_puts(w, "</array>\n") != 0)
			return -1;
		break;
	}
	case IRM_BP_DICT: {
		size_t n = irm_bp_dict_count(node);
		if (n == 0) {
			if (wb_indent(w, depth) != 0)
				return -1;
			return wb_puts(w, "<dict/>\n");
		}
		if (wb_indent(w, depth) != 0 || wb_puts(w, "<dict>\n") != 0)
			return -1;
		for (size_t i = 0; i < n; i++) {
			const char *k = irm_bp_dict_key_at(node, i);
			irm_bp_node *v = irm_bp_dict_val_at(node, i);
			if (!k || wb_indent(w, depth + 1) != 0)
				return -1;
			if (wb_puts(w, "<key>") != 0 ||
			    wb_escape(w, k, strlen(k)) != 0 ||
			    wb_puts(w, "</key>\n") != 0)
				return -1;
			if (xml_write_node(w, v, depth + 1) != 0)
				return -1;
		}
		if (wb_indent(w, depth) != 0 || wb_puts(w, "</dict>\n") != 0)
			return -1;
		break;
	}
	}
	return 0;
}

int irm_xml_write(const irm_bp_node *root, uint8_t **out, size_t *outlen)
{
	*out = NULL;
	*outlen = 0;
	if (!root)
		return -1;
	struct wbuf w = { NULL, 0, 0 };
	if (wb_puts(&w,
		    "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n"
		    "<!DOCTYPE plist PUBLIC \"-//Apple//DTD PLIST 1.0//EN\" "
		    "\"http://www.apple.com/DTDs/PropertyList-1.0.dtd\">\n"
		    "<plist version=\"1.0\">\n") != 0 ||
	    xml_write_node(&w, root, 0) != 0 ||
	    wb_puts(&w, "</plist>\n") != 0) {
		free(w.p);
		return -1;
	}
	*out = w.p;
	*outlen = w.n;
	return 0;
}
