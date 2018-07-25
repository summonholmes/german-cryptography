#include <stdio.h>

void print_ascii_to_text(int *ascii_array, const int *nachtlied_processed_size)
{
    for (int i = 0; i < *nachtlied_processed_size; i++)
    {
        printf("%c", ascii_array[i]);
    }
    printf("\n\n");
}
