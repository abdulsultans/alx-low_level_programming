#include <stdio.h>

char *_strcpy(char *dest, char *src)
{
    int i = 0;

    // Copy characters from src to dest, including the null byte
    while (src[i] != '\0') 
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';  // Add the null terminator at the end

    return dest;  // Return the pointer to dest
}

