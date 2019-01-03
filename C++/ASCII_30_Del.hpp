void ASCII_30_Del(int *dectext_ascii_30, int *array_len, int *dectext_ascii)
{
    int j = 0;
    for (int i = 0; i < *array_len; i++)
    {
        if (dectext_ascii_30[i] == 123)
        {
            dectext_ascii[j] = -61;
            dectext_ascii[j + 1] = -92;
            j += 2;
        }
        else if (dectext_ascii_30[i] == 124)
        {
            dectext_ascii[j] = -61;
            dectext_ascii[j + 1] = -74;
            j += 2;
        }
        else if (dectext_ascii_30[i] == 125)
        {
            dectext_ascii[j] = -61;
            dectext_ascii[j + 1] = -68;
            j += 2;
        }
        else if (dectext_ascii_30[i] == 126)
        {
            dectext_ascii[j] = -61;
            dectext_ascii[j + 1] = -97;
            j += 2;
        }
        else if (dectext_ascii_30[i] > 96 && dectext_ascii_30[i] < 123)
        {
            dectext_ascii[j] = dectext_ascii_30[i];
            j++;
        }
    }
}
