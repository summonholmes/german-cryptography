#include <ctype.h>

void PreProcess_German(char *rawtext, char *plaintext)
{
    char *src = rawtext, *dst = plaintext;
    while (*src)
    {
        if (isspace((unsigned char)*src))
        {
            src++;
        }
        else if (ispunct((unsigned char)*src))
        {
            src++;
        }
        else if (isupper((unsigned char)*src))
        {
            *dst++ = tolower((unsigned char)*src); 
            src++;
        }
        else if (*src == -100)
        {
            *dst = -68; src++; 
            dst++;
        }
        else if (src == dst)
        {
            src++; 
            dst++;
        }
        else
        {
            *dst++ = *src++;
        }
    }
}