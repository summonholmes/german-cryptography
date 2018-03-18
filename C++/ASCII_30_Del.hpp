void ASCII_30_Del(int *dectext_ascii_30, int *array_len, int *dectext_ascii)
{
    int j = 0;
    for (int i = 0; i < *array_len; i++)
    {
        if (dectext_ascii_30[i] == 123)
        {
            dectext_ascii[j] = -61; j++;
            dectext_ascii[j] = -92; j++;
        }
        else if (dectext_ascii_30[i] == 124)
        {
            dectext_ascii[j] = -61; j++;
            dectext_ascii[j] = -74; j++;
        }
        else if (dectext_ascii_30[i] == 125)
        {
            dectext_ascii[j] = -61; j++;
            dectext_ascii[j] = -68; j++;
        }
        else if (dectext_ascii_30[i] == 126)
        {
            dectext_ascii[j] = -61; j++;
            dectext_ascii[j] = -97; j++;
        }
        else if (dectext_ascii_30[i] > 96 && dectext_ascii_30[i] < 123)
        {
            dectext_ascii[j] = dectext_ascii_30[i];
            j++;
        }
    }
}
