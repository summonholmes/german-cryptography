void EncryptShift_German(int *plaintext_ascii_30, int *key, int *array_len, int *ciphertext_acsii_30)
{
    for (int i = 0; i < *array_len; i++)
    {
        ciphertext_acsii_30[i] = ((plaintext_ascii_30[i] - 97 + *key) % 30) + 65;
    }
}