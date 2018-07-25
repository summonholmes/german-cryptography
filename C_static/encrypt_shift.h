#include "true_modulus.h"

void encrypt_shift(int *nachtlied_ascii, int *nachtlied_size)
{
    int shift = 23;

    for (int i = 0; i < *nachtlied_size; i++)
    {
        nachtlied_ascii[i] = true_modulus((nachtlied_ascii[i] - 97 + shift), 30) + 65;
    }
}