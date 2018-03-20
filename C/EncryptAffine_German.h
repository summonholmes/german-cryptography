void EncryptAffine_German(int *plaintext_ascii_30, int *a, int *b, int *array_len, int *ciphertext_acsii_30)
{
    for (int i = 0; i < *array_len; i++)
    {
        ciphertext_acsii_30[i] = ((*a * (plaintext_ascii_30[i] - 97) + *b) % 30) + 65;
    }
}