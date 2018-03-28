void DecryptSubstitution_German(int *ciphertext_ascii_30_dec, int *array_len, int *key_list, int *alpha_len, int *dectext_ascii_30)
{
    int key_list_temp1[*alpha_len]; int key_list_temp2[*alpha_len];
    for (int i = 0; i < *alpha_len; i++)
    {
        key_list_temp1[i] = key_list[i] - 97;
        key_list_temp2[i] = i + 97;
    }
    for (int i = 0; i < *array_len; i++)
    {
        for (int j = 0; j < *alpha_len; j++)
        {
            if ((ciphertext_ascii_30_dec[i] - 65) == key_list_temp1[j])
            {
                dectext_ascii_30[i] = key_list_temp2[j];
            }
        }
    }
}