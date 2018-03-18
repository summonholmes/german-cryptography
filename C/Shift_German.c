#include <stdio.h>
#include "PreProcess_German.h"
#include "ASCII_30_Add.h"
#include "EncryptShift_German.h"
#include "ASCII_Enc_German.h"
#include "ASCII_Dec_German.h"
#include "DecryptShift_German.h"
#include "ASCII_30_Del.h"

void PreProcess_German(char *,char *);
void ASCII_30_Add(int *, int *, int *);
void EncryptShift_German(int *, int *, int *, int *);
void ASCII_Enc_German(int *, int *, int *);
void ASCII_Dec_German(int *, int *, int *);
void DecryptShift_German(int *, int *, int *, int *);
void ASCII_30_Del(int *, int *, int *);

int main()
{
    FILE *f;

    int array_len = 2744;
    char rawtext[3442];
    char plaintext[array_len];
    
    f = fopen("nachtlied-utf-8.txt", "r");
    if (!f) {printf("File not found!"); return 1;}
    fread(rawtext, 1, 3442, f);
    fclose(f);

    int k = 23;
    int plaintext_ascii[array_len];
    int plaintext_ascii_30[array_len];
    int ciphertext_ascii_30[array_len];
    int ciphertext_ascii[array_len];
    int ciphertext_ascii_dec_30[array_len];
    int dectext_ascii_30[array_len];
    int dectext_ascii[array_len];

    PreProcess_German(rawtext, plaintext);
    for (int i = 0; i < 2744; i++) {plaintext_ascii[i] = plaintext[i];}

    ASCII_30_Add(plaintext_ascii, &array_len, plaintext_ascii_30);
    EncryptShift_German(plaintext_ascii_30, &k, &array_len, ciphertext_ascii_30);
    ASCII_Enc_German(ciphertext_ascii_30, &array_len, ciphertext_ascii);
    ASCII_Dec_German(ciphertext_ascii, &array_len, ciphertext_ascii_dec_30);
    DecryptShift_German(ciphertext_ascii_dec_30, &k, &array_len, dectext_ascii_30);
    ASCII_30_Del(dectext_ascii_30, &array_len, dectext_ascii);
    
    for (int i = 300; i < 400; i++ ) {printf("%c", plaintext[i]);} printf("\n");
    for (int i = 387; i < 500; i++ ) {printf("%c", ciphertext_ascii[i]);} printf("\n");
    for (int i = 300; i < 400; i++ ) {printf("%c", dectext_ascii[i]);} printf("\n");

    return 0;
}