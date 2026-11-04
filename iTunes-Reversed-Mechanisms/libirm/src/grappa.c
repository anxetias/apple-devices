/* libirm — Grappa: производные ключ/tag_mask из ReadyForSync и подпись .cig.
 *
 * Реализация (E13 §11.4 + rustunes signing.rs, тест-векторы совпали 1:1):
 *   D = AES-128-CBC-nopad-decrypt(reply[19..83], key 0x95×16, IV reply[2..18]);
 *   K0[16][i] = D[1+i] ^ D[39+i] ^ KEY_XOR[i];
 *   key = AES-128-ECB-encrypt(WRAP_KEY, K0);   (обёртка HMAC-ключа)
 *   tag_mask[20][i] = D[18+i] ^ TAG_XOR[i];
 *   sign(ops): HMAC-SHA1(key, ops) → байты t[20]; sidecar[0]=0x01,
 *   sidecar[1+i] = t[i] ^ tag_mask[i].
 * OpenSSL 3: EVP (EVP_CIPHER для AES, EVP_MAC("HMAC","SHA1") для HMAC).
 */
#include "libirm/grappa.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <openssl/core_names.h>
#include <openssl/evp.h>
#include <openssl/params.h>

/* Fixed Grappa-запрос (84 Б) — signing.rs HOST_REQUEST. */
const uint8_t IRM_GRAPPA_HOST_REQUEST[84] = {
	0x01, 0x01, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11,
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x04, 0x40,
	0xbc, 0x27, 0x85, 0xe0, 0xdb, 0xf1, 0x66, 0x36, 0x1e, 0x07,
	0x98, 0x0a, 0x5e, 0xa4, 0x8d, 0xba, 0x95, 0xb3, 0xb8, 0xea,
	0x26, 0x5d, 0x62, 0xae, 0xfe, 0xa5, 0x1b, 0xb7, 0xb1, 0x90,
	0xe0, 0xb7, 0x71, 0x26, 0x29, 0x0a, 0xd3, 0x9b, 0xb1, 0x3f,
	0xec, 0xc0, 0x8c, 0x25, 0xa9, 0x56, 0x1c, 0x51, 0x7a, 0xc1,
	0x1e, 0x64, 0x90, 0x5d, 0xa0, 0x29, 0xe6, 0x1b, 0xdf, 0xd0,
	0xba, 0x22, 0xc3, 0x13
};

static const uint8_t GRAPPA_KEY_XOR[16] = {
	0xc6, 0xc7, 0xc4, 0xc5, 0xca, 0xcb, 0xc8, 0xc9,
	0xce, 0xcf, 0xcc, 0xcd, 0xb2, 0xb3, 0xb0, 0xb1
};
static const uint8_t GRAPPA_WRAP_KEY[16] = {
	0x77, 0x76, 0xeb, 0x98, 0xab, 0x6c, 0xe6, 0x02,
	0xe8, 0xe8, 0x92, 0xe4, 0x1b, 0xa7, 0xe9, 0x15
};
static const uint8_t GRAPPA_TAG_XOR[20] = {
	0xf9, 0xfa, 0xfb, 0xfc, 0xfd, 0xfe, 0xff, 0xf0,
	0xf1, 0xf2, 0xf3, 0xf4, 0xf5, 0xf6, 0xf7, 0xe8,
	0xe9, 0xea, 0xeb, 0xec
};

struct irm_grappa {
	uint8_t key[16];      /* HMAC-SHA1-ключ (после ECB-обёртки) */
	uint8_t tag_mask[20]; /* XOR-маска тега */
};

static char grappa_err[160] = "ok";

static void grappa_set_err(const char *msg)
{
	snprintf(grappa_err, sizeof grappa_err, "%s", msg);
}

const char *irm_grappa_error(void)
{
	return grappa_err;
}

/* AES-128-режим (cbc/ecb) на ровно len байт без паддинга. */
static int grappa_aes_raw(int encrypt, const uint8_t *key, const uint8_t *iv,
			  uint8_t *buf, size_t len)
{
	EVP_CIPHER_CTX *ctx = EVP_CIPHER_CTX_new();
	const EVP_CIPHER *c = encrypt ? EVP_aes_128_ecb() : EVP_aes_128_cbc();
	int outl = 0;
	int ok = 0;
	if (!ctx)
		return -1;
	if (EVP_CipherInit_ex(ctx, c, NULL, key, iv, encrypt) == 1 &&
	    EVP_CIPHER_CTX_set_padding(ctx, 0) == 1 &&
	    EVP_CipherUpdate(ctx, buf, &outl, buf, (int)len) == 1 &&
	    outl == (int)len) {
		int outf = 0;
		ok = EVP_CipherFinal_ex(ctx, buf + outl, &outf) == 1 &&
		     outf == 0;
	}
	EVP_CIPHER_CTX_free(ctx);
	return ok ? 0 : -1;
}

