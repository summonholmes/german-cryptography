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
void process(char *, int *);
void print_ascii_to_text(int *, int *);
void text_to_ascii(char *, int *, int *);
void ascii_30_add(int *, int *);
void encrypt_shift(int *);
void ascii_enc(int *, int *);
void ascii_dec(int *, int *);
void decrypt_shift(int *);
void ascii_30_del(int *, int *);

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

    /* Allocate memory */
    char *nachtlied_text = malloc(nachtlied_size * sizeof(char));
    memcheck_char(nachtlied_text);

    /* Read the file */
    fread(nachtlied_text, 1, nachtlied_size, nachtlied_file);
    fclose(nachtlied_file);

    /* Processing & Reallocation */
    preprocess(nachtlied_text, &nachtlied_size);
    nachtlied_text = realloc(nachtlied_text, nachtlied_size * sizeof(char));
    memcheck_char(nachtlied_text);

    /* Allocate more memory; reallocation not needed on these */
    int *nachtlied_ascii = malloc(nachtlied_size * sizeof(int));
    int *ciphertext_ascii = malloc(nachtlied_size * sizeof(int));
    int *dectext_ascii = malloc(nachtlied_size * sizeof(int));
    memcheck_int(nachtlied_ascii);
    memcheck_int(ciphertext_ascii);
    memcheck_int(dectext_ascii);

    /* Convert to ASCII */
    text_to_ascii(nachtlied_text, &nachtlied_size, nachtlied_ascii);

    /* Print plaintext */
    print_ascii_to_text(nachtlied_ascii, &nachtlied_size);

    /* Localize umlaut and eszett characters */
    ascii_30_add(nachtlied_ascii, &nachtlied_size);
    nachtlied_ascii = realloc(nachtlied_ascii, nachtlied_size * sizeof(int));
    memcheck_int(nachtlied_ascii);

    /* Encrypt */
    encrypt_shift(nachtlied_ascii);

    /* Unlocalize umlaut and eszett characters */
    ascii_enc(nachtlied_ascii, ciphertext_ascii);

    /* Print ciphertext */
    print_ascii_to_text(ciphertext_ascii, &nachtlied_size);

    /* Localize umlaut and eszett characters */
    ascii_dec(ciphertext_ascii, &nachtlied_size);
    ciphertext_ascii = realloc(ciphertext_ascii, nachtlied_size * sizeof(int));
    memcheck_int(nachtlied_ascii);

    /* Decrypt */
    decrypt_shift(ciphertext_ascii);

    /* Unlocalize umlaut and eszett characters */
    ascii_30_del(ciphertext_ascii, dectext_ascii);

    /* Print decrypted ciphertext */
    print_ascii_to_text(dectext_ascii, &nachtlied_size);

    /* Free the memory and exit */
    free(nachtlied_text);
    free(nachtlied_ascii);
    free(ciphertext_ascii);
    free(dectext_ascii);

    return 0;
}