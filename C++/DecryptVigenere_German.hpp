#include "mod.hpp"

int mod(int, int);

void DecryptVigenere_German(int *ciphertext_ascii_30, int *text_len, int *keyword_ascii, int *keyword_len, int *dectext_ascii_30)
{
    for (int i = 0; i < *text_len; i++)
    {
        dectext_ascii_30[i] = mod((ciphertext_ascii_30[i] - 65 - keyword_ascii[mod(i, *keyword_len)]), 30) + 97;
    }
}
