void Shuffle(int *k, int *alpha_len)
{
    int j, temp;
    for (int i = 0; i < *alpha_len; i++)
    {
        j = rand() % (i + 1);
        temp = k[i];
        k[i] = k[j];
        k[j] = temp;
    }
}