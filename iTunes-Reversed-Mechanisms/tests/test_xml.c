/* Юнит-тест XML-plist reader'а (irm_xml_read).
 * TODO: реальный ответ macOS usbmuxd (live 2026-11-03, E01b §1.5) вшит как кейс 1;
 * синтетические кейсы — все типы plist-XML. */
#include "libirm/xmlplist.h"
#include "libirm/bplist.h"

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

/* --- case 1: РЕАЛЬНЫЙ демон-style ответ (тот же формат, что и летит по проводу) --- */
static const char *xml_daemon =
	"<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n"
	"<!DOCTYPE plist PUBLIC \"-//Apple//DTD PLIST 1.0//EN\" "
	"\"http://www.apple.com/DTDs/PropertyList-1.0.dtd\">\n"
	"<plist version=\"1.0\">\n"
	"<dict>\n"
	"\t<key>DeviceList</key>\n"
	"\t<array/>\n"
	"</dict>\n"
	"</plist>\n";

/* --- case 2: все типы + вложенность + сущности --- */
static const char *xml_full =
	"<plist version=\"1.0\">\n"
	"<dict>\n"
	"\t<key>MessageType</key>\n"
	"\t<string>Attach</string>\n"
	"\t<key>DeviceID</key>\n"
	"\t<integer>7</integer>\n"
	"\t<key>Neg</key>\n"
	"\t<integer>-5</integer>\n"
	"\t<key>Rate</key>\n"
	"\t<real>44100</real>\n"
	"\t<key>Flags</key>\n"
	"\t<true/>\n"
	"\t<key>NoName</key>\n"
	"\t<false/>\n"
	"\t<key>Blob</key>\n"
	"\t<data>AQIDBA==</data>\n"
	"\t<key>When</key>\n"
	"\t<date>2024-03-01T12:00:00Z</date>\n"
	"\t<key>E&amp;S</key>\n"
	"\t<string>a&lt;b&gt;q</string>\n"
	"\t<key>Sub</key>\n"
	"\t<dict>\n"
	"\t\t<key>Kid</key>\n"
	"\t\t<string>ok</string>\n"
	"\t</dict>\n"
	"\t<key>Items</key>\n"
	"\t<array>\n"
	"\t\t<integer>1</integer>\n"
	"\t\t<string>x</string>\n"
	"\t\t<false/>\n"
	"\t</array>\n"
	"</dict>\n"
	"</plist>\n";

/* 0x01..0x04 → base64 "AQIDBA==" ✓; 2024-03-01T12:00:00Z → epoch 1709294400
 * − 978307200 = 730987200 сек от Apple-эпохи. */
int run_case(const char *xml, irm_bp_node **out);

