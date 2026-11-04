/* libirm/src/bplist.c — bplist00 (kCFPropertyListBinaryFormat_v1_0) writer/reader.
 *
 * Формат (сверен с Apple-семантикой; wire-факты в docs/evidence/E01b/E02):
 *   файл      = "bplist00" + объекты + offset-table + trailer(32B)
 *   объект    = маркер (hi<<4)|lo; lo — размер/длина или 0xF+int
 *   int       = 0x10|k, k∈{0,1,2,3} → BE без знака 1<<k байт
 *   real      = 0x22 (f32) | 0x23 (f64), BE
 *   date      = 0x33 + BE f64 (секунды от 2001-01-01)
 *   bool      = 0x08 (false) | 0x09 (true)
 *   string    = 0x50|len (ASCII) | 0x60|units (UTF-16BE; units — кол-во код.единиц)
 *             при len>14: lo=0xF, далее int-маркер 0x10|k с длиной
 *   data      = 0x40|len
 *   array     = 0xA0|n + n×refSize (refs — индексы объектов)
 *   dict      = 0xD0|n + n×refSize ключей + n×refSize значений
 *   offsets   = numObjects × offsetIntSize (BE, от начала файла)
 *   trailer   = 5×NUL, sortVersion(=0), offsetIntSize, objectRefSize,
 *               numObjects u64 BE, topObject u64 BE, offsetTableOffset u64 BE  (32B)
 * Все маркеры/трейлер сверены байт-в-байт с выводом Apple-совместимого
 * генератора (python plistlib FMT_BINARY) — см. comptest ниже.
 */
#include "libirm/bplist.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* ------------------------------------------------------------------ */
/* Узел и конструкторы                                                 */
/* ------------------------------------------------------------------ */

struct irm_bp_node {
	irm_bp_type t;
	union {
		int      b;
		uint64_t u;
		double   d;
		struct { uint8_t *p; size_t n; } raw;                 /* STRING / DATA */
		struct { irm_bp_node **it; size_t n, cap; } seq;      /* ARRAY */
		struct { irm_bp_node **k, **v; size_t n, cap; } map;  /* DICT (ключи = STRING-узлы) */
	} as;
};

static irm_bp_node *node_new(irm_bp_type t)
{
	irm_bp_node *n = (irm_bp_node *)calloc(1, sizeof *n);
	if (n)
		n->t = t;
	return n;
}

irm_bp_node *irm_bp_bool(int v)       { irm_bp_node *n = node_new(IRM_BP_BOOL); if (n) n->as.b = !!v; return n; }
irm_bp_node *irm_bp_uint(uint64_t v)  { irm_bp_node *n = node_new(IRM_BP_UINT); if (n) n->as.u = v;   return n; }
irm_bp_node *irm_bp_real(double v)    { irm_bp_node *n = node_new(IRM_BP_REAL); if (n) n->as.d = v;   return n; }
irm_bp_node *irm_bp_date(double v)    { irm_bp_node *n = node_new(IRM_BP_DATE); if (n) n->as.d = v;   return n; }

irm_bp_node *irm_bp_string_bytes(const char *s, size_t n)
{
	irm_bp_node *nd = node_new(IRM_BP_STRING);
	if (!nd)
		return NULL;
	nd->as.raw.p = (uint8_t *)malloc((n ? n : 1) + 1);
	if (!nd->as.raw.p) {
		free(nd);
		return NULL;
	}
	if (n)
		memcpy(nd->as.raw.p, s, n);
	nd->as.raw.p[n] = '\0'; /* Портирование (Linux): гарантируем NUL-терминатор,
	                         * иначе strcmp/printf читают мусор за строкой
	                         * (на macOS кучи чаще нулевые, на Linux — нет). */
	nd->as.raw.n = n;
	return nd;
}

irm_bp_node *irm_bp_string(const char *s)
{
	if (!s)
		return NULL;
	return irm_bp_string_bytes(s, strlen(s));
}

irm_bp_node *irm_bp_data(const void *p, size_t n)
{
	irm_bp_node *nd = node_new(IRM_BP_DATA);
	if (!nd)
		return NULL;
	if (n) {
		nd->as.raw.p = (uint8_t *)malloc(n);
		if (!nd->as.raw.p) {
			free(nd);
			return NULL;
		}
		memcpy(nd->as.raw.p, p, n);
	}
	nd->as.raw.n = n;
	return nd;
}

irm_bp_node *irm_bp_array(void) { return node_new(IRM_BP_ARRAY); }
irm_bp_node *irm_bp_dict(void)  { return node_new(IRM_BP_DICT);  }

void irm_bp_free(irm_bp_node *n)
{
	if (!n)
		return;
	switch (n->t) {
	case IRM_BP_STRING:
	case IRM_BP_DATA:
		free(n->as.raw.p);
		break;
	case IRM_BP_ARRAY:
		for (size_t i = 0; i < n->as.seq.n; i++)
			irm_bp_free(n->as.seq.it[i]);
		free(n->as.seq.it);
		break;
	case IRM_BP_DICT:
		for (size_t i = 0; i < n->as.map.n; i++) {
			irm_bp_free(n->as.map.k[i]);
			irm_bp_free(n->as.map.v[i]);
		}
		free(n->as.map.k);
		free(n->as.map.v);
		break;
	default:
		break;
	}
	free(n);
}

