void DecryptShift_German(int *ciphertext_ascii_dec_30, int *k, int *array_len, int *dectext_ascii_30)
{
    for (int i = 0; i < *array_len; i++)
    {
        int q = floor((double)(ciphertext_ascii_dec_30[i] - 65 - *k) / 30);
        int r = (ciphertext_ascii_dec_30[i] - 65 - *k) - 30 * q;
        dectext_ascii_30[i] = r + 97;
    }
}