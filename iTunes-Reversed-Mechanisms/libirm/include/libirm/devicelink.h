/* libirm — DeviceLink-транспорт (E06: DeviceLink.framework).
 *
 * Факты wire (E06 §1-5, декомпиляция DeviceLink.framework x86_64):
 *   фрейм      = [BE32 totalLen][XML plist payload]; payload = МАССИВ-кортеж
 *                ["<DLMessageName>", arg1, arg2, ...] (format=200, только XML).
 *   версионный обмен: устройство sends ["DLMessageVersionExchange", verMajor,
 *                verMinor] ПЕРВЫМ; host отвечает ["DLMessageVersionExchange",
 *                "DLVersionsOk", 400]; kDLProtocolVersion=400 (0x18e70).
 *   готовность  = DLMessageDeviceReady (диспетчер 0x6b52; требуют mobilesync/
 *                mobilebackup2; при wait_ready==0 проверка отдана caller-у).
 *   disconnect  = ["DLMessageDisconnect", причина?] — закрывает.
 *   файл-сериал (для sync/backup-файлов, E06 §5):
 *        запрос     ["DLRequestFile", src, dst, infoDict]
 *        поток      серия ["DLSendFile", <data-кусок>, infoDict]; финал —
 *                   ["DLSendFile", null-кусок, infoDict{DLFileStatusKey:2}];
 *                   ошибка — статус 3 (+DLFileErrorCode/ErrorString);
 *                   статус 1 = продолжение (oффсет в DLFileOffsetKey).
 *        chunk      = 0x2000 байт по умолчанию (CFPrefs ChunkSize).
 *   «Процесс»   = ["DLMessageProcessMessage", <dict>] — payload каналы sync.
 *
 * НЕ реализовано здесь: WiFi-серверная сторона (endpoint-accept E06 §7),
 * шифрование файлов (DLFileEncryptionKey AES-256-CBC, E06 §6 — после sync
 * потребуется), retry-логика StartSession (живой тест).
 */
#ifndef LIBIRM_DEVICELINK_H
#define LIBIRM_DEVICELINK_H

#include <stdint.h>
#include "libirm/bplist.h"
#include "libirm/lockdown.h"

#ifdef __cplusplus
extern "C" {
#endif

#define IRM_DL_PROTOCOL_VERSION 400
#define IRM_DL_CHUNK_DEFAULT    0x2000 /* E06 §5: ChunkSize по умолчанию */
#define IRM_DL_FRAME_MAX        (64u * 1024u * 1024u)

typedef struct irm_dl irm_dl_t;

/* Обернуть СЫРОЙ туннель (после mux Connect) и провести версионный обмен.
 * wait_ready: 1 = ждать и поглотить DLMessageDeviceReady, 0 = отдать
 * caller-у первым irm_dl_recv(). NULL при ошибке (irm_dl_error()). */
irm_dl_t *irm_dl_attach_fd(int fd, int timeout_sec, int wait_ready);

/* Удобняшка: StartService(service) через открытый lockdown-коннект и
 * новый mux-Connect на порт (без TLS; если EnableServiceSSL=1 →
 * ошибка «TLS не реализован (шаг 5)»). */
irm_dl_t *irm_dl_open_service(irm_lk_t *lk, const char *service,
			      const char *mux_path, int timeout_sec,
			      int wait_ready);

void      irm_dl_close(irm_dl_t *dl);
int       irm_dl_fd(const irm_dl_t *dl);

/* Отправить сообщение: name + args (массив или NULL). Владение args НЕ
 * переходит (копируем по узлам через дерево — join-сконструированный
 * root-у): строится ["name", ...args]. 0 — успех. */
int       irm_dl_send(irm_dl_t *dl, const char *name, irm_bp_node *args_array);

/* Получить одно сообщение: массив ["name", ...args] (владение у caller),
 * NULL при EOF/ошибке/превышение лимита. */
irm_bp_node *irm_dl_recv(irm_dl_t *dl);

const char *irm_dl_error(void);

#ifdef __cplusplus
}
#endif
#endif /* LIBIRM_DEVICELINK_H */
