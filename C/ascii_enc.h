void ascii_enc(int *plaintext_ascii, int *ciphertext_ascii)
{
    while (*plaintext_ascii)
    {
        if (*plaintext_ascii == 91 || *plaintext_ascii == 92 || *plaintext_ascii == 93 || *plaintext_ascii == 94)
        {
            *ciphertext_ascii++ = -61;
            if (*plaintext_ascii == 91)
            {
                *ciphertext_ascii++ = -124;
            }
            else if (*plaintext_ascii == 92)
            {
                *ciphertext_ascii++ = -106;
            }
            else if (*plaintext_ascii == 93)
            {
                *ciphertext_ascii++ = -100;
            }
            else if (*plaintext_ascii == 94)
            {
                *ciphertext_ascii++ = -97;
            }
            plaintext_ascii++;
        }
        else
        {
            *ciphertext_ascii++ = *plaintext_ascii++;
        }
    }
    *ciphertext_ascii = 0;
}