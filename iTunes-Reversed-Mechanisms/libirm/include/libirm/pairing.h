/* libirm — чтение пейр-рекорда (E04 §2, E02 §8).
 * Рекорды libimobiledevice-миреста приходят XML-план и хранятся:
 *   - системный usbmuxd: /var/lib/lockdown/<UDID>.plist
 *   - пользовательский: $XDG_CACHE_HOME/libimobiledevice/<UDID>.plist
 * Поля (нами подтверждены на этой машине 04.11): HostID, SystemBUID,
 * HostCertificate/HostPrivateKey/DeviceCertificate/RootCertificate/
 * RootPrivateKey (PEM в CFData), WiFiMACAddress, EscrowBag. */
#ifndef LIBIRM_PAIRING_H
#define LIBIRM_PAIRING_H

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct irm_pair {
	char host_id[64];
	char sys_buid[64];
	/* PEM-тексты (как в рекорде; в CFData лежали уже тексты). */
	uint8_t *host_cert, *host_key;
	uint8_t *device_cert, *root_cert, *root_key;
	size_t host_cert_n, host_key_n, device_cert_n, root_cert_n, root_key_n;
	char src[128]; /* откуда прочитан */
} irm_pair_t;

/* Загрузить рекорд по UDID. 0 — ок (рекорд — владение у вызывающего,
 * irm_pair_free). -1 — причина в irm_pair_error(). */
int         irm_pair_load(const char *udid, irm_pair_t **out);
void        irm_pair_free(irm_pair_t *p);
const char *irm_pair_error(void);

#ifdef __cplusplus
}
#endif
#endif /* LIBIRM_PAIRING_H */
