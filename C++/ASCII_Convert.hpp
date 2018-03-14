#include<iostream>

using namespace std;

void ASCII_Convert(int *text_ascii, string *plaintext, int *array_len)
{
    string temp = *plaintext;
    for (int i = 0; i < *array_len; i++)
        {
            text_ascii[i] = temp[i]; //plaintext_ascii
        }
}