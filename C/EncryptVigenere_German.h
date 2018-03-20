void EncryptVigenere_German(int *plaintext_ascii_30, int *array_len, int *keyword_ascii, int *keyword_len, int *ciphertext_ascii_30)
{
    int xp, r, q, r1, q1;
    for (int i = 0; i < *array_len; i++)
    {
        q = floor((double) (i - 1) / *keyword_len);
        r = (i - 1) - *keyword_len * q;
        xp = (plaintext_ascii_30[i] - 97) + keyword_ascii[r];
        q1 = floor((double) xp / 30);
        r1 = xp - 30 * q1;
        ciphertext_ascii_30[i] = r1 + 65;
    }
}