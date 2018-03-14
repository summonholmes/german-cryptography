void ASCII_30_Del(int *ciphertext_ascii, int *array_len, int *dectext_ascii)
{
    int j = 0;
    for (int i = 0; i < *array_len; i++)
    {
        if (ciphertext_ascii[i] == 123)
        {
            dectext_ascii[j] = -61;
            dectext_ascii[j + 1] = -92;
            j += 2;
        }
        else if (ciphertext_ascii[i] == 124)
        {
            dectext_ascii[j] = -61;
            dectext_ascii[j + 1] = -74;
            j += 2;
        }
        else if (ciphertext_ascii[i] == 125)
        {
            dectext_ascii[j] = -61;
            dectext_ascii[j + 1] = -68;
            j += 2;
        }
        else if (ciphertext_ascii[i] == 126)
        {
            dectext_ascii[j] = -61;
            dectext_ascii[j + 1] = -97;
            j += 2;
        }
        else if (ciphertext_ascii[i] > 0)
        {
            dectext_ascii[j] = ciphertext_ascii[i];
            j++;
        }
    }
}