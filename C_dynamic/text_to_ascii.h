void text_to_ascii(char *nachtlied_text, int *nachtlied_size, int *nachtlied_ascii)
{
    for (int i = 0; i < *nachtlied_size; i++)
    {
        nachtlied_ascii[i] = nachtlied_text[i];
    }
}