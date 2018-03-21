void EncryptSubstitution_German(int *plaintext_ascii_30, int *array_len, int *k, int *ciphertext_ascii_30)
{
    int xp;
    for (int i = 0; i < *array_len; i++)
    {
        xp = plaintext_ascii_30[i] - 97;
        ciphertext_ascii_30[i] = k[xp] - 32;
    }
}