void EncryptSubstitution_German(int *plaintext_ascii_30, int *array_len, int *key_list, int *ciphertext_ascii_30)
{
    for (int i = 0; i < *array_len; i++)
    {
        ciphertext_ascii_30[i] = key_list[plaintext_ascii_30[i] - 97] - 32;
    }
}
