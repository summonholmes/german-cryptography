#include <stdio.h>
#include "PreProcess_German.h"
#include "ASCII_30_Add.h"
#include "EncryptShift_German.h"
#include "ASCII_Enc_German.h"
#include "ASCII_Dec_German.h"
#include "DecryptShift_German.h"
#include "ASCII_30_Del.h"

void PreProcess_German(char *,char *);
void ASCII_30_Add(int *, int *);
void EncryptShift_German(int *, int *, int *);
void ASCII_Enc_German(int *, int *, int *);
void ASCII_Dec_German(int *, int *);
void DecryptShift_German(int *, int *, int *);
void ASCII_30_Del(int *, int *, int *);

int main()
{
    FILE *f;
    char rawtext[3442];
    char plaintext[2744];
    
    f = fopen("nachtlied-utf-8.txt", "r");
    if (!f) {printf("File not found!"); return 1;}
    fread(rawtext, 1, 3442, f);
    fclose(f);

    PreProcess_German(rawtext, plaintext);
    for (int i = 0; i < 2744; i++) {printf("%c", plaintext[i]);}

    return 0;
}