/* libirm — lockdown-клиент (checkin/запросы/StartService поверх mux-туннеля).
 *
 * Факты wire (E02 §2-4, декомпиляция MobileDevice.framework x86_64):
 *   checkin-запрос  = {"Request":<имя>, "ProtocolVersion":"2", "Label":<progname>}
 *                     — все значения СТРОКИ (0x10f2d2)_.
 *   фрейминг        = [BE32 len][bplist00 payload] ОБОИМИ сторонами;
 *                     payload всегда binary plist (format=100) — 0x1117f6/0x111bbb.
 *   лимит приёма    = 0x40000 байт payload (дальше — ошибка «maximum-header»);
 *   EOF на приёме   = kAMDReadError  (0xe8000004); таймаут = kAMDTimeOutError 0xe800000c.
 *   QueryType       → {"Type":"com.apple.mobile.lockdown"} (0x10f18c).
 *   GetValue/SetValue/RemoveValue (+ Domain/Key), GetMultipleValues.
 *   StartService    {Service,EscarowBag?} → {"Port":<int>, "EnableServiceSSL":bool}
 *                     или {"Error":<строка>}.
 *   подключение к сервису = НОВЫЙ mux Connect на этот порт; поверх — framing слоя сервиса
 *                     (bplist для notification_proxy — E07 §1, XML — DeviceLink E06, raw — AFC).
 *
 * Порт (🔴 live-вопрос Q14): демону-usbmuxd (plist v1) PortNumber читается CFNumber
 * SInt16 и идёт в mux-TCP dport БЕЗ перестановки (E01b §3). Значение Port из
 * StartService-ответа отдаём КАК ЕСТЬ (без bswap16); если live покажет обратное —
 * bswap добавим только там.
 */
#ifndef LIBIRM_LOCKDOWN_H
#define LIBIRM_LOCKDOWN_H

#include <stdint.h>
#include "libirm/bplist.h"
#include "libirm/pairing.h"

#ifdef __cplusplus
extern "C" {
#endif

#define IRM_LK_DEFAULT_PORT  0xF27E /* 62078 — сервис lockdown-а на устройстве */
#define IRM_LK_RECV_LIMIT    0x40000 /* E02 §2: максимум payload одного сообщения */
#define IRM_LK_PROTOCOL_VERSION "2"

typedef struct irm_lk irm_lk_t;

/* Открыть lockdown поверх mux-туннеля к порту устройства:
 * 1) коннект к демону (mux_path, NULL → IRM_MUX_DEFAULT_SOCKET);
 * 2) mux Connect {DeviceID, PortNumber} и ожидание Result==0;
 * 3) затем идёт checkin-обмен (irm_lk_query_type и т.д.).
 * timeout_sec — SO_RCVTIMEO на приёме (0 = навсегда). NULL при ошибке (irm_lk_error()).
 * Владение fd переходит объекту (irm_lk_close закрывает каждое). */
irm_lk_t *irm_lk_open(const char *mux_path, uint32_t device_id, uint16_t port,
		      int timeout_sec);

/* Обернуть УЖЕ ГОТОВЫЙ сырой туннель (тесты/future device-mux). fd — сырой сокет
 * к сервису lockdown (после Connect-фазы); владение переходит объекту. */
irm_lk_t *irm_lk_attach_fd(int fd, int timeout_sec);

void      irm_lk_close(irm_lk_t *lk);
int       irm_lk_fd(const irm_lk_t *lk);

/* Mux DeviceID (0 у attach_fd-коннектов). */
uint32_t  irm_lk_device_id(const irm_lk_t *lk);

/* Переопределить Label для checkin (по умолчанию getprogname()/«libirm»). */
void      irm_lk_set_label(irm_lk_t *lk, const char *label);

/* Отправить произвольный checkin-запрос (dict; копируется). 0 — успех. */
int       irm_lk_send(irm_lk_t *lk, const irm_bp_node *request_dict);

/* Получить ОДНО сообщение (ответ). NULL — EOF/таймаут/лимит/парсинг (irm_lk_error()). */
irm_bp_node *irm_lk_recv(irm_lk_t *lk);

/* Запрос-конверт: out = {"Request":<request>, "ProtocolVersion":"2",
 * "Label":<label>}. Domain/Key и пр. зайёнутые поля дописываются прямо в
 * полученный dict перекупкой query-server'а (irm_bp_dict_set). 0 — ок. */
int       irm_lk_make_request(irm_lk_t *lk, const char *request, irm_bp_node **out);

/* QueryType → узел {"Type": "com.apple.mobile.lockdown"} целиком (владение у caller). */
irm_bp_node *irm_lk_query_type(irm_lk_t *lk);

/* GetValue: домен/ключ — NULL или пустая строка = поле не добавляется в запрос.
 * Ответ возвращает ЦЕЛИКОМ (caller разбирает Value/Error); NULL — EOF/структурная
 * ошибка. Если ответ содержит строку Error — irm_lk_error() её дублирует, узел
 * всё же возвращается (или NULL, если отвеченных данных нет вовсе). */
irm_bp_node *irm_lk_get_value(irm_lk_t *lk, const char *domain, const char *key);

/* StartService: успex → 0, порт/флаг SSL наружу. Не-0 → сообщение в irm_lk_error(),
 * (включая строку Error от устройства). */
int       irm_lk_start_service(irm_lk_t *lk, const char *service,
			       uint16_t *port_out, int *ssl_out);

/* StartSession + TLS-апгрейд (E04 §3; live 04.11: ответ несёт
 * EnableSessionSSL=true — TLS начинается на ТОМ ЖЕ lockconn-сокете).
 * pair — пейр-рекорд (irm_pair_load); порядок клиентских сертификатов:
 *   1) lbD-стиль: HostCertificate + HostPrivateKey, pin DeviceCertificate;
 *   2) Apple-стиль (E04 §2): DeviceCertificate + RootPrivateKey.
 * Пиннинг — SHA-256 DER peer == SHA-256 DER из рекорда (E04 §4).
 * 0 — сессия открыта, канал в TLS; -1 — причина в irm_lk_error(). */
int       irm_lk_start_session(irm_lk_t *lk, const irm_pair_t *pair);

const char *irm_lk_error(void);

#ifdef __cplusplus
}
#endif
#endif /* LIBIRM_LOCKDOWN_H */
