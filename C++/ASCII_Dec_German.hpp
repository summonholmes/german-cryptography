void ASCII_Dec_German(int *ciphertext_ascii, int *array_len)
{
    int j = 0;
    for (int i = 0; i < *array_len; i++)
    {
        if (ciphertext_ascii[i] == -61 && ciphertext_ascii[i + 1] == -124)
        {
            ciphertext_ascii[j] = 91;
            j++;
        }
        else if (ciphertext_ascii[i] == -61 && ciphertext_ascii[i + 1] == -106)
        {
            ciphertext_ascii[j] = 92;
            j++;
        }
        else if (ciphertext_ascii[i] == -61 && ciphertext_ascii[i + 1] == -100)
        {
            ciphertext_ascii[j] = 93;
            j++;
        }
        else if (ciphertext_ascii[i] == -61 && ciphertext_ascii[i + 1] == -97)
        {
            ciphertext_ascii[j] = 94;
            j++;
        }
        else if (ciphertext_ascii[i] > 0)
        {
            ciphertext_ascii[j] = ciphertext_ascii[i];
            j++;
        }
    }
}