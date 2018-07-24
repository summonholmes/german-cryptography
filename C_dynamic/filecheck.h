#include <stdio.h>
#include <stdlib.h>

void filecheck(FILE *nachtlied_file)
{
    if (!nachtlied_file)
    {
        printf("File not found!");
        exit(1);
    }
}
