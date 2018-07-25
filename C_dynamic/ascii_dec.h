void ascii_dec(int *ciphertext_ascii)
{
    /* Two concurrent pointers for character traversal */
    int *dectext = ciphertext_ascii, *dectext_30 = ciphertext_ascii;

    while (*dectext)
    {
        if (*dectext == -61)
        {
            dectext++;
            if (*dectext == -124)
            {
                *dectext_30++ = 91;
            }
            else if (*dectext == -106)
            {
                *dectext_30++ = 92;
            }
            else if (*dectext == -100)
            {
                *dectext_30++ = 93;
            }
            else if (*dectext == -97)
            {
                *dectext_30++ = 94;
            }
            dectext++;
        }
        else
        {
            *dectext_30++ = *dectext++;
        }
    }
    *dectext_30 = 0;
}
