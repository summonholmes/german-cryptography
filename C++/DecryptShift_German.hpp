void DecryptShift_German(int *ciphertext_ascii, int *k, int *array_len)
{
    for (int i = 0; i < *array_len; i++)
    {
        ciphertext_ascii[i] = ((ciphertext_ascii[i] - 65 - *k) % 30) + 97;
        if (ciphertext_ascii[i] > 73 && ciphertext_ascii[i] < 97)
        {
            ciphertext_ascii[i] += 30;
        }
    }
}