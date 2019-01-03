#include <iostream>

using namespace std;

void TextToASCII(int *plaintext_ascii, string *plaintext, int *text_len)
{
    for (int i = 0; i < *text_len; i++)
    {
        plaintext_ascii[i] = (*plaintext)[i];
    }
}
