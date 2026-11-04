/* libirm — Grappa: подпись сайдкара операций ATC (.plist.cig).
 *
 * Фактура: rustunes (MIT) crates/music-protocol/src/protocol/signing.rs
 * (FixedHostSession), независимо верифицированные тест-векторы их же репозитория
 * (grappa-fixed-vectors.plist, 4 вектора) и наша локальная проверка цепочки
 * (E13 §3.1, tools/grappa-verify-2026-11-04b.log). Живой источник key/mask —
 * ответ ReadyForSync: Params.DeviceInfo.Grappa (83 Б):
 *
 *   1) reply обязан быть ровно 83 Б: reply[0..2] == {0x01,0x01},
 *      reply[18] == 0x40;
 *   2) D = AES-128-CBC-DECRYPT_nopad(reply[19..83], key = 0x95*16,
 *      IV = reply[2..18])                       — 64 Б;
 *   3) K0 = D[1..17] ^ D[39..55] ^ KEY_XOR       — 16 Б (raw);
 *      key = AES-128-ECB-ENCRYPT(key=WRAP_KEY, K0);  (обёртка ключа)
 *   4) tag_mask[20][i] = D[18+i] ^ TAG_XOR[i];
 *   5) sign(ops) = 21 Б: [0]=0x01, [1+i] = HMAC-SHA1(key, ops)[i] ^ tag_mask[i].
 *      ops обязаны быть 1..4 МиБ (MAX_OPERATION_BYTES) и подписываются
 *      ТОЧНО в сериализованном виде (без ре-рендера!).
 *
 * request (Grappa в HostInfo нашего RequestingSync) — фиксированные 84 Б,
 * от них зависит валидность пары (phone принимает пару «запрос↔ответ»);
 * ключ и маска считаются ТОЛЬКО из reply. Как источник, так и приёмник
 * имеют фиксированные константы (KEY_XOR/WRAP_KEY/TAG_XOR) — не конфиг.
 */
#ifndef LIBIRM_GRAPPA_H
#define LIBIRM_GRAPPA_H

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Fixed Grappa-запрос хоста (HostInfo.Grappa), 84 Б (signing.rs HOST_REQUEST). */
extern const uint8_t IRM_GRAPPA_HOST_REQUEST[84];

#define IRM_GRAPPA_REPLY_LEN 83
#define IRM_GRAPPA_MAX_OPS (4u * 1024u * 1024u)

typedef struct irm_grappa irm_grappa_t;

/* Derive session из пары request↔reply. request обязан быть ровно
 * IRM_GRAPPA_HOST_REQUEST (84 Б), reply — ровно 83 Б валидной формы.
 * Из reply выведены key (16 Б HMAC-SHA1) и tag_mask (20 Б). */
irm_grappa_t *irm_grappa_from_reply(const uint8_t *request, size_t req_len,
				    const uint8_t *reply, size_t reply_len);

/* Подпись ТОЧНЫХ байт ops (1..IRM_GRAPPA_MAX_OPS): out[0]=0x01,
 * out[1+i]=HMAC-SHA1(key,ops)[i]^tag_mask[i]. 0 — успех. */
int irm_grappa_sign(const irm_grappa_t *s, const uint8_t *ops, size_t n,
		    uint8_t out[21]);

void irm_grappa_free(irm_grappa_t *s);

/* Текст последней ошибки (статическая строка). */
const char *irm_grappa_error(void);

#ifdef __cplusplus
}
#endif
#endif /* LIBIRM_GRAPPA_H */
