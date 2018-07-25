#include <stdio.h>

void print_ascii_to_text(int *nachtlied_ascii, int *nachtlied_size)
{
    for (int i = 0; i < *nachtlied_size; i++)
    {
        printf("%c", nachtlied_ascii[i]);
    }
    printf("\n\n");
}