/* ------------------------------------------------------------------ */
/* Коллекции                                                            */
/* ------------------------------------------------------------------ */

int irm_bp_dict_set(irm_bp_node *d, const char *key, irm_bp_node *val)
{
	if (!d || d->t != IRM_BP_DICT || !key || !val) {
		irm_bp_free(val);
		return -1;
	}
	size_t klen = strlen(key);
	for (size_t i = 0; i < d->as.map.n; i++) {
		const irm_bp_node *k = d->as.map.k[i];
		if (k->t == IRM_BP_STRING && k->as.raw.n == klen &&
		    memcmp(k->as.raw.p, key, klen) == 0) {
			irm_bp_free(d->as.map.v[i]);
			d->as.map.v[i] = val;
			return 0;
		}
	}
	if (d->as.map.n == d->as.map.cap) {
		size_t nc = d->as.map.cap ? d->as.map.cap * 2 : 8;
		irm_bp_node **nk = (irm_bp_node **)realloc(d->as.map.k, nc * sizeof *nk);
		if (!nk) {
			irm_bp_free(val);
			return -1;
		}
		d->as.map.k = nk;
		d->as.map.cap = nc;
		irm_bp_node **nv = (irm_bp_node **)realloc(d->as.map.v, nc * sizeof *nv);
		if (!nv) {
			irm_bp_free(val);
			return -1;
		}
		d->as.map.v = nv;
	}
	irm_bp_node *kn = irm_bp_string(key);
	if (!kn) {
		irm_bp_free(val);
		return -1;
	}
	d->as.map.k[d->as.map.n] = kn;
	d->as.map.v[d->as.map.n] = val;
	d->as.map.n++;
	return 0;
}

int irm_bp_array_add(irm_bp_node *a, irm_bp_node *val)
{
	if (!a || a->t != IRM_BP_ARRAY || !val)
		return -1;
	if (a->as.seq.n == a->as.seq.cap) {
		size_t nc = a->as.seq.cap ? a->as.seq.cap * 2 : 8;
		irm_bp_node **ni = (irm_bp_node **)realloc(a->as.seq.it, nc * sizeof *ni);
		if (!ni)
			return -1;
		a->as.seq.it = ni;
		a->as.seq.cap = nc;
	}
	a->as.seq.it[a->as.seq.n++] = val;
	return 0;
}

irm_bp_node *irm_bp_dict_get(const irm_bp_node *d, const char *key)
{
	if (!d || d->t != IRM_BP_DICT || !key)
		return NULL;
	size_t klen = strlen(key);
	for (size_t i = 0; i < d->as.map.n; i++) {
		const irm_bp_node *k = d->as.map.k[i];
		if (k->t == IRM_BP_STRING && k->as.raw.n == klen &&
		    memcmp(k->as.raw.p, key, klen) == 0)
			return d->as.map.v[i];
	}
	return NULL;
}

irm_bp_node *irm_bp_array_get(const irm_bp_node *a, size_t idx)
{
	if (!a || a->t != IRM_BP_ARRAY || idx >= a->as.seq.n)
		return NULL;
	return a->as.seq.it[idx];
}

size_t irm_bp_array_len(const irm_bp_node *a)
{
	return (a && a->t == IRM_BP_ARRAY) ? a->as.seq.n : 0;
}

/* ------------------------------------------------------------------ */
/* Доступ к значениям                                                   */
/* ------------------------------------------------------------------ */

irm_bp_type irm_bp_type_of(const irm_bp_node *n)        { return n ? n->t : IRM_BP_NULL; }
int         irm_bp_bool_value(const irm_bp_node *n)      { return (n && n->t == IRM_BP_BOOL) ? n->as.b : 0; }
uint64_t    irm_bp_uint_value(const irm_bp_node *n)      { return (n && n->t == IRM_BP_UINT) ? n->as.u : 0; }
double      irm_bp_real_value(const irm_bp_node *n)
{
	if (n && (n->t == IRM_BP_REAL || n->t == IRM_BP_DATE))
		return n->as.d;
	return 0.0;
}
const char *irm_bp_string_ptr(const irm_bp_node *n, size_t *len)
{
	if (len)
		*len = 0;
	if (n && n->t == IRM_BP_STRING) {
		if (len)
			*len = n->as.raw.n;
		return (const char *)n->as.raw.p;
	}
	return NULL;
}
const void *irm_bp_data_ptr(const irm_bp_node *n, size_t *len)
{
	if (len)
		*len = 0;
	if (n && n->t == IRM_BP_DATA) {
		if (len)
			*len = n->as.raw.n;
		return n->as.raw.p;
	}
	return NULL;
}

/* ------------------------------------------------------------------ */
/* Ошибки чтения                                                        */
/* ------------------------------------------------------------------ */

static char g_err[64] = "";

static void set_err(const char *m)
{
	snprintf(g_err, sizeof g_err, "%s", m);
}

const char *irm_bp_error(void)
{
	return g_err;
}

