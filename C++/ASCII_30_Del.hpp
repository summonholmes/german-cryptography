void ASCII_30_Del(int *ciphertext_ascii, int *array_len, int *dectext_ascii)
{
    for (int i = 0; i < *array_len; i++)
    {
        if (ciphertext_ascii[i] == 123)
        {
            dectext_ascii[i] = -61;
            dectext_ascii[i + 1] = -92;
            i++;
        }
        else if (ciphertext_ascii[i] == 124)
        {
            dectext_ascii[i] = -61;
            dectext_ascii[i + 1] = -74;
            i++;
        }
        else if (ciphertext_ascii[i] == 125)
        {
            dectext_ascii[i] = -61;
            dectext_ascii[i + 1] = -68;
            i++;
        }
        else if (ciphertext_ascii[i] == 126)
        {
            dectext_ascii[i] = -61;
            dectext_ascii[i + 1] = -97;
            i++;
        }
        else if (ciphertext_ascii[i] > 0)
        {
            dectext_ascii[i] = ciphertext_ascii[i];
        }
    }
}