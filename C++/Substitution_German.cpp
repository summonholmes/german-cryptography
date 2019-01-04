#include <iostream>
#include "LoadFile.hpp"
#include "PreProcess_German.hpp"
#include "TextToASCII.hpp"
#include "ASCII_30_Add.hpp"
#include "Shuffle.hpp"
#include "EncryptSubstitution_German.hpp"
#include "ASCII_Enc_German.hpp"
#include "ASCII_Dec_German.hpp"
#include "DecryptSubstitution_German.hpp"
#include "ASCII_30_Del.hpp"
#include "ToString.hpp"

using namespace std;

string LoadFile();
void PreProcess_German(char *, char *);
void TextToASCII(int *, string *, int *);
void InitSubkey(int *);
void InitLookupKeys(int *, int *, int *);
void ASCII_30_Add(int *, int *, int *);
void EncryptSubstitution_German(int *, int *, int *, int *);
void ASCII_Enc_German(int *, int *, int *);
void ASCII_Dec_German(int *, int *, int *);
void DecryptSubstitution_German(int *, int *, int *, int *);
void ASCII_30_Del(int *, int *, int *);
string ToString(int *, int *);

int main()
{
    // Get the raw text, but name plaintext due to pointers
    string plaintext = LoadFile();
    PreProcess_German(&plaintext);

    // Declare required variables
    int text_len = plaintext.length();
    int sub_key[30];
    int plaintext_ascii[text_len], ciphertext_ascii[text_len], dectext_ascii[text_len];
    int plaintext_ascii_30[text_len], ciphertext_ascii_30[text_len], dectext_ascii_30[text_len];

    // Perform the entire process on the ASCII arrays
    TextToASCII(plaintext_ascii, &plaintext, &text_len);
    InitSubkey(sub_key);
    Shuffle(sub_key);
    ASCII_30_Add(plaintext_ascii, &text_len, plaintext_ascii_30);
    EncryptSubstitution_German(plaintext_ascii_30, &text_len, sub_key, ciphertext_ascii_30);
    ASCII_Enc_German(ciphertext_ascii_30, &text_len, ciphertext_ascii);
    ASCII_Dec_German(ciphertext_ascii, &text_len, ciphertext_ascii_30);
    DecryptSubstitution_German(ciphertext_ascii_30, &text_len, sub_key, dectext_ascii_30);
    ASCII_30_Del(dectext_ascii_30, &text_len, dectext_ascii);

    // Get the final strings
    string ciphertext = ToString(ciphertext_ascii, &text_len);
    string dectext = ToString(dectext_ascii, &text_len);

    cout << plaintext.substr(0, 100) << endl;
    cout << ciphertext.substr(0, 109) << endl;
    cout << dectext.substr(0, 100) << endl;

    return 0;
}

void InitSubkey(int *sub_key)
{
    for (int i = 0; i < 30; i++)
    {
        sub_key[i] = i + 97;
    }
}
