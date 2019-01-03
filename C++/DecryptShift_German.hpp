#include "mod.hpp"

int mod(int, int);

void DecryptShift_German(int *ciphertext_ascii_dec_30, int *key, int *array_len, int *dectext_ascii_30)
{
    for (int i = 0; i < *array_len; i++)
    {
        dectext_ascii_30[i] = mod(ciphertext_ascii_dec_30[i] - 65 - *key, 30) + 97;
    }
}
