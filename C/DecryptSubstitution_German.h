void DecryptSubstitution_German(int *ciphertext_ascii_30_dec, int *array_len, int *k, int *alpha_len, int *dectext_ascii_30)
{
    int k_temp1[*alpha_len]; int k_temp2[*alpha_len], xp;
    for (int i = 0; i < *alpha_len; i++)
    {
        k_temp1[i] = k[i] - 97;
        k_temp2[i] = i + 97;
    }
    for (int i = 0; i < *array_len; i++)
    {
        xp = ciphertext_ascii_30_dec[i] - 65;
        for (int j = 0; j < *alpha_len; j++)
        {
            if (xp == k_temp1[j])
            {
                dectext_ascii_30[i] = k_temp2[j];
            }
        }
    }
}