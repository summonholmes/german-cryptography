void DecryptAffine_German(int *ciphertext_ascii_dec_30, int *a, int *b, int *alpha_len, int *ext_eucl, int *array_len, int *dectext_ascii_30)
{
    int q, r;
    ExtendedEuclidean(&*alpha_len, &*a, ext_eucl);
    for (int i = 0; i < *array_len; i++)
    {
        q = floor(((double)((ext_eucl[2] * ciphertext_ascii_dec_30[i] - 65) - *b * ext_eucl[2])) / *alpha_len);
        r = ((ext_eucl[2] * ciphertext_ascii_dec_30[i] - 65) - *b * ext_eucl[2]) - *alpha_len * q;
        dectext_ascii_30[i] = r + 97;
    }
}