/* ------------------------------------------------------------------ */
/* UTF-8 <-> UTF-16BE                                                   */
/* ------------------------------------------------------------------ */

static size_t utf8_takecp(const uint8_t *s, size_t n, uint32_t *cp)
{
	/* возвращает число съеденных байтов; cp=0xFFFD на невалидных данных */
	if (n == 0) {
		*cp = 0xFFFD;
		return 0;
	}
	uint8_t c = s[0];
	if (c < 0x80) {
		*cp = c;
		return 1;
	}
	size_t len;
	uint32_t v;
	if      (c >= 0xC2 && c <= 0xDF) { len = 2; v = c & 0x1Fu; }
	else if (c >= 0xE0 && c <= 0xEF) { len = 3; v = c & 0x0Fu; }
	else if (c >= 0xF0 && c <= 0xF4) { len = 4; v = c & 0x07u; }
	else { *cp = 0xFFFD; return 1; }
	if (len > n) {
		*cp = 0xFFFD;
		return 1;
	}
	for (size_t i = 1; i < len; i++) {
		if ((s[i] & 0xC0) != 0x80) {
			*cp = 0xFFFD;
			return i;
		}
		v = (v << 6) | (uint32_t)(s[i] & 0x3F);
	}
	if ((len == 2 && v < 0x80) || (len == 3 && v < 0x800) ||
	    (len == 4 && v < 0x10000) || v > 0x10FFFF ||
	    (v >= 0xD800 && v <= 0xDFFF)) {
		*cp = 0xFFFD;
		return len;
	}
	*cp = v;
	return len;
}

static size_t utf16_units(const uint8_t *s, size_t n)
{
	size_t units = 0, i = 0;
	while (i < n) {
		uint32_t cp;
		i += utf8_takecp(s + i, n - i, &cp);
		units += cp > 0xFFFF ? 2 : 1;
	}
	return units;
}

static void put_utf16be(uint8_t *out, size_t *o, uint32_t c)
{
	if (c > 0xFFFF) {
		c -= 0x10000;
		uint16_t hi = (uint16_t)(0xD800 | (c >> 10));
		uint16_t lo = (uint16_t)(0xDC00 | (c & 0x3FFu));
		out[(*o)++] = (uint8_t)(hi >> 8);
		out[(*o)++] = (uint8_t)hi;
		out[(*o)++] = (uint8_t)(lo >> 8);
		out[(*o)++] = (uint8_t)lo;
	} else {
		out[(*o)++] = (uint8_t)(c >> 8);
		out[(*o)++] = (uint8_t)c;
	}
}

static uint8_t *utf8_to_utf16be(const uint8_t *s, size_t n, size_t *out_units)
{
	size_t units = utf16_units(s, n);
	uint8_t *p = (uint8_t *)malloc(units * 2 + 2);
	if (!p)
		return NULL;
	size_t o = 0, i = 0;
	while (i < n) {
		uint32_t cp;
		i += utf8_takecp(s + i, n - i, &cp);
		put_utf16be(p, &o, cp);
	}
	if (out_units)
		*out_units = units;
	return p;
}

static void utf8_putcp(uint8_t *out, size_t *o, uint32_t c)
{
	if (c < 0x80)
		out[(*o)++] = (uint8_t)c;
	else if (c < 0x800) {
		out[(*o)++] = (uint8_t)(0xC0 | (c >> 6));
		out[(*o)++] = (uint8_t)(0x80 | (c & 0x3Fu));
	} else if (c < 0x10000) {
		out[(*o)++] = (uint8_t)(0xE0 | (c >> 12));
		out[(*o)++] = (uint8_t)(0x80 | ((c >> 6) & 0x3Fu));
		out[(*o)++] = (uint8_t)(0x80 | (c & 0x3Fu));
	} else {
		out[(*o)++] = (uint8_t)(0xF0 | (c >> 18));
		out[(*o)++] = (uint8_t)(0x80 | ((c >> 12) & 0x3Fu));
		out[(*o)++] = (uint8_t)(0x80 | ((c >> 6) & 0x3Fu));
		out[(*o)++] = (uint8_t)(0x80 | (c & 0x3Fu));
	}
}

static uint8_t *utf16be_to_utf8(const uint8_t *s, size_t units, size_t *out_n)
{
	uint8_t *p = (uint8_t *)malloc(units * 3 + 4);
	if (!p)
		return NULL;
	size_t o = 0, i = 0;
	while (i + 2 <= units * 2) {
		uint32_t c = ((uint32_t)s[i] << 8) | s[i + 1];
		i += 2;
		if (c >= 0xD800 && c <= 0xDBFF) {
			/* старший суррогат: ждём парный младший */
			if (i + 2 <= units * 2) {
				uint32_t c2 = ((uint32_t)s[i] << 8) | s[i + 1];
				if (c2 >= 0xDC00 && c2 <= 0xDFFF) {
					c = 0x10000u + ((c - 0xD800u) << 10) + (c2 - 0xDC00u);
					i += 2;
				} else {
					c = 0xFFFD;
				}
			} else {
				c = 0xFFFD;
			}
		} else if (c >= 0xDC00 && c <= 0xDFFF) {
			c = 0xFFFD; /* младший без старшего */
		}
		utf8_putcp(p, &o, c);
	}
	if (out_n)
		*out_n = o;
	return p;
}

