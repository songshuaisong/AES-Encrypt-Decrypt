#ifndef __AES_ECB_H__
#define __AES_ECB_H__

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct encdec
{
	char *src;
	char *dst;
	char *key;
	int keylen;
	int srclen;
} encdec_t;

int encrypt(char *encrypt, char *encrypted, char *key, int keylen, int32_t num);
int decrypt(char *decrypt, char *decrypted, char *key, int keylen, int32_t num);

int user_decrypt(encdec_t *encdec);
int user_encrypt(encdec_t *encdec);

#endif
