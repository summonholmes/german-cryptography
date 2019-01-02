void ascii_30_del(int *ciphertext_ascii, int *dectext_ascii)
{
    while (*ciphertext_ascii)
    {
        if (*ciphertext_ascii == 123 || *ciphertext_ascii == 124 || *ciphertext_ascii == 125 || *ciphertext_ascii == 126)
        {
            *dectext_ascii++ = -61;
            if (*ciphertext_ascii == 123)
            {
                *dectext_ascii++ = -92;
            }
            else if (*ciphertext_ascii == 124)
            {
                *dectext_ascii++ = -74;
            }
            else if (*ciphertext_ascii == 125)
            {
                *dectext_ascii++ = -68;
            }
            else if (*ciphertext_ascii == 126)
            {
                *dectext_ascii++ = -97;
            }
            ciphertext_ascii++;
        }
        else
        {
            *dectext_ascii++ = *ciphertext_ascii++;
        }
    }
    *dectext_ascii = 0;
}