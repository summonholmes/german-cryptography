void ASCII_30_Add(int *plaintext_ascii, int *text_len, int *plaintext_ascii_30)
{
    int j = 0;
    for (int i = 0; i < *text_len; i++)
    {
        if (plaintext_ascii[i] == -61)
        {
            if (plaintext_ascii[i + 1] == -92)
            {
                plaintext_ascii_30[j] = 123;
            }
            else if (plaintext_ascii[i + 1] == -74)
            {
                plaintext_ascii_30[j] = 124;
            }
            else if (plaintext_ascii[i + 1] == -68)
            {
                plaintext_ascii_30[j] = 125;
            }
            else if (plaintext_ascii[i + 1] == -97)
            {
                plaintext_ascii_30[j] = 126;
            }
            j++;
        }
        else if (plaintext_ascii[i] > 96 && plaintext_ascii[i] < 123)
        {
            plaintext_ascii_30[j] = plaintext_ascii[i];
            j++;
        }
    }
}
