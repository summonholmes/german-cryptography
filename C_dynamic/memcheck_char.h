#include <stdio.h>
#include <stdlib.h>

void memcheck_char(char *nachtlied_text)
{
    if (nachtlied_text == NULL)
    {
        fprintf(stderr, "malloc failed\n");
        exit(-1);
    }
}
