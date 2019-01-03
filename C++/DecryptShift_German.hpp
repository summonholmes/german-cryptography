#include "mod.hpp"

int mod(int, int);

void DecryptShift_German(int *ciphertext_ascii_30, int *shift, int *text_len, int *dectext_ascii_30)
{
    for (int i = 0; i < *text_len; i++)
    {
        dectext_ascii_30[i] = mod(ciphertext_ascii_30[i] - 65 - *shift, 30) + 97;
    }
}
