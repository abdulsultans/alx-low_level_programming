#include <stdio.h>

char *_strcat(char *dest, char *src)
{
    int i = 0;
    int j = 0;

    // Find the end of the dest string
    while (dest[i] != '\0') 
    {
        i++;
    }

    // Copy characters from src to dest
    while (src[j] != '\0') 
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    // Add the null terminator at the end
    dest[i] = '\0';

    return dest;
}

