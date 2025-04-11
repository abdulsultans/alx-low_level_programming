#include <stdio.h>

/**
 * _strncpy - Copies at most n characters from the string pointed to by src
 *            to the buffer pointed to by dest.
 * @dest: The destination buffer.
 * @src: The source string.
 * @n: The maximum number of characters to copy.
 *
 * Return: A pointer to the destination string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
    int i;

    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }

    // If src is shorter than n, pad the rest with '\0'
    for (; i < n; i++)
    {
        dest[i] = '\0';
    }

    return dest;
}

