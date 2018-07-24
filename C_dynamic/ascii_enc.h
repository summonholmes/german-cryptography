void ascii_enc(int *nachtlied_ascii, int *ciphertext_ascii)
{
    while (*nachtlied_ascii)
    {
        if (*nachtlied_ascii == 91 | *nachtlied_ascii == 92 | *nachtlied_ascii == 93 | *nachtlied_ascii == 94)
        {
            *ciphertext_ascii++ = -61;
            if (*nachtlied_ascii == 91)
            {
                *ciphertext_ascii++ = -124;
            }
            else if (*nachtlied_ascii == 92)
            {
                *ciphertext_ascii++ = -106;
            }
            else if (*nachtlied_ascii == 93)
            {
                *ciphertext_ascii++ = -100;
            }
            else if (*nachtlied_ascii == 94)
            {
                *ciphertext_ascii++ = -97;
            }
            nachtlied_ascii++;
        }
        else
        {
            *ciphertext_ascii++ = *nachtlied_ascii++;
        }
    }
}