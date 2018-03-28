void Shuffle(int *key_list, int *alpha_len)
{
    int rand_position, temp;
    for (int i = 0; i < *alpha_len; i++)
    {
        rand_position = rand() % (i + 1);
        temp = key_list[i];
        key_list[i] = key_list[rand_position];
        key_list[rand_position] = temp;
    }
}