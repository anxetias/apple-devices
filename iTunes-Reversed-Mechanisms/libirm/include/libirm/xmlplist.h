/* libirm — mini-reader XML-plist (kCFPropertyListXMLFormat_v1_0).
 *
 * Зачем: live-проба (2026-11-03) показала, что системный usbmuxd macOS
 * отвечает на ListDevices XML-тела (E01b §1.5): {DeviceList: <array/>}.
 * Наши запросы остаются binary; ответ демона может быть binary ИЛИ XML —
 * irm_mux_recv различает по префиксу ("bplist00" / "<?xml"/"<plist"/"<dict").
 *
 * Поддержка (reader-only, semantika узлов = IRM_BP_*):
 *   <plist>, <dict>, <array>, <key>, <string>, <integer>, <real>,
 *   <true/>, <false/>, <data> (base64, пробелы игнорируются),
 *   <date> (ISO 8601 → секунды от 2001-01-01T00:00:00Z, как в bplist).
 * Сущности: &amp; &lt; &gt; &quot; &apos; &#NN;.
 */
#ifndef LIBIRM_XMLPLIST_H
#define LIBIRM_XMLPLIST_H

#include <stddef.h>
#include "libirm/bplist.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Разобрать XML-body в дерево IRM_BP_* (владение у вызывающего).
 * NULL при ошибке — irm_xml_error(). */
irm_bp_node *irm_xml_read(const uint8_t *buf, size_t len);

const char *irm_xml_error(void);

/* Сериализовать в CF-совместимый XML-plist (kCFPropertyListXMLFormat_v1_0):
 * prolog+DOCTYPE+<plist version="1.0"> (E06 §1: DL-пейлоады — XML,
 * format=200). NULL-узел → <null/> (🔴 Q15: CFNull в CF-XML — форма
 * сверится live на завершающем DLSendFile-куске). 0 — успех. */
int irm_xml_write(const irm_bp_node *root, uint8_t **out, size_t *outlen);

#ifdef __cplusplus
}
#endif
#endif /* LIBIRM_XMLPLIST_H */
