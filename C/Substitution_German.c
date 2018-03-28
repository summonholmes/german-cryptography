#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "PreProcess_German.h"
#include "Shuffle.h"
#include "ASCII_30_Add.h"
#include "EncryptSubstitution_German.h"
#include "ASCII_Enc_German.h"
#include "ASCII_Dec_German.h"
#include "DecryptSubstitution_German.h"
#include "ASCII_30_Del.h"

void PreProcess_German(char *, char *);
void Shuffle(int *, int *);
void ASCII_30_Add(int *, int *, int *);
void EncryptSubstitution_German(int *, int *, int *, int *);
void ASCII_Enc_German(int *, int *, int *);
void ASCII_Dec_German(int *, int *, int *);
void DecryptSubstitution_German(int *, int *, int *, int *, int *);
void ASCII_30_Del(int *, int *, int *);

int main()
{
    FILE *f;
    int array_len_raw = 3442;
    int array_len = 2745;
    int alpha_len = 30;
    char rawtext[array_len_raw];
    char plaintext[array_len];
    int key_list[alpha_len];
    int plaintext_ascii[array_len];
    int plaintext_ascii_30[array_len];
    int ciphertext_ascii_30[array_len];
    int ciphertext_ascii[array_len];
    int ciphertext_ascii_dec_30[array_len];
    int dectext_ascii_30[array_len];
    int dectext_ascii[array_len];
    srand(time(NULL));

    f = fopen("nachtlied-utf-8.txt", "r");
    if (!f)
    {
        printf("File not found!");
        return 1;
    }
    fread(rawtext, 1, array_len_raw, f);
    fclose(f);

    PreProcess_German(rawtext, plaintext);
    for (int i = 0; i < array_len; i++)
    {
        plaintext_ascii[i] = plaintext[i];
    }
    for (int i = 0; i < alpha_len; i++)
    {
        key_list[i] = i + 97;
    }
    Shuffle(key_list, &alpha_len);

    ASCII_30_Add(plaintext_ascii, &array_len, plaintext_ascii_30);
    EncryptSubstitution_German(plaintext_ascii_30, &array_len, key_list, ciphertext_ascii_30);
    ASCII_Enc_German(ciphertext_ascii_30, &array_len, ciphertext_ascii);
    ASCII_Dec_German(ciphertext_ascii, &array_len, ciphertext_ascii_dec_30);
    DecryptSubstitution_German(ciphertext_ascii_dec_30, &array_len, key_list, &alpha_len, dectext_ascii_30);
    ASCII_30_Del(dectext_ascii_30, &array_len, dectext_ascii);

    for (int i = 0; i < 100; i++)
    {
        printf("%c", plaintext[i]);
    }
    printf("\n");
    for (int i = 0; i < 114; i++)
    {
        printf("%c", ciphertext_ascii[i]);
    }
    printf("\n");
    for (int i = 0; i < 100; i++)
    {
        printf("%c", dectext_ascii[i]);
    }
    printf("\n");

    return 0;
}