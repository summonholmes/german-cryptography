void DecryptVigenere_German(int *ciphertext_ascii_dec_30, int *array_len, int *keyword_ascii, int *keyword_len, int *dectext_ascii_30)
{
    int q, r, q1, r1;
    for (int i = 0; i < *array_len; i++)
    {
        q = floor((double) (i - 1) / *keyword_len);
        r = (i - 1) - *keyword_len * q;
        q1 = floor((double) ((ciphertext_ascii_dec_30[i] - 65) - keyword_ascii[r]) / 30);
        r1 = ((ciphertext_ascii_dec_30[i] - 65) - keyword_ascii[r]) - 30 * q1;
        dectext_ascii_30[i] = r1 + 97;
    }
}
