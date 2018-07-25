#include <stdio.h>
#include <stdlib.h>
#include "filecheck.h"
#include "memcheck_char.h"
#include "memcheck_int.h"
#include "preprocess.h"
#include "text_to_ascii.h"
#include "ascii_30_add.h"
#include "encrypt_shift.h"
#include "ascii_enc.h"
#include "ascii_dec.h"
#include "decrypt_shift.h"
#include "ascii_30_del.h"
#include "print_ascii_to_text.h"

void filecheck(FILE *);
void memcheck_char(char *);
void memcheck_int(int *);
void preprocess(char *, int *);
void print_ascii_to_text(int *, int *);
void text_to_ascii(char *, int *, int *);
void ascii_30_add(int *);
void encrypt_shift(int *, int *);
void ascii_enc(int *, int *, int *);
void ascii_dec(int *);
void decrypt_shift(int *, int *);
void ascii_30_del(int *, int *, int *);

int main(void)
{
    /* Load the file */
    FILE *nachtlied_file;
    nachtlied_file = fopen("nachtlied-utf-8.txt", "r");
    filecheck(nachtlied_file);

    /* Get size of file */
    fseek(nachtlied_file, 0, SEEK_END);
    int nachtlied_size = ftell(nachtlied_file);
    fseek(nachtlied_file, 0, SEEK_SET);

    /* Allocate array */
    char nachtlied_text[nachtlied_size + 1];

    /* Read the file */
    fread(nachtlied_text, 1, nachtlied_size, nachtlied_file);
    fclose(nachtlied_file);

    /* Processing & Reallocation */
    preprocess(nachtlied_text, &nachtlied_size);

    /* Allocate arrays */
    int nachtlied_ascii[nachtlied_size + 1];
    int ciphertext_ascii[nachtlied_size + 1];
    int dectext_ascii[nachtlied_size + 1];

    /* Convert to ASCII */
    text_to_ascii(nachtlied_text, &nachtlied_size, nachtlied_ascii);

    /* Print plaintext */
    print_ascii_to_text(nachtlied_ascii, &nachtlied_size);

    /* Localize umlaut and eszett characters */
    ascii_30_add(nachtlied_ascii);

    /* Encrypt */
    encrypt_shift(nachtlied_ascii, &nachtlied_size);

    /* Unlocalize umlaut and eszett characters */
    ascii_enc(nachtlied_ascii, ciphertext_ascii, &nachtlied_size);

    /* Print ciphertext */
    print_ascii_to_text(ciphertext_ascii, &nachtlied_size);

    /* Localize umlaut and eszett characters */
    ascii_dec(ciphertext_ascii);

    /* Decrypt */
    decrypt_shift(ciphertext_ascii, &nachtlied_size);

    /* Unlocalize umlaut and eszett characters */
    ascii_30_del(ciphertext_ascii, dectext_ascii, &nachtlied_size);

    /* Print decrypted ciphertext */
    print_ascii_to_text(dectext_ascii, &nachtlied_size);

    return 0;
}