irm_grappa_t *irm_grappa_from_reply(const uint8_t *request, size_t req_len,
				    const uint8_t *reply, size_t reply_len)
{
	if (!request || !reply || !reply_len) {
		grappa_set_err("граппа: пустые указатели");
		return NULL;
	}
	if (req_len != sizeof IRM_GRAPPA_HOST_REQUEST ||
	    memcmp(request, IRM_GRAPPA_HOST_REQUEST, req_len) != 0) {
		grappa_set_err("граппа: request != фиксированных 84 Б");
		return NULL;
	}
	if (reply_len != IRM_GRAPPA_REPLY_LEN) {
		grappa_set_err("граппа: reply не 83 Б");
		return NULL;
	}
	if (reply[0] != 0x01 || reply[1] != 0x01 || reply[18] != 0x40) {
		grappa_set_err("граппа: форма reply не {01,01,...,40}");
		return NULL;
	}
	uint8_t d[64];
	memcpy(d, reply + 19, sizeof d);
	/* (1) D = CBC-nopad-decrypt(reply[19..83], key 0x95×16, IV reply[2..18]). */
	{
		uint8_t seed[16];
		uint8_t iv[16];
		memset(seed, 0x95, sizeof seed);
		memcpy(iv, reply + 2, sizeof iv);
		if (grappa_aes_raw(0, seed, iv, d, sizeof d) != 0) {
			grappa_set_err("граппа: AES-CBC не удался");
			return NULL;
		}
	}
	irm_grappa_t *s = (irm_grappa_t *)calloc(1, sizeof *s);
	if (!s) {
		grappa_set_err("граппа: нет памяти");
		return NULL;
	}
	/* (2) K0 = D[1..17] ^ D[39..55] ^ KEY_XOR. */
	uint8_t k0[16];
	for (int i = 0; i < 16; i++)
		k0[i] = (uint8_t)(d[1 + i] ^ d[39 + i] ^ GRAPPA_KEY_XOR[i]);
	/* (3) key = ECB-encrypt(WRAP_KEY, K0). */
	memcpy(s->key, k0, sizeof k0);
	if (grappa_aes_raw(1, GRAPPA_WRAP_KEY, NULL, s->key, sizeof s->key) !=
	    0) {
		grappa_set_err("граппа: ECB-обёртка не удалась");
		free(s);
		return NULL;
	}
	/* (4) tag_mask[i] = D[18+i] ^ TAG_XOR[i]. */
	for (int i = 0; i < 20; i++)
		s->tag_mask[i] = (uint8_t)(d[18 + i] ^ GRAPPA_TAG_XOR[i]);
	grappa_set_err("ok");
	return s;
}

int irm_grappa_sign(const irm_grappa_t *s, const uint8_t *ops, size_t n,
		    uint8_t out[21])
{
	if (!s || !ops || n == 0 || n > IRM_GRAPPA_MAX_OPS || !out) {
		grappa_set_err("граппа: неверные аргументы sign (1..4 МиБ)");
		return -1;
	}
	EVP_MAC *mac_algo = EVP_MAC_fetch(NULL, "HMAC", NULL);
	EVP_MAC_CTX *mac = mac_algo ? EVP_MAC_CTX_new(mac_algo) : NULL;
	int ok = 0;
	if (!mac) {
		grappa_set_err("граппа: EVP_MAC/HMAC недоступен");
		EVP_MAC_free(mac_algo);
		return -1;
	}
	char digest[] = "SHA1";
	OSSL_PARAM params[2];
	params[0] = OSSL_PARAM_construct_utf8_string(OSSL_MAC_PARAM_DIGEST,
						     digest, 0);
	params[1] = OSSL_PARAM_construct_end();
	uint8_t tag[20] = { 0 };
	size_t tag_len = 0;
	if (EVP_MAC_init(mac, s->key, sizeof s->key, params) == 1 &&
	    EVP_MAC_update(mac, ops, n) == 1 &&
	    EVP_MAC_final(mac, tag, &tag_len, sizeof tag) == 1 &&
	    tag_len == sizeof tag) {
		out[0] = 0x01;
		for (int i = 0; i < 20; i++)
			out[1 + i] = (uint8_t)(tag[i] ^ s->tag_mask[i]);
		ok = 1;
		grappa_set_err("ok");
	} else {
		grappa_set_err("граппа: HMAC-SHA1 не удался");
	}
	EVP_MAC_CTX_free(mac);
	EVP_MAC_free(mac_algo);
	return ok ? 0 : -1;
}

void irm_grappa_free(irm_grappa_t *s)
{
	free(s);
}
