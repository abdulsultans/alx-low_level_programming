#include <stdio.h>

char *_strncat(char *dest, char *src, int n)
{
    int i = 0;
    int j = 0;

    // Find the end of dest string
    while (dest[i] != '\0') 
    {
        i++;
    }

    // Append at most n characters from src to dest
    while (j < n && src[j] != '\0') 
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    // Null-terminate dest
    dest[i] = '\0';

    return dest;
}

