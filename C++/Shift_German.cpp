#include <iostream>
#include <fstream>
#include <sstream>
#include <cmath>
#include <algorithm>
#include <cstring>
#include "PreProcess_German.hpp"
#include "ASCII_30_Add.hpp"
#include "EncryptShift_German.hpp"
#include "ASCII_Enc_German.hpp"
#include "ASCII_Dec_German.hpp"
#include "DecryptShift_German.hpp"
#include "ASCII_30_Del.hpp"

using namespace std;

void PreProcess_German(string *);
void ASCII_30_Add(int *, int *, int *);
void EncryptShift_German(int *, int *, int *, int *);
void ASCII_Enc_German(int *, int *, int *);
void ASCII_Dec_German(int *, int *, int *);
void DecryptShift_German(int *, int *, int *, int *);
void ASCII_30_Del(int *, int *, int *);

int main()
{
    ifstream get_file("nachtlied-utf-8.txt");

    if (!get_file)
    {
        cout << "Couldn't open the file";
        return 0;
    }

    stringstream f;
    f << get_file.rdbuf();
    get_file.close();

    string plaintext = f.str();
    string ciphertext = "";
    string dectext = "";

    int k = 23;
    int array_len = plaintext.length();
    int plaintext_ascii[array_len];
    int plaintext_ascii_30[array_len];
    int ciphertext_ascii_30[array_len];
    int ciphertext_ascii[array_len];
    int ciphertext_ascii_dec_30[array_len];
    int dectext_ascii_30[array_len];
    int dectext_ascii[array_len];
    
    PreProcess_German(&plaintext);
    for (int i = 0; i < array_len; i++) {plaintext_ascii[i] = plaintext[i];}

    ASCII_30_Add(plaintext_ascii, &array_len, plaintext_ascii_30);
    EncryptShift_German(plaintext_ascii_30, &k, &array_len, ciphertext_ascii_30);
    ASCII_Enc_German(ciphertext_ascii_30, &array_len, ciphertext_ascii);
    ASCII_Dec_German(ciphertext_ascii, &array_len, ciphertext_ascii_dec_30);
    DecryptShift_German(ciphertext_ascii_dec_30, &k, &array_len, dectext_ascii_30);
    ASCII_30_Del(dectext_ascii_30, &array_len, dectext_ascii);

    for (int i = 0; i < array_len; i++) {ciphertext += ciphertext_ascii[i];}
    for (int i = 0; i < array_len; i++) {dectext += dectext_ascii[i];}

    cout << plaintext.substr(300, 100) << endl;
    cout << ciphertext.substr(387, 113) << endl;
    cout << dectext.substr(300, 100) << endl;

    return 0;
}
