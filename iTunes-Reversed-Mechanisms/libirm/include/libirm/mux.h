/* libirm — mux-клиент системного usbmuxd (unix socket, plist-протокол v1).
 *
 * Факты wire (E01b §1-2, декомпиляция usbmuxd x86_64):
 *   кадр     = [LE u32 totallen][LE u32 ver=1][LE u32 msg][LE u32 tag][bplist00 payload]
 *              totallen ВКЛЮЧАЕТ header (16B); payload обязан быть dict;
 *              tag запроса эхо в ответах. Legacy v0 отброшен («old version»).
 *   запрос   = {MessageType:"ListDevices"} → ответ {DeviceList:[...]}
 *              (MessageType в ответе может отсутствовать);
 *   Result   = {MessageType:"Result", Number:<SInt32 код>} (0 = ок).
 *   Device-словарь: {DeviceID:SInt32, Properties:{SerialNumber, ConnectionType,
 *              UDID, LocationID, ...}} (E01b §4). </ieee>
 */
#ifndef LIBIRM_MUX_H
#define LIBIRM_MUX_H

#include <stdint.h>
#include "libirm/bplist.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Стандартный путь системного демона (macOS: /var/run/usbmuxd). */
#define IRM_MUX_DEFAULT_SOCKET "/var/run/usbmuxd"

/* Верхняя граница входящего кадра (защита от мусора демона/перехватчика). */
#define IRM_MUX_FRAME_MAX (64u * 1024u * 1024u)

/* Подключиться к демону. timeout_sec — SO_RCVTIMEO в сек (0 = без таймаута).
 * Возврат: fd (>= 0) или -1 (причина — irm_mux_error()). */
int  irm_mux_open(const char *path, int timeout_sec);

/* Туннель к сервису устройства: Connect {DeviceID, PortNumber:SInt16} →
 * Result==0 → fd становится сырым туннелем (протокол — слой сервиса:
 * lockdown-фрейминг bplist/DL-XML/AFC-raw). Порт НЕ переставляется (Q14). */
int  irm_mux_connect(const char *path, uint32_t device_id, uint16_t port,
		     int timeout_sec);

/* Закрыть соединение (fd < 0 — no-op). */
void irm_mux_close(int fd);

/* Отправить кадр: tag + payload(payload ДОЛЖЕН быть dict; владение НЕ передаётся).
 * Возврат 0 — успех, -1 — ошибка. */
int  irm_mux_send(int fd, uint32_t tag, const irm_bp_node *payload);

/* Принять один кадр. Узел ответа — владение у вызывающего (irm_bp_free);
 * NULL при ошибке/таймауте. tag — опционально (NULL ок). */
irm_bp_node *irm_mux_recv(int fd, uint32_t *tag);

/* Монотонный тег-счётчик (начиная с 1). */
uint32_t irm_mux_tag_next(void);

const char *irm_mux_error(void);

#ifdef __cplusplus
}
#endif
#endif /* LIBIRM_MUX_H */
