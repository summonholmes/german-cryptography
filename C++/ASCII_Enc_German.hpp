void ASCII_Enc_German(int *plaintext_ascii, int *array_len, int *ciphertext_ascii)
{
    int j = 0;
    for (int i = 0; i < *array_len; i++)
    {
        if (plaintext_ascii[i] == 91)
        {
            ciphertext_ascii[j] = -61;
            ciphertext_ascii[j + 1] = -124;
            j += 2;
        }
        else if (plaintext_ascii[i] == 92)
        {
            ciphertext_ascii[j] = -61;
            ciphertext_ascii[j + 1] = -106;
            j += 2;
        }
        else if (plaintext_ascii[i] == 93)
        {
            ciphertext_ascii[j] = -61;
            ciphertext_ascii[j + 1] = -100;
            j += 2;
        }
        else if (plaintext_ascii[i] == 94)
        {
            ciphertext_ascii[j] = -61;
            ciphertext_ascii[j + 1] = -97;
            j += 2;
        }
        else if (plaintext_ascii[i] > 0)
        {
            ciphertext_ascii[j] = plaintext_ascii[i];
            j++;
        }
    }
}