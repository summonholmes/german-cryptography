#include "true_modulus.h"

void encrypt_shift(int *nachtlied_ascii)
{
    int *nachtlied_plain = nachtlied_ascii, *nachtlied_encrypt = nachtlied_ascii;
    int shift = 23;

    while (*nachtlied_plain)
    {
        *nachtlied_encrypt++ = true_modulus((*nachtlied_plain++ - 97 + shift), 30) + 65;
    }
    *nachtlied_encrypt = 0;
}