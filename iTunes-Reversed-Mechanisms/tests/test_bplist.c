/* tests/test_bplist.c — round-trip тест bplist00 writer/reader.
 *
 *   ./test_bplist [SAMPLE_FILE] [EXTERNAL_1.bplist ...]
 *     SAMPLE_FILE    — записать туда сгенерированный plist (для кросс-проверки
 *                      python3 -c "import plistlib; print(plistlib.load(open(f,'rb')))")
 *     EXTERNAL_*     — распарсить позилен Apple-материалом (plistlib.dumps FMT_BINARY)
 */
#include "libirm/bplist.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

static int g_fail = 0;

#define CHECK(c)                                                           \
	do {                                                               \
		if (!(c)) {                                                \
			fprintf(stderr, "FAIL %d: %s\n", __LINE__, #c);    \
			g_fail = 1;                                        \
		}                                                          \
	} while (0)

static size_t rd_file(const char *path, uint8_t **out)
{
	FILE *f = fopen(path, "rb");
	if (!f)
		return 0;
	fseek(f, 0, SEEK_END);
	long sz = ftell(f);
	fseek(f, 0, SEEK_SET);
	if (sz < 0) {
		fclose(f);
		return 0;
	}
	uint8_t *b = (uint8_t *)malloc((size_t)sz ? (size_t)sz : 1);
	if (!b) {
		fclose(f);
		return 0;
	}
	size_t got = fread(b, 1, (size_t)sz, f);
	fclose(f);
	if (got != (size_t)sz) {
		free(b);
		return 0;
	}
	*out = b;
	return (size_t)sz;
}

static const char *tname(irm_bp_type t)
{
	switch (t) {
	case IRM_BP_NULL:   return "null";
	case IRM_BP_BOOL:   return "bool";
	case IRM_BP_UINT:   return "uint";
	case IRM_BP_REAL:   return "real";
	case IRM_BP_DATE:   return "date";
	case IRM_BP_STRING: return "string";
	case IRM_BP_DATA:   return "data";
	case IRM_BP_ARRAY:  return "array";
	case IRM_BP_DICT:   return "dict";
	}
	return "?";
}

static void dump(const irm_bp_node *n, int depth, size_t *count)
{
	(*count)++;
	for (int i = 0; i < depth; i++)
		putchar(' ');
	if (!n) {
		puts("(nil)");
		return;
	}
	irm_bp_type t = irm_bp_type_of(n);
	switch (t) {
	case IRM_BP_BOOL:  printf("bool=%d\n", irm_bp_bool_value(n)); break;
	case IRM_BP_UINT:  printf("uint=%llu\n", (unsigned long long)irm_bp_uint_value(n)); break;
	case IRM_BP_REAL:  printf("real=%.3f\n", irm_bp_real_value(n)); break;
	case IRM_BP_DATE:  printf("date=%.3f\n", irm_bp_real_value(n)); break;
	case IRM_BP_STRING: {
		size_t l;
		const char *s = irm_bp_string_ptr(n, &l);
		printf("string='%.*s'\n", (int)l, s);
		break;
	}
	case IRM_BP_DATA: {
		size_t l;
		irm_bp_data_ptr(n, &l);
		printf("data(%zu)\n", l);
		break;
	}
	case IRM_BP_ARRAY:
		printf("array[%zu]\n", irm_bp_array_len(n));
		for (size_t i = 0; i < irm_bp_array_len(n); i++)
			dump(irm_bp_array_get(n, i), depth + 1, count);
		break;
	case IRM_BP_DICT: {
		/* dump по ключам через перебор публичного API невозможен —
		 * печатаем только число пар; ключи проверяются поиском */
		printf("dict\n");
		break;
	}
	default:
		printf("%s\n", tname(t));
		break;
	}
}

int main(int argc, char **argv)
{
	/* ---- 1. дерево: все типы + UTF-8 (→ UTF-16BE путь) + большие длины */
	irm_bp_node *root = irm_bp_dict();
	CHECK(root != NULL);
	CHECK(irm_bp_dict_set(root, "Version", irm_bp_uint(4)) == 0);
	CHECK(irm_bp_dict_set(root, "Port", irm_bp_uint(62078)) == 0);
	CHECK(irm_bp_dict_set(root, "Big", irm_bp_uint(0xFFFFFFFFFFFFFFFFull)) == 0);
	CHECK(irm_bp_dict_set(root, "Locked", irm_bp_bool(1)) == 0);
	CHECK(irm_bp_dict_set(root, "SSL", irm_bp_bool(0)) == 0);
	CHECK(irm_bp_dict_set(root, "Rate", irm_bp_real(44100.0)) == 0);
	CHECK(irm_bp_dict_set(root, "When", irm_bp_date(700000000.5)) == 0);
	CHECK(irm_bp_dict_set(root, "Title", irm_bp_string("irm bplist ✓")) == 0);
	CHECK(irm_bp_dict_set(root, "Long",
			      irm_bp_string("a long enough string to force the 0xF "
					    "length encoding path in the writer")) == 0);
	irm_bp_node *arr = irm_bp_array();
	CHECK(arr && irm_bp_array_add(arr, irm_bp_uint(1)) == 0);
	CHECK(irm_bp_array_add(arr, irm_bp_uint(0)) == 0);
	CHECK(irm_bp_array_add(arr, irm_bp_string("x")) == 0);
	CHECK(irm_bp_dict_set(root, "Items", arr) == 0);
	uint8_t blob[300];
	for (size_t i = 0; i < sizeof blob; i++)
		blob[i] = (uint8_t)(i & 0xFF);
	CHECK(irm_bp_dict_set(root, "Blob", irm_bp_data(blob, sizeof blob)) == 0);
	irm_bp_node *sub = irm_bp_dict();
	CHECK(sub && irm_bp_dict_set(sub, "a", irm_bp_string("b")) == 0);
	CHECK(irm_bp_dict_set(root, "Sub", sub) == 0);

	/* ---- 2. сериализация */
	uint8_t *buf = NULL;
	size_t blen = 0;
	CHECK(irm_bp_write(root, &buf, &blen) == 0);
	if (buf)
		CHECK(memcmp(buf, "bplist00", 8) == 0);
	CHECK(blen > 8 + 33);
	if (argc > 1) { /* сэмпл наружу */
		FILE *f = fopen(argv[1], "wb");
		CHECK(f && fwrite(buf, 1, blen, f) == blen);
		if (f)
			fclose(f);
	}

	/* ---- 3. парс back */
	irm_bp_node *back = irm_bp_read(buf, blen);
	CHECK(back != NULL);
	if (!back)
		fprintf(stderr, "read err: %s\n", irm_bp_error());
	CHECK(irm_bp_type_of(back) == IRM_BP_DICT);
	irm_bp_node *v = irm_bp_dict_get(back, "Version");
	CHECK(v && irm_bp_type_of(v) == IRM_BP_UINT && irm_bp_uint_value(v) == 4);
	v = irm_bp_dict_get(back, "Port");
	CHECK(v && irm_bp_uint_value(v) == 62078);
	v = irm_bp_dict_get(back, "Big");
	CHECK(v && irm_bp_uint_value(v) == 0xFFFFFFFFFFFFFFFFull);
	v = irm_bp_dict_get(back, "Locked");
	CHECK(v && irm_bp_type_of(v) == IRM_BP_BOOL && irm_bp_bool_value(v) == 1);
	v = irm_bp_dict_get(back, "SSL");
	CHECK(v && irm_bp_type_of(v) == IRM_BP_BOOL && irm_bp_bool_value(v) == 0);
	v = irm_bp_dict_get(back, "Rate");
	CHECK(v && irm_bp_type_of(v) == IRM_BP_REAL && irm_bp_real_value(v) == 44100.0);
	v = irm_bp_dict_get(back, "When");
	CHECK(v && irm_bp_type_of(v) == IRM_BP_DATE && irm_bp_real_value(v) == 700000000.5);
	v = irm_bp_dict_get(back, "Title");
	CHECK(v && irm_bp_type_of(v) == IRM_BP_STRING);
	size_t sl;
	const char *sp = v ? irm_bp_string_ptr(v, &sl) : NULL;
	CHECK(sp && sl == strlen("irm bplist ✓") &&
	      memcmp(sp, "irm bplist ✓", sl) == 0);
	v = irm_bp_dict_get(back, "Long");
	CHECK(v && irm_bp_type_of(v) == IRM_BP_STRING &&
	      (sl = 0, sp = irm_bp_string_ptr(v, &sl)) && sl > 14);
	v = irm_bp_dict_get(back, "Items");
	CHECK(v && irm_bp_array_len(v) == 3);
	CHECK(v && irm_bp_uint_value(irm_bp_array_get(v, 0)) == 1);
	CHECK(v && irm_bp_uint_value(irm_bp_array_get(v, 1)) == 0);
	CHECK(v && irm_bp_array_get(v, 2) &&
	      irm_bp_type_of(irm_bp_array_get(v, 2)) == IRM_BP_STRING);
	CHECK(v && irm_bp_array_get(v, 3) == NULL);
	v = irm_bp_dict_get(back, "Blob");
	CHECK(v && irm_bp_type_of(v) == IRM_BP_DATA);
	if (v) {
		size_t dl;
		const uint8_t *dp = (const uint8_t *)irm_bp_data_ptr(v, &dl);
		CHECK(dl == sizeof blob && dp);
		uint8_t ok = 1;
		for (size_t i = 0; dp && i < dl; i++)
			if (dp[i] != (uint8_t)(i & 0xFF))
				ok = 0;
		CHECK(ok);
	}
	v = irm_bp_dict_get(back, "Sub");
	CHECK(v && irm_bp_type_of(v) == IRM_BP_DICT);
	v = v ? irm_bp_dict_get(v, "a") : NULL;
	CHECK(v && irm_bp_type_of(v) == IRM_BP_STRING &&
	      (sl = 0, sp = irm_bp_string_ptr(v, &sl)) && sl == 1 && sp[0] == 'b');
	CHECK(irm_bp_dict_get(back, "NoSuchKey") == NULL);

	/* ---- 4. стабильность: re-encode распарсенного */
	uint8_t *buf2 = NULL;
	size_t b2 = 0;
	CHECK(irm_bp_write(back, &buf2, &b2) == 0);
	irm_bp_node *back2 = irm_bp_read(buf2, b2);
	CHECK(back2 != NULL);

	/* ---- 5. облом-тесты */
	CHECK(irm_bp_read((const uint8_t *)"PLIST00", 8) == NULL);
	CHECK(irm_bp_read(buf, 8) == NULL);          /* нет трейлера */
	CHECK(irm_bp_read(buf + 1, blen - 1) == NULL); /* битая магия */

	/* ---- 6. внешние плей-листы (Apple/python-материал) */
	for (int i = 2; i < argc; i++) {
		uint8_t *xb = NULL;
		size_t xn = rd_file(argv[i], &xb);
		CHECK(xn > 0);
		irm_bp_node *xe = irm_bp_read(xb, xn);
		CHECK(xe != NULL);
		if (xe) {
			size_t cnt = 0;
			dump(xe, 0, &cnt);
			irm_bp_free(xe);
		}
		free(xb);
	}

	free(buf);
	free(buf2);
	irm_bp_free(back);
	irm_bp_free(back2);
	irm_bp_free(root);

	printf(g_fail ? "test_bplist: FAIL\n" : "test_bplist: OK\n");
	return g_fail;
}