/* ------------------------------------------------------------------ */
/* Writer                                                               */
/* ------------------------------------------------------------------ */

static uint64_t be_to_u64(const uint8_t *p, size_t n)
{
	uint64_t v = 0;
	for (size_t i = 0; i < n; i++)
		v = (v << 8) | p[i];
	return v;
}

static unsigned bytes_for(uint64_t v)
{
	unsigned b = 0;
	do {
		b++;
		v >>= 8;
	} while (v);
	return b;
}

static unsigned len_int_bytes(uint64_t v)
{
	if (v < 0x100)
		return 1;
	if (v < 0x10000)
		return 2;
	if (v <= 0xFFFFFFFFull)
		return 4;
	return 8;
}

static unsigned log2bytes(unsigned bytes)
{
	switch (bytes) {
	case 1:  return 0;
	case 2:  return 1;
	case 4:  return 2;
	default: return 3;
	}
}

static size_t count_enc_size(uint64_t v)
{
	if (v <= 14)
		return 1;
	return 2 + len_int_bytes(v); /* маркер 0xF + int-маркер + int */
}

struct wbuf {
	uint8_t *b;
	size_t n, cap;
	int err;
};

static void wbuf_grow(struct wbuf *w, size_t need)
{
	if (w->err || w->n + need <= w->cap)
		return;
	size_t nc = w->cap ? w->cap : 256;
	while (nc < w->n + need)
		nc *= 2;
	uint8_t *p = (uint8_t *)realloc(w->b, nc);
	if (!p) {
		w->err = 1;
		return;
	}
	w->b = p;
	w->cap = nc;
}

static void wbuf_putn(struct wbuf *w, const void *p, size_t n)
{
	wbuf_grow(w, n);
	if (w->err)
		return;
	memcpy(w->b + w->n, p, n);
	w->n += n;
}

static void wbuf_byte(struct wbuf *w, uint8_t c)
{
	wbuf_putn(w, &c, 1);
}

static void wbuf_be(struct wbuf *w, uint64_t v, unsigned nb)
{
	while (nb > 0) {
		nb--;
		wbuf_byte(w, (uint8_t)((v >> (8 * nb)) & 0xFFu));
	}
}

static size_t node_enc_size(const irm_bp_node *n, unsigned rfs)
{
	switch (n->t) {
	case IRM_BP_NULL:
	case IRM_BP_BOOL:
		return 1;
	case IRM_BP_UINT:
		return 1 + len_int_bytes(n->as.u);
	case IRM_BP_REAL:
	case IRM_BP_DATE:
		return 9;
	case IRM_BP_STRING: {
		uint8_t ascii = 1;
		for (size_t i = 0; i < n->as.raw.n; i++)
			if (n->as.raw.p[i] >= 0x80) {
				ascii = 0;
				break;
			}
		if (ascii)
			return count_enc_size(n->as.raw.n) + n->as.raw.n;
		size_t u = utf16_units(n->as.raw.p, n->as.raw.n);
		return count_enc_size(u) + 2 * u;
	}
	case IRM_BP_DATA:
		return count_enc_size(n->as.raw.n) + n->as.raw.n;
	case IRM_BP_ARRAY:
		return count_enc_size(n->as.seq.n) + n->as.seq.n * (size_t)rfs;
	case IRM_BP_DICT:
		return count_enc_size(n->as.map.n) + 2 * n->as.map.n * (size_t)rfs;
	}
	return 0;
}

struct wref {
	const irm_bp_node *n;
	size_t idx;
};

struct wctx {
	struct wbuf w;
	struct wref *refs; /* отсортирован по указателю узла */
	size_t nrefs;
	unsigned rfs;
};

static int wref_cmp(const void *pa, const void *pb)
{
	const struct wref *a = (const struct wref *)pa;
	const struct wref *b = (const struct wref *)pb;
	if ((uintptr_t)a->n < (uintptr_t)b->n)
		return -1;
	if ((uintptr_t)a->n > (uintptr_t)b->n)
		return 1;
	return 0;
}

static size_t ref_index(struct wctx *w, const irm_bp_node *n)
{
	size_t lo = 0, hi = w->nrefs;
	while (lo < hi) {
		size_t mid = lo + (hi - lo) / 2;
		if ((uintptr_t)w->refs[mid].n < (uintptr_t)n)
			lo = mid + 1;
		else
			hi = mid;
	}
	if (lo >= w->nrefs || w->refs[lo].n != n) {
		w->w.err = 1;
		return 0;
	}
	return w->refs[lo].idx;
}

/* запишет маркер+счётчик: base — старший ниббл (0x50..0xC0) */
static void put_len_count(struct wctx *w, uint8_t base, uint64_t v)
{
	if (v <= 14) {
		wbuf_byte(&w->w, (uint8_t)(base | (uint8_t)v));
		return;
	}
	wbuf_byte(&w->w, (uint8_t)(base | 0x0F));
	unsigned lb = len_int_bytes(v);
	wbuf_byte(&w->w, (uint8_t)(0x10 | log2bytes(lb)));
	wbuf_be(&w->w, v, lb);
}

