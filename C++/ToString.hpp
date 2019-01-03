#include <iostream>

using namespace std;

string ToString(int *text_ascii, int *text_len)
{
    string text;
    for (int i = 0; i < *text_len; i++)
    {
        text += text_ascii[i];
    }
    return text;
}
