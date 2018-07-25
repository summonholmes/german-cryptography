void ascii_30_add(int *nachtlied_ascii)
{
    /* Two concurrent pointers for character traversal */
    int *plaintext_ascii = nachtlied_ascii, *plaintext_ascii_30 = nachtlied_ascii;

    while (*plaintext_ascii)
    {
        if (*plaintext_ascii == -61)
        {
            plaintext_ascii++;
            if (*plaintext_ascii == -92)
            {
                *plaintext_ascii_30++ = 123;
            }
            else if (*plaintext_ascii == -74)
            {
                *plaintext_ascii_30++ = 124;
            }
            else if (*plaintext_ascii == -68)
            {
                *plaintext_ascii_30++ = 125;
            }
            else if (*plaintext_ascii == -97)
            {
                *plaintext_ascii_30++ = 126;
            }
            plaintext_ascii++;
        }
        else
        {
            *plaintext_ascii_30++ = *plaintext_ascii++;
        }
    }
    plaintext_ascii_30 = 0;
}