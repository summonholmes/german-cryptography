void ascii_enc(int *nachtlied_ascii, int *ciphertext_ascii, int *nachtlied_size)
{
    int j = 0;
    for (int i = 0; i < *nachtlied_size; i++)
    {
        if (nachtlied_ascii[i] == 91 || nachtlied_ascii[i] == 92 || nachtlied_ascii[i] == 93 || nachtlied_ascii[i] == 94)
        {
            ciphertext_ascii[j] = -61;
            if (nachtlied_ascii[i] == 91)
            {
                ciphertext_ascii[j + 1] = -124;
            }
            else if (nachtlied_ascii[i] == 92)
            {
                ciphertext_ascii[j + 1] = -106;
            }
            else if (nachtlied_ascii[i] == 93)
            {
                ciphertext_ascii[j + 1] = -100;
            }
            else if (nachtlied_ascii[i] == 94)
            {
                ciphertext_ascii[j + 1] = -97;
            }
            j += 2;
        }
        else
        {
            ciphertext_ascii[j] = nachtlied_ascii[i];
            j++;
        }
    }
}