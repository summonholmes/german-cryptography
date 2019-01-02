#include <stdio.h>
#include <stdlib.h>

void memcheck_char(char *char_array)
{
    if (char_array == NULL)
    {
        fprintf(stderr, "malloc failed\n");
        exit(-1);
    }
}
