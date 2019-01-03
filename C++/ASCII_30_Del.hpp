void ASCII_30_Del(int *dectext_ascii_30, int *text_len, int *dectext_ascii)
{
    int j = 0;
    for (int i = 0; i < *text_len; i++)
    {
        if (dectext_ascii_30[i] > 122)
        {
            if (dectext_ascii_30[i] == 123)
            {
                dectext_ascii[j] = -61;
                dectext_ascii[j + 1] = -92;
            }
            else if (dectext_ascii_30[i] == 124)
            {
                dectext_ascii[j] = -61;
                dectext_ascii[j + 1] = -74;
            }
            else if (dectext_ascii_30[i] == 125)
            {
                dectext_ascii[j] = -61;
                dectext_ascii[j + 1] = -68;
            }
            else if (dectext_ascii_30[i] == 126)
            {
                dectext_ascii[j] = -61;
                dectext_ascii[j + 1] = -97;
            }
            j += 2;
        }
        else if (dectext_ascii_30[i] > 96 && dectext_ascii_30[i] < 123)
        {
            dectext_ascii[j] = dectext_ascii_30[i];
            j++;
        }
    }
}
