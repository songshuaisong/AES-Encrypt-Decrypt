#ifndef __SMS4_H__
#define __SMS4_H__

#ifndef unlong
typedef unsigned long unlong;
#endif /* unlong */

#ifndef unchar
typedef unsigned char unchar;
#endif /* unchar */

/* define SMS4CROL for rotating left */
#define SMS4CROL(uval, bits) ((uval << bits) | (uval >> (0x20 - bits)))

/* define MASK code for selecting expected bits from a 32 bits value */
#define SMS4MASK3 0xFF000000
#define SMS4MASK2 0x00FF0000
#define SMS4MASK1 0x0000FF00
#define SMS4MASK0 0x000000FF

// /* buffer for round encryption key */
static unlong ENRK[32];
static unlong DERK[32];

/*=============================================================================
** public function:
**   "T algorithm" == "L algorithm" + "t algorithm".
** args:    [in] ulkey: password defined by user(NULL: default encryption key);
** args:    [in] flag: if 0: not calculate DERK , else calculate;
** return ulkey: NULL for default encryption key.
**============================================================================*/
unlong *SMS4SetKey(unlong *ulkey, unlong flag);

/*=============================================================================
** public function:
**   sms4 encryption algorithm.
** args:   [in/out] psrc: a pointer point to original contents;
** args:   [in] lgsrc: the length of original contents;
** args:   [in] derk: a pointer point to encryption/decryption key;
** return: pRet: a pointer point to encrypted contents.
**============================================================================*/
unlong *SMS4Encrypt(unlong *psrc, unlong lgsrc, unlong rk[]);

/*=============================================================================
** public function:
**   sms4 decryption algorithm.
** args:   [in/out] psrc: a pointer point to encrypted contents;
** args:   [in] lgsrc: the length of encrypted contents;
** args:   [in] derk: a pointer point to decryption key;
** return: pRet: a pointer point to decrypted contents.
**============================================================================*/
unlong *SMS4Decrypt(unlong *psrc, unlong lgsrc, unlong derk[]);

#endif
