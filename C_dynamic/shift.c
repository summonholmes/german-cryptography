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
int preprocess(char *);
void print_ascii_to_text(int *, const int *);
void text_to_ascii(char *, const int *, int *);
void ascii_30_add(int *);
void encrypt_shift(int *);
void ascii_enc(int *, int *);
void ascii_dec(int *);
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
    const int nachtlied_file_size = ftell(nachtlied_file);
    fseek(nachtlied_file, 0, SEEK_SET);

    /* Allocate memory */
    char *nachtlied_text = (char *)malloc((nachtlied_file_size + 1) * sizeof(char));
    memcheck_char(nachtlied_text);

    /* Read the file */
    fread(nachtlied_text, 1, nachtlied_file_size, nachtlied_file);
    fclose(nachtlied_file);

    /* Processing & Reallocation */
    const int nachtlied_processed_size = preprocess(nachtlied_text);

    /* Allocate more memory; reallocation not needed on these */
    int *plaintext_ascii = (int *)malloc((nachtlied_processed_size + 1) * sizeof(int));
    int *ciphertext_ascii = (int *)malloc((nachtlied_processed_size + 1) * sizeof(int));
    int *dectext_ascii = (int *)malloc((nachtlied_processed_size + 1) * sizeof(int));
    memcheck_int(plaintext_ascii);
    memcheck_int(ciphertext_ascii);
    memcheck_int(dectext_ascii);

    /* Convert to ASCII */
    text_to_ascii(nachtlied_text, &nachtlied_processed_size, plaintext_ascii);

    /* Free the plaintext character memory */
    free(nachtlied_text);

    /* Print plaintext */
    print_ascii_to_text(plaintext_ascii, &nachtlied_processed_size);

    /* Localize umlaut and eszett characters */
    ascii_30_add(plaintext_ascii);

    /* Encrypt */
    encrypt_shift(plaintext_ascii);

    /* Unlocalize umlaut and eszett characters */
    ascii_enc(plaintext_ascii, ciphertext_ascii);

    /* Free the plaintext memory */
    free(plaintext_ascii);

    /* Print ciphertext */
    print_ascii_to_text(ciphertext_ascii, &nachtlied_processed_size);

    /* Localize umlaut and eszett characters */
    ascii_dec(ciphertext_ascii);

    /* Decrypt */
    decrypt_shift(ciphertext_ascii);

    /* Unlocalize umlaut and eszett characters */
    ascii_30_del(ciphertext_ascii, dectext_ascii);

    /* Free the ciphertext memory */
    free(ciphertext_ascii);

    /* Print decrypted ciphertext */
    print_ascii_to_text(dectext_ascii, &nachtlied_processed_size);

    /* Free the dectext memory and exit */
    free(dectext_ascii);

    return 0;
}