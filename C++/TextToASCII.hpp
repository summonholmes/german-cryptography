#include <iostream>

using namespace std;

void TextToASCII(int *plaintext_ascii, string *plaintext, int *array_len)
{
    for (int i = 0; i < *array_len; i++)
    {
        plaintext_ascii[i] = (*plaintext)[i];
    }
}