static void put_refs(struct wctx *w, const irm_bp_node **kids, size_t cnt)
{
	for (size_t i = 0; i < cnt; i++) {
		size_t ridx = ref_index(w, kids[i]);
		if (w->w.err)
			return;
		wbuf_be(&w->w, ridx, w->rfs);
	}
}

static void emit_node(struct wctx *w, const irm_bp_node *n)
{
	if (w->w.err)
		return;
	switch (n->t) {
	case IRM_BP_NULL:
		wbuf_byte(&w->w, 0x00);
		break;
	case IRM_BP_BOOL:
		wbuf_byte(&w->w, n->as.b ? 0x09 : 0x08);
		break;
	case IRM_BP_UINT: {
		unsigned lb = len_int_bytes(n->as.u);
		wbuf_byte(&w->w, (uint8_t)(0x10 | log2bytes(lb)));
		wbuf_be(&w->w, n->as.u, lb);
		break;
	}
	case IRM_BP_REAL:
	case IRM_BP_DATE: {
		uint64_t bits;
		memcpy(&bits, &n->as.d, sizeof bits);
		wbuf_byte(&w->w, n->t == IRM_BP_DATE ? 0x33 : 0x23);
		wbuf_be(&w->w, bits, 8);
		break;
	}
	case IRM_BP_STRING: {
		uint8_t ascii = 1;
		for (size_t i = 0; i < n->as.raw.n; i++)
			if (n->as.raw.p[i] >= 0x80) {
				ascii = 0;
				break;
			}
		if (ascii) {
			put_len_count(w, 0x50, n->as.raw.n);
			wbuf_putn(&w->w, n->as.raw.p, n->as.raw.n);
		} else {
			size_t u = utf16_units(n->as.raw.p, n->as.raw.n);
			uint8_t *u16 = utf8_to_utf16be(n->as.raw.p, n->as.raw.n, &u);
			if (!u16) {
				w->w.err = 1;
				return;
			}
			put_len_count(w, 0x60, u);
			wbuf_putn(&w->w, u16, u * 2);
			free(u16);
		}
		break;
	}
	case IRM_BP_DATA:
		put_len_count(w, 0x40, n->as.raw.n);
		wbuf_putn(&w->w, n->as.raw.p, n->as.raw.n);
		break;
	case IRM_BP_ARRAY:
		put_len_count(w, 0xA0, n->as.seq.n);
		put_refs(w, (const irm_bp_node **)n->as.seq.it, n->as.seq.n);
		break;
	case IRM_BP_DICT:
		put_len_count(w, 0xD0, n->as.map.n);
		put_refs(w, (const irm_bp_node **)n->as.map.k, n->as.map.n);
		put_refs(w, (const irm_bp_node **)n->as.map.v, n->as.map.n);
		break;
	}
}

typedef struct {
	const irm_bp_node **a;
	size_t n, cap;
	int err;
} vctx;

/* pre-order: узлы-дети всегда идут после родителя */
static int collect(const irm_bp_node *n, vctx *c, int depth)
{
	if (depth > 512) {
		c->err = 1;
		return -1;
	}
	if (c->n == c->cap) {
		size_t nc = c->cap ? c->cap * 2 : 64;
		const irm_bp_node **p = (const irm_bp_node **)realloc(c->a, nc * sizeof *p);
		if (!p) {
			c->err = 1;
			return -1;
		}
		c->a = p;
		c->cap = nc;
	}
	c->a[c->n++] = n;
	switch (n->t) {
	case IRM_BP_ARRAY:
		for (size_t i = 0; i < n->as.seq.n; i++)
			if (collect(n->as.seq.it[i], c, depth + 1))
				return -1;
		break;
	case IRM_BP_DICT:
		for (size_t i = 0; i < n->as.map.n; i++) {
			if (collect(n->as.map.k[i], c, depth + 1))
				return -1;
			if (collect(n->as.map.v[i], c, depth + 1))
				return -1;
		}
		break;
	default:
		break;
	}
	return 0;
}

