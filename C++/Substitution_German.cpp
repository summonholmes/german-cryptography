#include <iostream>
#include <fstream>
#include <sstream>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include "ASCII_30_Add.hpp"
#include "PreProcess_German.hpp"
#include "Shuffle.hpp"
#include "EncryptSubstitution_German.hpp"
#include "ASCII_Enc_German.hpp"
#include "ASCII_Dec_German.hpp"
#include "DecryptSubstitution_German.hpp"
#include "ASCII_30_Del.hpp"

using namespace std;

void PreProcess_German(char *,char *);
void ASCII_30_Add(int *, int *, int *);
void EncryptSubstitution_German(int *, int *, int *, int *);
void ASCII_Enc_German(int *, int *, int *);
void ASCII_Dec_German(int *, int *, int *);
void DecryptSubstitution_German(int *, int *, int *, int *, int *);
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
    
    int array_len = plaintext.length();
    int alpha_len = 30;
    int k[alpha_len];
    int plaintext_ascii[array_len];
    int plaintext_ascii_30[array_len];
    int ciphertext_ascii_30[array_len];
    int ciphertext_ascii[array_len];
    int ciphertext_ascii_dec_30[array_len];
    int dectext_ascii_30[array_len];
    int dectext_ascii[array_len];
    srand(time(NULL));

    PreProcess_German(&plaintext);
    for (int i = 0; i < array_len; i++) {plaintext_ascii[i] = plaintext[i];}
    for (int i = 0; i < 30; i++){k[i] = i + 97;}
    Shuffle(k, &alpha_len); // C++ random_shuffle does not work for me

    ASCII_30_Add(plaintext_ascii, &array_len, plaintext_ascii_30);
    EncryptSubstitution_German(plaintext_ascii_30, &array_len, k, ciphertext_ascii_30);
    ASCII_Enc_German(ciphertext_ascii_30, &array_len, ciphertext_ascii);
    ASCII_Dec_German(ciphertext_ascii, &array_len, ciphertext_ascii_dec_30);
    DecryptSubstitution_German(ciphertext_ascii_dec_30, &array_len, k, &alpha_len, dectext_ascii_30);
    ASCII_30_Del(dectext_ascii_30, &array_len, dectext_ascii);

    for (int i = 0; i < array_len; i++) {ciphertext += ciphertext_ascii[i];}
    for (int i = 0; i < array_len; i++) {dectext += dectext_ascii[i];}

    cout << plaintext.substr(0, 100) << endl;
    cout << ciphertext.substr(0, 109) << endl;
    cout << dectext.substr(0, 100) << endl;

    return 0;
}
