void ASCII_Dec_German(int *ciphertext_ascii, int *text_len, int *ciphertext_ascii_30)
{
    int j = 0;
    for (int i = 0; i < *text_len; i++)
    {
        if (ciphertext_ascii[i] == -61)
        {
            if (ciphertext_ascii[i + 1] == -124)
            {
                ciphertext_ascii_30[j] = 91;
            }
            else if (ciphertext_ascii[i + 1] == -106)
            {
                ciphertext_ascii_30[j] = 92;
            }
            else if (ciphertext_ascii[i + 1] == -100)
            {
                ciphertext_ascii_30[j] = 93;
            }
            else if (ciphertext_ascii[i + 1] == -97)
            {
                ciphertext_ascii_30[j] = 94;
            }
            j++;
        }
        else if (ciphertext_ascii[i] > 64 && ciphertext_ascii[i] < 91)
        {
            ciphertext_ascii_30[j] = ciphertext_ascii[i];
            j++;
        }
    }
}
