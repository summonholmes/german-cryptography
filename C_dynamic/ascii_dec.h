void ascii_dec(int *nachtlied_ascii)
{
    /* Two concurrent pointers for character traversal */
    int *dectext_ascii_30 = nachtlied_ascii, *dectext_ascii = nachtlied_ascii;

    while (*dectext_ascii_30)
    {
        if (*dectext_ascii_30 == -61)
        {
            dectext_ascii_30++;
            if (*dectext_ascii_30 == -124)
            {
                *dectext_ascii++ = 91;
            }
            else if (*dectext_ascii_30 == -106)
            {
                *dectext_ascii++ = 92;
            }
            else if (*dectext_ascii_30 == -100)
            {
                *dectext_ascii++ = 93;
            }
            else if (*dectext_ascii_30 == -97)
            {
                *dectext_ascii++ = 94;
            }
            dectext_ascii_30++;
        }
        else
        {
            *dectext_ascii++ = *dectext_ascii_30++;
        }
    }
    *dectext_ascii = 0;
}
