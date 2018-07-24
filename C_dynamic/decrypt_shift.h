#include "true_modulus.h"

void decrypt_shift(int *ciphertext_ascii)
{
    int *ciphertext = ciphertext_ascii, *dectext = ciphertext_ascii;
    int shift = 23;

    while (*ciphertext)
    {
        *dectext++ = true_modulus((*ciphertext++ - 65 - shift), 30) + 97;
    }
    dectext = 0;
}