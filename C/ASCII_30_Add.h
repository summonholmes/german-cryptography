void ASCII_30_Add(int *plaintext_ascii, int *array_len, int *plaintext_ascii_30)
{
    for (int i = 0; i < *array_len; i++)
    {
        if (plaintext_ascii[i] == -61)
        {
            if (plaintext_ascii[i + 1] == -92)
            {
                plaintext_ascii_30[i] = 123;
            }
            else if (plaintext_ascii[i + 1] == -74)
            {
                plaintext_ascii_30[i] = 124;
            }
            else if (plaintext_ascii[i + 1] == -68)
            {
                plaintext_ascii_30[i] = 125;
            }
            else if (plaintext_ascii[i + 1] == -97)
            {
                plaintext_ascii_30[i] = 126;
            }
        }
        else if (plaintext_ascii[i] > 96 && plaintext_ascii[i] < 123)
        {
            plaintext_ascii_30[i] = plaintext_ascii[i];
        }
    }
}