void ASCII_Enc_German(int *ciphertext_ascii_30, int *array_len, int *ciphertext_ascii)
{
    int j = 0;
    for (int i = 0; i < *array_len; i++)
    {
        if (ciphertext_ascii_30[i] == 91)
        {
            ciphertext_ascii[j] = -61; j++;
            ciphertext_ascii[j] = -124; j++;
        }
        else if (ciphertext_ascii_30[i] == 92)
        {
            ciphertext_ascii[j] = -61; j++;
            ciphertext_ascii[j] = -106; j++;
        }
        else if (ciphertext_ascii_30[i] == 93)
        {
            ciphertext_ascii[j] = -61; j++;
            ciphertext_ascii[j] = -100; j++;
        }
        else if (ciphertext_ascii_30[i] == 94)
        {
            ciphertext_ascii[j] = -61; j++;
            ciphertext_ascii[j] = -97; j++;
        }
        else if (ciphertext_ascii_30[i] > 64 && ciphertext_ascii_30[i] < 91)
        {
            ciphertext_ascii[j] = ciphertext_ascii_30[i];
            j++;
        }
    }
}