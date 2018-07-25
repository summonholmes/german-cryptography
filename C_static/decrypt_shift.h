#include "true_modulus.h"

void decrypt_shift(int *ciphertext_ascii, int *ciphertext_size)
{
    int shift = 23;

    for (int i = 0; i < *ciphertext_size; i++)
    {
        ciphertext_ascii[i] = true_modulus((ciphertext_ascii[i] - 65 - shift), 30) + 97;
    }
}