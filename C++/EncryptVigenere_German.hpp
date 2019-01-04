#include "mod.hpp"

int mod(int, int);

void EncryptVigenere_German(int *plaintext_ascii_30, int *array_len, int *keyword_ascii, int *keyword_len, int *ciphertext_ascii_30)
{
    for (int i = 0; i < *array_len; i++)
    {
        ciphertext_ascii_30[i] = mod((plaintext_ascii_30[i] - 97 + keyword_ascii[mod(i, *keyword_len)]), 30) + 65;
    }
}
