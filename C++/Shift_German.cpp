// Imports
#include <iostream>
#include <cmath>
#include "LoadFile.hpp"
#include "PreProcess_German.hpp"
#include "ASCII_30_Add.hpp"
#include "EncryptShift_German.hpp"
#include "ASCII_Enc_German.hpp"
#include "ASCII_Dec_German.hpp"
#include "DecryptShift_German.hpp"
#include "ASCII_30_Del.hpp"
#include "ToString.hpp"
#include "TextToASCII.hpp"

// Shorten keywords
using namespace std;

// Prototypes
string LoadFile();
void PreProcess_German(string *);
void TextToASCII(int *, string *, int *);
void ASCII_30_Add(int *, int *, int *);
void EncryptShift_German(int *, int *, int *, int *);
void ASCII_Enc_German(int *, int *, int *);
void ASCII_Dec_German(int *, int *, int *);
void DecryptShift_German(int *, int *, int *, int *);
void ASCII_30_Del(int *, int *, int *);
string ToString(int *, int *);

// Shift cipher main function
int main()
{
    // Get the raw text, but name plaintext due to pointers
    string plaintext = LoadFile();

    // Convert rawtext to plaintext
    PreProcess_German(&plaintext);

    // Declare required variables
    int text_len = plaintext.length();
    int plaintext_ascii[text_len], ciphertext_ascii[text_len], dectext_ascii[text_len];
    int plaintext_ascii_30[text_len], ciphertext_ascii_30[text_len], dectext_ascii_30[text_len];
    int shift = 23;

    // Perform the entire process on the ASCII arrays
    TextToASCII(plaintext_ascii, &plaintext, &text_len);
    ASCII_30_Add(plaintext_ascii, &text_len, plaintext_ascii_30);
    EncryptShift_German(plaintext_ascii_30, &shift, &text_len, ciphertext_ascii_30);
    ASCII_Enc_German(ciphertext_ascii_30, &text_len, ciphertext_ascii);
    ASCII_Dec_German(ciphertext_ascii, &text_len, ciphertext_ascii_30);
    DecryptShift_German(ciphertext_ascii_30, &shift, &text_len, dectext_ascii_30);
    ASCII_30_Del(dectext_ascii_30, &text_len, dectext_ascii);

    // Get the final strings
    string ciphertext = ToString(ciphertext_ascii, &text_len);
    string dectext = ToString(dectext_ascii, &text_len);

    // Print substring results
    cout << plaintext.substr(300, 100) << endl;
    cout << ciphertext.substr(387, 113) << endl;
    cout << dectext.substr(300, 100) << endl;

    return 0;
}
