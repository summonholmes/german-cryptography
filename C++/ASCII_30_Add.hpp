void ASCII_30_Add(int *plaintext_ascii, int *array_len, int *plaintext_ascii_30)
{
    int j = 0;
    for (int i = 0; i < *array_len; i++)
    {
        if (plaintext_ascii[i] == -61)
        {
            i++;
            if (plaintext_ascii[i] == -92)
            {
                plaintext_ascii_30[j] = 123;
                j++;
            }
            else if (plaintext_ascii[i] == -74)
            {
                plaintext_ascii_30[j] = 124;
                j++;
            }
            else if (plaintext_ascii[i] == -68)
            {
                plaintext_ascii_30[j] = 125;
                j++;
            }
            else if (plaintext_ascii[i] == -97)
            {
                plaintext_ascii_30[j] = 126;
                j++;
            }
        }
        else if(plaintext_ascii[i] > 96 && plaintext_ascii[i] < 123)
        {
            plaintext_ascii_30[j] = plaintext_ascii[i];
            j++;
        }
    }
}