void InitLookupKeys(int *, int *, int *);

void DecryptSubstitution_German(int *ciphertext_ascii_30, int *text_len, int *sub_key, int *dectext_ascii_30)
{
    int lookup_key_1[30], lookup_key_2[30];
    InitLookupKeys(sub_key, lookup_key_1, lookup_key_2);
    for (int i = 0; i < *text_len; i++)
    {
        for (int j = 0; j < 30; j++)
        {
            if ((ciphertext_ascii_30[i] - 65) == lookup_key_1[j])
            {
                dectext_ascii_30[i] = lookup_key_2[j];
            }
        }
    }
}

void InitLookupKeys(int *sub_key, int *lookup_key_1, int *lookup_key_2)
{
    for (int i = 0; i < 30; i++)
    {
        lookup_key_1[i] = sub_key[i] - 97;
        lookup_key_2[i] = i + 97;
    }
}
