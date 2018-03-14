void ASCII_30_Add(int *plaintext_ascii, int *array_len)
{
    for (int i = 0; i < *array_len; i++)
    {
        if (plaintext_ascii[i] == -61 && plaintext_ascii[i + 1] == -92)
        {
            plaintext_ascii[i] = 123;
        }
        else if (plaintext_ascii[i] == -61 && plaintext_ascii[i + 1] == -74)
        {
            plaintext_ascii[i] = 124;
        }
        else if (plaintext_ascii[i] == -61 && plaintext_ascii[i + 1] == -68)
        {
            plaintext_ascii[i] = 125;
        }
        else if (plaintext_ascii[i] == -61 && plaintext_ascii[i + 1] == -97)
        {
            plaintext_ascii[i] = 126;
        }
    }
}