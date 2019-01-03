#include "mod.hpp"

int mod(int, int);

void EncryptShift_German(int *plaintext_ascii_30, int *shift, int *text_len, int *ciphertext_acsii_30)
{
    for (int i = 0; i < *text_len; i++)
    {
        ciphertext_acsii_30[i] = mod((plaintext_ascii_30[i] - 97 + *shift), 30) + 65;
    }
}
