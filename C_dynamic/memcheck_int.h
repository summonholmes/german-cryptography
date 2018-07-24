#include <stdio.h>
#include <stdlib.h>

void memcheck_int(int *nachtlied_ascii)
{
    if (nachtlied_ascii == NULL)
    {
        fprintf(stderr, "malloc failed\n");
        exit(-1);
    }
}