int irm_bp_write(const irm_bp_node *root, uint8_t **out, size_t *outlen)
{
	if (out)
		*out = NULL;
	if (outlen)
		*outlen = 0;
	if (!root || !out || !outlen)
		return -1;

	/* 1. собрать объекты */
	vctx v = {0};
	if (collect(root, &v, 0)) {
		free(v.a);
		return -1;
	}

	/* 2. ref-размер и офсеты */
	unsigned rfs = bytes_for(v.n ? v.n - 1 : 0);
	size_t *size = (size_t *)malloc(v.n * sizeof *size);
	uint64_t *off = (uint64_t *)malloc(v.n * sizeof *off);
	if (!size || !off) {
		free(v.a);
		free(size);
		free(off);
		return -1;
	}
	for (size_t i = 0; i < v.n; i++)
		size[i] = node_enc_size(v.a[i], rfs);
	off[0] = 8;
	for (size_t i = 1; i < v.n; i++)
		off[i] = off[i - 1] + size[i - 1];
	uint64_t offTable = off[v.n - 1] + size[v.n - 1];
	unsigned ois = bytes_for(off[v.n - 1]);
	if (ois < 1)
		ois = 1;

	/* 3. байты */
	struct wctx w = {0};
	w.rfs = rfs;
	w.nrefs = v.n;
	w.refs = (struct wref *)malloc(v.n * sizeof *w.refs);
	if (!w.refs) {
		free(v.a);
		free(size);
		free(off);
		return -1;
	}
	for (size_t i = 0; i < v.n; i++) {
		w.refs[i].n = v.a[i];
		w.refs[i].idx = i;
	}
	qsort(w.refs, v.n, sizeof *w.refs, wref_cmp);

	wbuf_putn(&w.w, "bplist00", 8);
	for (size_t i = 0; i < v.n && !w.w.err; i++)
		emit_node(&w, v.a[i]);
	for (size_t i = 0; i < v.n && !w.w.err; i++) {
		if (off[i] > w.w.n) { /* офсеты не по порядку — внутренняя ошибка */
			w.w.err = 1;
			break;
		}
		wbuf_be(&w.w, off[i], ois);
	}
	if (!w.w.err) {
		/* trailer (32B): 5 pad, sortVersion, offsetIntSize, objectRefSize,
		 * numObjects/topObject/offsetTableOffset (u64 BE) */
		wbuf_putn(&w.w, "\0\0\0\0\0", 5);
		wbuf_byte(&w.w, 0);                 /* sortVersion */
		wbuf_byte(&w.w, (uint8_t)ois);
		wbuf_byte(&w.w, (uint8_t)rfs);
		wbuf_be(&w.w, v.n, 8);              /* numObjects */
		wbuf_be(&w.w, 0, 8);                /* top object */
		wbuf_be(&w.w, offTable, 8);         /* offsetTableOffset */
	}

	int rc = -1;
	if (!w.w.err && w.w.n == (size_t)offTable + v.n * ois + 32) {
		*out = w.w.b;
		*outlen = w.w.n;
		rc = 0;
	} else {
		free(w.w.b);
	}
	free(w.refs);
	free(v.a);
	free(size);
	free(off);
	return rc;
}

/* ------------------------------------------------------------------ */
/* Reader                                                               */
/* ------------------------------------------------------------------ */

struct rctx {
	const uint8_t *b;
	size_t n;
	int err;
	unsigned rfs;
	uint64_t numObjects;
	const uint64_t *offs;
};

static int rneed(struct rctx *c, uint64_t off, uint64_t len)
{
	if (c->err || off > c->n || len > c->n - off) {
		c->err = 1;
		return 0;
	}
	return 1;
}

/* счётчик/длина: lo-ноббл маркера (для utf16 — число код. единиц) */
static uint64_t rcount(struct rctx *c, uint64_t *off, unsigned lo)
{
	if (lo < 0x0F)
		return lo;
	if (!rneed(c, *off, 1))
		return 0;
	uint8_t m = c->b[(*off)++];
	if ((m >> 4) != 0x01) {
		c->err = 1;
		return 0;
	}
	unsigned k = m & 0x0F;
	if (k > 3) {
		c->err = 1;
		return 0;
	}
	uint64_t sz = (uint64_t)1 << k;
	if (!rneed(c, *off, sz))
		return 0;
	uint64_t v = be_to_u64(c->b + *off, (size_t)sz);
	*off += sz;
	return v;
}

static uint64_t rref(struct rctx *c, uint64_t *off)
{
	if (!rneed(c, *off, c->rfs))
		return UINT64_MAX;
	uint64_t v = be_to_u64(c->b + *off, c->rfs);
	*off += c->rfs;
	if (v >= c->numObjects) {
		c->err = 1;
		return UINT64_MAX;
	}
	return v;
}

