#include "mod.hpp"

int mod(int, int);

void EncryptAffine_German(int *plaintext_ascii_30, int *a, int *b, int *text_len, int *ciphertext_acsii_30)
{
    for (int i = 0; i < *text_len; i++)
    {
        ciphertext_acsii_30[i] = mod((*a * (plaintext_ascii_30[i] - 97) + *b), 30) + 65;
    }
}