static void check_full(const irm_bp_node *root)
{
	CHECK(root != NULL);
	if (!root)
		return;
	CHECK(irm_bp_type_of(root) == IRM_BP_DICT);
	size_t sl = 0;
	const irm_bp_node *v = irm_bp_dict_get(root, "MessageType");
	CHECK(v && irm_bp_type_of(v) == IRM_BP_STRING);
	if (v)
		(void)irm_bp_string_ptr(v, &sl);
	CHECK(sl && strcmp((const char *)irm_bp_string_ptr(v, &sl), "Attach") == 0);

	CHECK(irm_bp_uint_value(irm_bp_dict_get(root, "DeviceID")) == 7);
	CHECK(irm_bp_uint_value(irm_bp_dict_get(root, "Neg")) ==
	      0xFFFFFFFFFFFFFFFBull);
	CHECK(irm_bp_real_value(irm_bp_dict_get(root, "Rate")) == 44100.0);
	CHECK(irm_bp_bool_value(irm_bp_dict_get(root, "Flags")) == 1);
	CHECK(irm_bp_bool_value(irm_bp_dict_get(root, "NoName")) == 0);

	size_t dl = 0;
	const uint8_t *dp = (const uint8_t *)irm_bp_data_ptr(irm_bp_dict_get(root, "Blob"), &dl);
	CHECK(dl == 4 && dp && dp[0] == 1 && dp[1] == 2 && dp[2] == 3 && dp[3] == 4);

	CHECK(irm_bp_real_value(irm_bp_dict_get(root, "When")) == 730987200.0);

	/* сущности: ключ "E&S", значение "a<b>q" */
	const irm_bp_node *es = irm_bp_dict_get(root, "E&S");
	CHECK(es && irm_bp_type_of(es) == IRM_BP_STRING);
	const char *sp = es ? irm_bp_string_ptr(es, &sl) : NULL;
	CHECK(sp && strcmp(sp, "a<b>q") == 0);

	const irm_bp_node *sub = irm_bp_dict_get(root, "Sub");
	CHECK(sub && irm_bp_type_of(sub) == IRM_BP_DICT);
	v = sub ? irm_bp_dict_get(sub, "Kid") : NULL;
	sp = v ? irm_bp_string_ptr(v, &sl) : NULL;
	CHECK(sp && strcmp(sp, "ok") == 0);

	const irm_bp_node *items = irm_bp_dict_get(root, "Items");
	CHECK(items && irm_bp_array_len(items) == 3);
	CHECK(items && irm_bp_uint_value(irm_bp_array_get(items, 0)) == 1);
	v = items ? irm_bp_array_get(items, 1) : NULL;
	sp = v ? irm_bp_string_ptr(v, &sl) : NULL;
	CHECK(sp && strcmp(sp, "x") == 0);
	CHECK(items && irm_bp_type_of(irm_bp_array_get(items, 2)) == IRM_BP_BOOL);
}

/* --- case 3: обломы --- */
static const char *xml_bad_unclosed = "<plist><dict><key>a</key><string>b";
static const char *xml_bad_tag =     "<plist><dict><key>a</key><zorp/></dict></plist>";
static const char *xml_bad_b64 =     "<plist><dict><key>a</key><data>###</data></dict></plist>";
static const char *xml_trailing =    "<plist version=\"1.0\"><dict/></plist>JUNK";
static const char *xml_bad_date =    "<plist><dict><key>a</key><date>nope</date></dict></plist>";

int main(void)
{
	/* 1. демонов-формат */
	irm_bp_node *n = irm_xml_read((const uint8_t *)xml_daemon, strlen(xml_daemon));
	CHECK(n != NULL);
	if (!n)
		fprintf(stderr, "err: %s\n", irm_xml_error());
	if (n) {
		CHECK(irm_bp_type_of(n) == IRM_BP_DICT);
		const irm_bp_node *dl = irm_bp_dict_get(n, "DeviceList");
		CHECK(dl && irm_bp_array_len(dl) == 0);
		irm_bp_free(n);
	}

	/* 2. полный */
	n = irm_xml_read((const uint8_t *)xml_full, strlen(xml_full));
	if (!n)
		fprintf(stderr, "err: %s\n", irm_xml_error());
	check_full(n);
	irm_bp_free(n);

	/* 3. обломы */
	CHECK(irm_xml_read((const uint8_t *)xml_bad_unclosed, strlen(xml_bad_unclosed)) == NULL);
	CHECK(irm_xml_read((const uint8_t *)xml_bad_tag, strlen(xml_bad_tag)) == NULL);
	CHECK(irm_xml_read((const uint8_t *)xml_bad_b64, strlen(xml_bad_b64)) == NULL);
	CHECK(irm_xml_read((const uint8_t *)xml_trailing, strlen(xml_trailing)) == NULL);
	CHECK(irm_xml_read((const uint8_t *)xml_bad_date, strlen(xml_bad_date)) == NULL);

	printf(g_fail ? "test_xml: FAIL\n" : "test_xml: OK\n");
	return g_fail;
}