static irm_bp_node *robj(struct rctx *c, uint64_t off, int depth)
{
	if (depth > 512 || c->err)
		goto bad;
	if (off >= c->n)
		goto bad;
	uint8_t m = c->b[off];
	unsigned hi = m >> 4;
	unsigned lo = m & 0x0F;
	uint64_t o = off + 1;
	irm_bp_node *n = NULL;

	switch (hi) {
	case 0x0: /* null | bool (0x08=false, 0x09=true) */
		if (lo == 8 || lo == 9) {
			n = node_new(IRM_BP_BOOL);
			if (!n)
				goto oom;
			n->as.b = (lo == 9);
			return n;
		}
		if (lo == 0)
			return node_new(IRM_BP_NULL);
		goto bad;
	case 0x1: { /* uint */
		if (lo > 3)
			goto bad;
		uint64_t sz = (uint64_t)1 << lo;
		if (!rneed(c, o, sz))
			goto bad;
		n = node_new(IRM_BP_UINT);
		if (!n)
			goto oom;
		n->as.u = be_to_u64(c->b + o, (size_t)sz);
		return n;
	}
	case 0x2: { /* real */
		if (lo != 2 && lo != 3)
			goto bad;
		uint64_t sz = (uint64_t)1 << lo;
		if (!rneed(c, o, sz))
			goto bad;
		double d;
		if (lo == 3) {
			uint64_t bits = be_to_u64(c->b + o, 8);
			memcpy(&d, &bits, 8);
		} else {
			uint32_t bits = (uint32_t)be_to_u64(c->b + o, 4);
			float f;
			memcpy(&f, &bits, 4);
			d = (double)f;
		}
		n = node_new(IRM_BP_REAL);
		if (!n)
			goto oom;
		n->as.d = d;
		return n;
	}
	case 0x3: { /* date */
		if (lo != 3)
			goto bad;
		if (!rneed(c, o, 8))
			goto bad;
		uint64_t bits = be_to_u64(c->b + o, 8);
		double d;
		memcpy(&d, &bits, 8);
		n = node_new(IRM_BP_DATE);
		if (!n)
			goto oom;
		n->as.d = d;
		return n;
	}
	case 0x5: { /* ASCII string */
		uint64_t len = rcount(c, &o, lo);
		if (c->err || !rneed(c, o, len))
			goto bad;
		n = irm_bp_string_bytes((const char *)c->b + o, (size_t)len);
		if (!n)
			goto oom;
		return n;
	}
	case 0x6: { /* UTF-16BE string */
		uint64_t units = rcount(c, &o, lo);
		if (c->err || units > (uint64_t)(SIZE_MAX / 2) || !rneed(c, o, units * 2))
			goto bad;
		size_t un = 0;
		uint8_t *u8 = utf16be_to_utf8(c->b + o, (size_t)units, &un);
		if (!u8)
			goto oom;
		n = irm_bp_string_bytes((const char *)u8, un);
		free(u8);
		if (!n)
			goto oom;
		return n;
	}
	case 0x4: { /* data */
		uint64_t len = rcount(c, &o, lo);
		if (c->err || !rneed(c, o, len))
			goto bad;
		n = irm_bp_data(c->b + o, (size_t)len);
		if (!n)
			goto oom;
		return n;
	}
	case 0xA: { /* array */
		uint64_t cnt = rcount(c, &o, lo);
		if (c->err || cnt > c->numObjects)
			goto bad;
		n = node_new(IRM_BP_ARRAY);
		if (!n)
			goto oom;
		if (cnt == 0)
			return n;
		n->as.seq.it = (irm_bp_node **)calloc((size_t)cnt, sizeof *n->as.seq.it);
		if (!n->as.seq.it) {
			irm_bp_free(n);
			goto oom;
		}
		n->as.seq.n = (size_t)cnt;
		n->as.seq.cap = (size_t)cnt;
		for (uint64_t i = 0; i < cnt; i++) {
			uint64_t r = rref(c, &o);
			if (r == UINT64_MAX)
				goto bad_child;
			irm_bp_node *ch = robj(c, c->offs[r], depth + 1);
			if (!ch)
				goto bad_child;
			n->as.seq.it[i] = ch;
		}
		return n;
	}
	case 0xD: { /* dict: n ключей-refs затем n значений-refs */
		uint64_t cnt = rcount(c, &o, lo);
		if (c->err || cnt > c->numObjects)
			goto bad;
		n = node_new(IRM_BP_DICT);
		if (!n)
			goto oom;
		if (cnt == 0)
			return n;
		uint64_t *krefs = (uint64_t *)malloc((size_t)cnt * sizeof *krefs);
		uint64_t *vrefs = (uint64_t *)malloc((size_t)cnt * sizeof *vrefs);
		n->as.map.k = (irm_bp_node **)calloc((size_t)cnt, sizeof *n->as.map.k);
		n->as.map.v = (irm_bp_node **)calloc((size_t)cnt, sizeof *n->as.map.v);
		if (!krefs || !vrefs || !n->as.map.k || !n->as.map.v) {
			free(krefs);
			free(vrefs);
			irm_bp_free(n);
			goto oom;
		}
		n->as.map.n = (size_t)cnt;
		n->as.map.cap = (size_t)cnt;
		for (uint64_t i = 0; i < cnt; i++) {
			krefs[i] = rref(c, &o);
			if (krefs[i] == UINT64_MAX)
				goto bad_child_lv;
		}
		for (uint64_t i = 0; i < cnt; i++) {
			vrefs[i] = rref(c, &o);
			if (vrefs[i] == UINT64_MAX)
				goto bad_child_lv;
		}
		for (uint64_t i = 0; i < cnt; i++) {
			irm_bp_node *k = robj(c, c->offs[krefs[i]], depth + 1);
			if (!k || k->t != IRM_BP_STRING) {
				if (k && k->t != IRM_BP_STRING)
					c->err = 1;
				irm_bp_free(k);
				goto bad_child_lv;
			}
			irm_bp_node *v = robj(c, c->offs[vrefs[i]], depth + 1);
			if (!v)
				goto bad_child_lv;
			n->as.map.k[i] = k;
			n->as.map.v[i] = v;
		}
		free(krefs);
		free(vrefs);
		return n;
	bad_child_lv:
		free(krefs);
		free(vrefs);
		irm_bp_free(n);
		goto bad;
	}
	default:
		goto bad;
	}

bad_child:
	irm_bp_free(n);
	goto bad;
oom:
	c->err = 1;
	return NULL;
bad:
	c->err = 1;
	return NULL;
}

