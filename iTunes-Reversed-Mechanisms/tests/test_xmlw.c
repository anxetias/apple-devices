/* Юнит-тест XML-writer (DL-пейлоады, E06 §1). Проверки:
 *   1) точный prolog/DOCTYPE/<plist> (CF-совместимый вид);
 *   2) round-trip через СВОЙ irm_xml_read (двустороннее равенство);
 *   3) byte-точечные спецслучаи: escape, пустые dict/array, NULL→<null/>,
 *      integer/real/bool/date/data;
 *   4) DLMessageVersionExchange: ["DLMessageVersionExchange","DLVersionsOk",400]
 *      сериализуется и читается обратно (DL-фрейм как в E06 §2). */
#include "libirm/bplist.h"
#include "libirm/xmlplist.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

static int g_fail;

#define CHECK(c)                                                               \
	do {                                                                   \
		if (!(c)) {                                                    \
			fprintf(stderr, "FAIL %d: %s\n", __LINE__, #c);        \
			g_fail++;                                              \
		}                                                              \
	} while (0)

static void check_prolog(const uint8_t *xml, size_t n)
{
	static const char p1[] =
		"<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n"
		"<!DOCTYPE plist PUBLIC \"-//Apple//DTD PLIST 1.0//EN\" "
		"\"http://www.apple.com/DTDs/PropertyList-1.0.dtd\">\n"
		"<plist version=\"1.0\">\n";
	CHECK(n >= sizeof p1 && memcmp(xml, p1, sizeof p1 - 1) == 0);
}

/* логическое сравнение trees (оба — samebuilt by us). */
static int cmp_nodes(const irm_bp_node *a, const irm_bp_node *b)
{
	if (!a || !b)
		return a == b;
	if (irm_bp_type_of(a) != irm_bp_type_of(b))
		return 0;
	switch (irm_bp_type_of(a)) {
	case IRM_BP_NULL:
		return 1;
	case IRM_BP_BOOL:
		return irm_bp_bool_value(a) == irm_bp_bool_value(b);
	case IRM_BP_UINT:
		return irm_bp_uint_value(a) == irm_bp_uint_value(b);
	case IRM_BP_REAL:
	case IRM_BP_DATE:
		return irm_bp_real_value(a) == irm_bp_real_value(b);
	case IRM_BP_STRING: {
		size_t la = 0, lb = 0;
		const char *sa = irm_bp_string_ptr(a, &la);
		const char *sb = irm_bp_string_ptr(b, &lb);
		return la == lb && memcmp(sa, sb, la) == 0;
	}
	case IRM_BP_DATA: {
		size_t la = 0, lb = 0;
		const uint8_t *da = irm_bp_data_ptr(a, &la);
		const uint8_t *db = irm_bp_data_ptr(b, &lb);
		return la == lb && memcmp(da, db, la) == 0;
	}
	case IRM_BP_ARRAY: {
		size_t na = irm_bp_array_len(a), nb = irm_bp_array_len(b);
		if (na != nb)
			return 0;
		for (size_t i = 0; i < na; i++)
			if (!cmp_nodes(irm_bp_array_get(a, i),
				       irm_bp_array_get(b, i)))
				return 0;
		return 1;
	}
	case IRM_BP_DICT: {
		size_t na = irm_bp_dict_count(a), nb = irm_bp_dict_count(b);
		if (na != nb)
			return 0;
		for (size_t i = 0; i < na; i++) {
			const char *k = irm_bp_dict_key_at(a, i);
			if (!cmp_nodes(irm_bp_dict_val_at(a, i),
				       irm_bp_dict_get(b, k)))
				return 0;
		}
		return 1;
	}
	}
	return 0;
}

static void pr_diff_deep(const irm_bp_node *a, const irm_bp_node *b,
			 int depth)
{
	if (depth > 6 || cmp_nodes(a, b))
		return;
	if (irm_bp_type_of(a) == IRM_BP_ARRAY) {
		size_t nn = irm_bp_array_len(a);
		for (size_t i = 0; i < nn; i++)
			pr_diff_deep(irm_bp_array_get(a, i),
				     irm_bp_array_get(b, i), depth + 1);
	} else if (irm_bp_type_of(a) == IRM_BP_DICT) {
		size_t nn = irm_bp_dict_count(a);
		for (size_t i = 0; i < nn; i++) {
			const char *k = irm_bp_dict_key_at(a, i);
			pr_diff_deep(irm_bp_dict_val_at(a, i),
				     irm_bp_dict_get(b, k), depth + 1);
		}
	} else {
		const char *ta =
			irm_bp_type_of(a) == IRM_BP_UINT ? "uint" :
			irm_bp_type_of(a) == IRM_BP_REAL ? "real" :
			irm_bp_type_of(a) == IRM_BP_DATE ? "date" :
			irm_bp_type_of(a) == IRM_BP_BOOL ? "bool" :
			irm_bp_type_of(a) == IRM_BP_DATA ? "data" :
			irm_bp_type_of(a) == IRM_BP_STRING ? "str" :
			irm_bp_type_of(a) == IRM_BP_NULL ? "null" : "?";
		if (irm_bp_type_of(a) == IRM_BP_UINT)
			fprintf(stderr, "  leaf %s: %llu vs %llu\n", ta,
				(unsigned long long)irm_bp_uint_value(a),
				(unsigned long long)irm_bp_uint_value(b));
		else if (irm_bp_type_of(a) == IRM_BP_DATA) {
			size_t la = 0, lb = 0;
			const uint8_t *da = irm_bp_data_ptr(a, &la);
			const uint8_t *db = irm_bp_data_ptr(b, &lb);
			fprintf(stderr, "  leaf data: %zu vs %zu; ", la, lb);
			for (size_t i = 0; i < la && i < lb; i++)
				if (da[i] != db[i])
					fprintf(stderr,
						"[%zu]: %02x vs %02x ", i,
						da[i], db[i]);
			fprintf(stderr, "\n");
		} else {
			fprintf(stderr, "  leaf %s\n", ta);
		}
	}
}

static void round_trip(const irm_bp_node *src, const char *what)
{
	uint8_t *xml = NULL;
	size_t n = 0;
	if (irm_xml_write(src, &xml, &n) != 0) {
		fprintf(stderr, "FAIL: %s: write failed\n", what);
		g_fail++;
		return;
	}
	irm_bp_node *back = irm_xml_read(xml, n);
	if (!back) {
		fprintf(stderr, "FAIL %d: %s: read-back: %s\n", __LINE__, what,
			irm_xml_error());
		g_fail++;
		free(xml);
		return;
	}
	if (!cmp_nodes(src, back)) {
		fprintf(stderr, "diff %s: type %d/%d\nxml=%.*s\ndeep:\n", what,
			(int)irm_bp_type_of(src), (int)irm_bp_type_of(back),
			(int)(n < 512 ? n : 512), (char *)xml);
		pr_diff_deep(src, back, 0);
		g_fail++;
	} else {
		irm_bp_free(back);
		free(xml);
		return;
	}
	irm_bp_free(back);
	free(xml);
}

int main(void)
{
	/* --- 1) точный eager-экилруг: escape --- */
	irm_bp_node *s = irm_bp_string("a<b>&amp;\"c\"\r\n");
	CHECK(s != NULL);
	uint8_t *xml = NULL;
	size_t n = 0;
	CHECK(irm_xml_write(s, &xml, &n) == 0);
	const char *exp =
		"<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n"
		"<!DOCTYPE plist PUBLIC \"-//Apple//DTD PLIST 1.0//EN\" "
		"\"http://www.apple.com/DTDs/PropertyList-1.0.dtd\">\n"
		"<plist version=\"1.0\">\n"
		"<string>a&lt;b&gt;&amp;amp;\"c\"&#13;\n</string>\n"
		"</plist>\n";
	CHECK(n == strlen(exp));
	CHECK(n && memcmp(xml, exp, n) == 0);
	round_trip(s, "escape-string");
	free(xml);
	irm_bp_free(s);

	/* --- 2) scalar set --- */
	/* integer / bool / real / date / data / null */
	{
		irm_bp_node *arr = irm_bp_array();
		irm_bp_array_add(arr, irm_bp_uint(400));
		irm_bp_array_add(arr, irm_bp_uint(18446744073709551615ULL));
		irm_bp_array_add(arr, irm_bp_bool(1));
		irm_bp_array_add(arr, irm_bp_bool(0));
		irm_bp_array_add(arr, irm_bp_real(0.5));
		irm_bp_array_add(arr, irm_bp_date(486649392.0));
		const uint8_t bytes[] = { 0x00, 0xFF, 0xDE, 0xAD, 0xBE, 0xEF };
		irm_bp_array_add(arr, irm_bp_data(bytes, sizeof bytes));
		irm_bp_array_add(arr, NULL); /* NULL-узел */
		round_trip(arr, "scalars");
		irm_bp_free(arr);
	}

	/* --- 3) бbrким: пустые узлы (byte-точные) --- */
	{
		irm_bp_node *d = irm_bp_dict();
		CHECK(irm_xml_write(d, &xml, &n) == 0 &&
		      strstr((char *)xml, "<dict/>\n") != NULL);
		free(xml);
		irm_bp_free(d);
		irm_bp_node *a = irm_bp_array();
		CHECK(irm_xml_write(a, &xml, &n) == 0 &&
		      strstr((char *)xml, "<array/>\n") != NULL);
		free(xml);
		irm_bp_free(a);
	}

	/* --- 4) dict: ключ с escape + вложенность + round-trip --- */
	{
		irm_bp_node *d = irm_bp_dict();
		irm_bp_node *inner = irm_bp_dict();
		irm_bp_dict_set(inner, "k<1>", irm_bp_string("v&w"));
		irm_bp_dict_set(d, "Commands<XML>", inner);
		irm_bp_dict_set(d, "Version", irm_bp_uint(26));
		round_trip(d, "nested-dict");
		irm_bp_free(d);
	}

	/* --- 5) DLMessageVersionExchange (E06 §2) --- */
	{
		irm_bp_node *msg = irm_bp_array();
		irm_bp_array_add(msg, irm_bp_string("DLMessageVersionExchange"));
		irm_bp_array_add(msg, irm_bp_string("DLVersionsOk"));
		irm_bp_array_add(msg, irm_bp_uint(400));
		CHECK(irm_xml_write(msg, &xml, &n) == 0);
		check_prolog(xml, n);
		CHECK(n && strstr((char *)xml,
				  "<integer>400</integer>") != NULL);
		CHECK(n && strstr((char *)xml,
				  "<string>DLVersionsOk</string>") != NULL);
		round_trip(msg, "version-exchange");
		irm_bp_free(msg);
		free(xml);
	}

	/* --- 6) data-узлы всех остатков %3 (b64-рендер/обратное чтение). */
	{
		uint8_t buf[83];
		for (size_t i = 0; i < sizeof buf; i++)
			buf[i] = (uint8_t)(i * 7 + 3);
		const size_t lens[] = { 0, 1, 2, 3, 4, 5, 6, 8, 83 };
		for (size_t t = 0; t < sizeof lens / sizeof lens[0]; t++) {
			irm_bp_node *d = irm_bp_data(buf, lens[t]);
			CHECK(d != NULL);
			char what[32];
			snprintf(what, sizeof what, "data-%zu", lens[t]);
			round_trip(d, what);
			irm_bp_free(d);
		}
	}

	printf(g_fail ? "test_xmlw: FAIL\n" : "test_xmlw: OK\n");
	return g_fail;
}
