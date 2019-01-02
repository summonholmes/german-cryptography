void ascii_30_add(int *plaintext_ascii)
{
    /* Two concurrent pointers for character traversal */
    int *plaintext = plaintext_ascii, *plaintext_30 = plaintext_ascii;

    while (*plaintext)
    {
        if (*plaintext == -61)
        {
            plaintext++;
            if (*plaintext == -92)
            {
                *plaintext_30++ = 123;
            }
            else if (*plaintext == -74)
            {
                *plaintext_30++ = 124;
            }
            else if (*plaintext == -68)
            {
                *plaintext_30++ = 125;
            }
            else if (*plaintext == -97)
            {
                *plaintext_30++ = 126;
            }
            plaintext++;
        }
        else
        {
            *plaintext_30++ = *plaintext++;
        }
    }
    plaintext_30 = 0;
}