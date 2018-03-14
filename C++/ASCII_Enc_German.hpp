void ASCII_Enc_German(int *plaintext_ascii, int *array_len, int *ciphertext_ascii)
{
    int j = 0;
    for (int i = 0; i < *array_len; i++)
    {
        if (plaintext_ascii[j] == 91)
        {
            ciphertext_ascii[i] = -61;
            ciphertext_ascii[i + 1] = -124;
            j++;
            i++;
        }
        else if (plaintext_ascii[j] == 92)
        {
            ciphertext_ascii[i] = -61;
            ciphertext_ascii[i + 1] = -106;
            j++;
            i++;
        }
        else if (plaintext_ascii[j] == 93)
        {
            ciphertext_ascii[i] = -61;
            ciphertext_ascii[i + 1] = -100;
            j++;
            i++;
        }
        else if (plaintext_ascii[j] == 94)
        {
            ciphertext_ascii[i] = -61;
            ciphertext_ascii[i + 1] = -97;
            j++;
            i++;
        }
        else if (plaintext_ascii[j] > 0)
        {
            ciphertext_ascii[i] = plaintext_ascii[j];
            j++;
        }
    }
}