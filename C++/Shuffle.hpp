#include <ctime>

void Shuffle(int *sub_key)
{
    // C++ random_shuffle does not work for me
    srand(time(NULL));
    int rand_pos, tmp;
    for (int i = 0; i < 30; i++)
    {
        rand_pos = rand() % (i + 1);
        tmp = sub_key[i];
        sub_key[i] = sub_key[rand_pos];
        sub_key[rand_pos] = tmp;
    }
}
