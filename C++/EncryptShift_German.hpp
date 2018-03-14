void EncryptShift_German(int *plaintext_ascii, int *k, int *array_len)
{
    for (int i = 0; i < *array_len; i++)
    {
        plaintext_ascii[i] = ((plaintext_ascii[i] - 97 + *k) % 30) + 65;
    }
}