void ASCII_Dec_German(int *ciphertext_ascii, int *array_len, int *ciphertext_ascii_30_dec)
{
    int j = 0;
    for (int i = 0; i < *array_len; i++)
    {
        if (ciphertext_ascii[i] == -61)
        {
            i++;
            if (ciphertext_ascii[i] == -124)
            {
                ciphertext_ascii_30_dec[j] = 91;
                j++;
            }
            else if (ciphertext_ascii[i] == -106)
            {
                ciphertext_ascii_30_dec[j] = 92;
                j++;
            }
            else if (ciphertext_ascii[i] == -100)
            {
                ciphertext_ascii_30_dec[j] = 93;
                j++;
            }
            else if (ciphertext_ascii[i] == -97)
            {
                ciphertext_ascii_30_dec[j] = 94;
                j++;
            }
        }
        else if (ciphertext_ascii[i] > 64 && ciphertext_ascii[i] < 91)
        {
            ciphertext_ascii_30_dec[j] = ciphertext_ascii[i];
            j++;
        }
    }
}