irm_bp_node *irm_bp_read(const uint8_t *buf, size_t len)
{
	g_err[0] = 0;
	if (!buf || len < 8 + 32) {
		set_err("too short");
		return NULL;
	}
	if (memcmp(buf, "bplist00", 8) != 0) {
		set_err("bad magic");
		return NULL;
	}
	/* трейлер (32B): [5 pad][sortVer][ois][rfs][numObj u64][top u64][offTable u64] */
	const uint8_t *t = buf + len - 32;
	unsigned ois = t[6];
	unsigned rfs = t[7];
	uint64_t numObjects = be_to_u64(t + 8, 8);
	uint64_t topObject = be_to_u64(t + 16, 8);
	uint64_t offTable = be_to_u64(t + 24, 8);
	if (ois == 0 || ois > 8 || rfs == 0 || rfs > 8) {
		set_err("bad trailer sizes");
		return NULL;
	}
	if (numObjects == 0) {
		set_err("no objects");
		return NULL;
	}
	if (numObjects > (uint64_t)SIZE_MAX / sizeof(uint64_t)) {
		set_err("numObjects overflow");
		return NULL;
	}
	if (numObjects > (len - 32 - offTable) / ois) {
		set_err("offset table truncated");
		return NULL;
	}
	if (offTable < 9 || offTable > len - 32) {
		set_err("offset table out of range");
		return NULL;
	}
	if (topObject >= numObjects) {
		set_err("bad top object");
		return NULL;
	}
	uint64_t *offs = (uint64_t *)malloc((size_t)numObjects * sizeof *offs);
	if (!offs) {
		set_err("oom");
		return NULL;
	}
	for (uint64_t i = 0; i < numObjects; i++) {
		uint64_t v = be_to_u64(buf + offTable + i * ois, ois);
		if (v < 8 || v >= offTable) {
			free(offs);
			set_err("bad object offset");
			return NULL;
		}
		offs[i] = v;
	}

	struct rctx c = {0};
	c.b = buf;
	c.n = len;
	c.rfs = rfs;
	c.numObjects = numObjects;
	c.offs = offs;

	irm_bp_node *root = robj(&c, offs[topObject], 0);
	free(offs);
	if (c.err || !root) {
		if (!g_err[0])
			set_err("bad object");
		irm_bp_free(root);
		return NULL;
	}
	return root;
}

/* Итерация по dict (порядок вставки; ключи = внутренние STRING-узлы). */
size_t irm_bp_dict_count(const irm_bp_node *d)
{
	return (d && d->t == IRM_BP_DICT) ? d->as.map.n : 0;
}

const char *irm_bp_dict_key_at(const irm_bp_node *d, size_t idx)
{
	if (!d || d->t != IRM_BP_DICT || idx >= d->as.map.n)
		return NULL;
	const irm_bp_node *k = d->as.map.k[idx];
	if (!k || k->t != IRM_BP_STRING)
		return NULL;
	return (const char *)k->as.raw.p;
}

irm_bp_node *irm_bp_dict_val_at(const irm_bp_node *d, size_t idx)
{
	if (!d || d->t != IRM_BP_DICT || idx >= d->as.map.n)
		return NULL;
	return d->as.map.v[idx];
}

/* Глубокая копия. */
static irm_bp_node *dup_node(const irm_bp_node *n)
{
	if (!n)
		return NULL;
	switch (n->t) {
	case IRM_BP_NULL:
		return node_new(IRM_BP_NULL);
	case IRM_BP_BOOL:
		return irm_bp_bool(n->as.b);
	case IRM_BP_UINT:
		return irm_bp_uint(n->as.u);
	case IRM_BP_REAL:
		return irm_bp_real(n->as.d);
	case IRM_BP_DATE:
		return irm_bp_date(n->as.d);
	case IRM_BP_STRING:
		return irm_bp_string_bytes((const char *)n->as.raw.p,
					   n->as.raw.n);
	case IRM_BP_DATA:
		return irm_bp_data(n->as.raw.p, n->as.raw.n);
	case IRM_BP_ARRAY: {
		irm_bp_node *a = node_new(IRM_BP_ARRAY);
		if (!a)
			return NULL;
		for (size_t i = 0; i < n->as.seq.n; i++) {
			irm_bp_node *c = dup_node(n->as.seq.it[i]);
			if (!c || irm_bp_array_add(a, c) != 0) {
				irm_bp_free(c);
				irm_bp_free(a);
				return NULL;
			}
		}
		return a;
	}
	case IRM_BP_DICT: {
		irm_bp_node *d = node_new(IRM_BP_DICT);
		if (!d)
			return NULL;
		for (size_t i = 0; i < n->as.map.n; i++) {
			const irm_bp_node *k = n->as.map.k[i];
			irm_bp_node *c = dup_node(n->as.map.v[i]);
			if (!c ||
			    irm_bp_dict_set(
				    d, (const char *)k->as.raw.p, c) != 0) {
				irm_bp_free(c);
				irm_bp_free(d);
				return NULL;
			}
		}
		return d;
	}
	}
	return NULL;
}

irm_bp_node *irm_bp_dup(const irm_bp_node *n)
{
	return dup_node(n);
}
