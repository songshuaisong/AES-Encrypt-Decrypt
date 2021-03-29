#include "aes.h"
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

uint8_t userkey[] = {
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
	0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f};

encdec_t encdec;

void print_hex(unsigned char *src, int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
		printf("%02X ", src[i]);
	putchar(10);
}

int main(int argc, const char **argv)
{
	int i, len = 16;
	char input[16] = {0};
	char output[16] = {0};
	char output2[16] = {0};

	for (i = 0; i < len; i++)
		input[i] = i;

	printf("source : ");
	print_hex(input, len);

	encrypt(input, output, userkey, 16, len);
	printf("encrypt: ");
	print_hex(output, len);

	decrypt(output, output2, userkey, 16, len);
	printf("decrypt: ");
	print_hex(output2, len);

	memset(output, 0, sizeof(output));
	memset(output2, 0, sizeof(output2));

	encdec.src = input;
	encdec.dst = output;
	encdec.key = userkey;
	encdec.keylen = len;
	encdec.srclen = len;

	printf("user enc test: \n");

	printf("src : ");
	print_hex(encdec.src, len);
	printf("dst : ");
	print_hex(encdec.dst, len);
	printf("key : ");
	print_hex(encdec.key, encdec.keylen);
	user_encrypt(&encdec);
	printf("dst : ");
	print_hex(encdec.dst, len);

	encdec.src = output;
	encdec.dst = output2;
	encdec.key = userkey;
	encdec.keylen = len;
	encdec.srclen = len;

	printf("user dec test: \n");
	printf("src : ");
	print_hex(encdec.src, len);
	printf("dst : ");
	print_hex(encdec.dst, len);
	printf("key : ");
	print_hex(encdec.key, encdec.keylen);
	user_decrypt(&encdec);
	printf("dst : ");
	print_hex(encdec.dst, len);

	return 0;
}
