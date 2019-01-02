#include <stdio.h>
#include <stdlib.h>

void memcheck_int(int *ascii_array)
{
    if (ascii_array == NULL)
    {
        fprintf(stderr, "malloc failed\n");
        exit(-1);
    }
}
