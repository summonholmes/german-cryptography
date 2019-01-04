void EncryptSubstitution_German(int *plaintext_ascii_30, int *text_len, int *key_list, int *ciphertext_ascii_30)
{
    for (int i = 0; i < *text_len; i++)
    {
        ciphertext_ascii_30[i] = key_list[plaintext_ascii_30[i] - 97] - 32;
    }
}
