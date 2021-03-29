/*
 * SM4/SMS4 algorithm test programme
 */

#include "sm4.h"
#include "sms4.h"
#include <stdio.h>
#include <string.h>

/* buffer for round encryption key */
static unsigned long ENRK[32];
static unsigned long DERK[32];

/* original contents for debugging */
unsigned long pData[4] = {0x01234567, 0x89abcdef, 0xfedcba98, 0x76543210};

/* original contents for debugging */
unsigned long pData2[9] = {
	0x01234567, 0x89abcdef, 0xfedcba98, 0x76543210, 0x12121212,
	0x34343434, 0x56565656, 0x78787878, 0x12341234};

int main(int argc, const char **argv)
{
	unsigned char key[16] = {0x01, 0x23, 0x45, 0x67, 0x89, 0xab, 0xcd, 0xef, 0xfe, 0xdc, 0xba, 0x98, 0x76, 0x54, 0x32, 0x10};
	unsigned char input[16] = {0x01, 0x23, 0x45, 0x67, 0x89, 0xab, 0xcd, 0xef, 0xfe, 0xdc, 0xba, 0x98, 0x76, 0x54, 0x32, 0x10};
	unsigned char output[16];
	sm4_context ctx;
	unsigned long i;

	//encrypt standard testing vector
	sm4_setkey_enc(&ctx, key);
	sm4_crypt_ecb(&ctx, 1, 16, input, output);

	puts("sm4_crypt_ecb enc output:");
	for (i = 0; i < 16; i++)
		printf("%02x ", output[i]);
	printf("\n");

	//decrypt testing
	sm4_setkey_dec(&ctx, key);
	sm4_crypt_ecb(&ctx, 0, 16, output, output);
	puts("sm4_crypt_ecb dec output:");
	for (i = 0; i < 16; i++)
		printf("%02x ", output[i]);
	printf("\n");

	puts("SMS4Encrypt src:");
	SMS4SetKey(NULL, 1);

	printf("0x%08x, 0x%08x, 0x%08x, 0x%08x. \n",
		   pData[0], pData[1], pData[2], pData[3]);
	SMS4Encrypt(pData, sizeof(pData), ENRK);
	puts("SMS4Encrypt enc:");
	printf("0x%08x, 0x%08x, 0x%08x, 0x%08x. \n",
		   pData[0], pData[1], pData[2], pData[3]);
	SMS4Decrypt(pData, sizeof(pData), DERK);
	puts("SMS4Encrypt dec:");
	printf("0x%08x, 0x%08x, 0x%08x, 0x%08x. \n",
		   pData[0], pData[1], pData[2], pData[3]);

	return 0;
}
