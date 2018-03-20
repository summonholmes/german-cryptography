void DecryptAffine_German(int *ciphertext_ascii_dec_30, int *a, int *b, int *k, int *z, int *array_len, int *dectext_ascii_30)
{
    ExtendedEuclidean(&*k, &*a, z);
    for (int i = 0; i < *array_len; i++)
    {
        int q = floor(((double)((z[2] * ciphertext_ascii_dec_30[i] - 65) - *b * z[2])) / 30);
        int r = ((z[2] * ciphertext_ascii_dec_30[i] - 65) - *b * z[2]) - 30 * q;
        dectext_ascii_30[i] = r + 97;
    }
}