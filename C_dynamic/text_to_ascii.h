void text_to_ascii(char *nachtlied_text, int const *nachtlied_processed_size, int *plaintext_ascii)
{
    for (int i = 0; i < *nachtlied_processed_size; i++)
    {
        plaintext_ascii[i] = nachtlied_text[i];
    }
}