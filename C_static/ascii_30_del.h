void ascii_30_del(int *ciphertext_ascii, int *dectext_ascii, int *nachtlied_size)
{
    int j = 0;
    for (int i = 0; i < *nachtlied_size; i++)
    {
        if (ciphertext_ascii[i] == 123 || ciphertext_ascii[i] == 124 || ciphertext_ascii[i] == 125 || ciphertext_ascii[i] == 126)
        {
            dectext_ascii[j] = -61;
            if (ciphertext_ascii[i] == 123)
            {
                dectext_ascii[j + 1] = -92;
            }
            else if (ciphertext_ascii[i] == 124)
            {
                dectext_ascii[j + 1] = -74;
            }
            else if (ciphertext_ascii[i] == 125)
            {
                dectext_ascii[j + 1] = -68;
            }
            else if (ciphertext_ascii[i] == 126)
            {
                dectext_ascii[j + 1] = -97;
            }
            j += 2;
        }
        else
        {
            dectext_ascii[j] = ciphertext_ascii[i];
            j++;
        }
    }
}