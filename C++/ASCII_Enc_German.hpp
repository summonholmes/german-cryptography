void ASCII_Enc_German(int *ciphertext_ascii_30, int *text_len, int *ciphertext_ascii)
{
    int j = 0;
    for (int i = 0; i < *text_len; i++)
    {
        if (ciphertext_ascii_30[i] > 90)
        {
            if (ciphertext_ascii_30[i] == 91)
            {
                ciphertext_ascii[j] = -61;
                ciphertext_ascii[j + 1] = -124;
            }
            else if (ciphertext_ascii_30[i] == 92)
            {
                ciphertext_ascii[j] = -61;
                ciphertext_ascii[j + 1] = -106;
            }
            else if (ciphertext_ascii_30[i] == 93)
            {
                ciphertext_ascii[j] = -61;
                ciphertext_ascii[j + 1] = -100;
            }
            else if (ciphertext_ascii_30[i] == 94)
            {
                ciphertext_ascii[j] = -61;
                ciphertext_ascii[j + 1] = -97;
            }
            j += 2;
        }
        else if (ciphertext_ascii_30[i] > 64 && ciphertext_ascii_30[i] < 91)
        {
            ciphertext_ascii[j] = ciphertext_ascii_30[i];
            j++;
        }
    }
}
