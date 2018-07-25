#include "true_modulus.h"

void encrypt_shift(int *plaintext_ascii)
{
    int *plain = plaintext_ascii, *encrypt = plaintext_ascii;
    int shift = 23;

    while (*plain)
    {
        *encrypt++ = true_modulus((*plain++ - 97 + shift), 30) + 65;
    }
    *encrypt = 0;
}