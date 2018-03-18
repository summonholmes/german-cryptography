void DecryptShift_German(int *ciphertext_ascii_dec_30, int *k, int *array_len, int *dectext_ascii_30)
{
    for (int i = 0; i < *array_len; i++)
    {
        dectext_ascii_30[i] = ((ciphertext_ascii_dec_30[i] - 65 - *k) % 30) + 97;
        if (dectext_ascii_30[i] > 64 && dectext_ascii_30[i] < 97)
        {
            dectext_ascii_30[i] += 30;
        }
    }
}