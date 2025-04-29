#include <stdio.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: The string to search
 * @accept: The string containing the bytes to match
 *
 * Return: Pointer to the first matching byte in s, or NULL if no match is found
 */
char *_strpbrk(char *s, char *accept)
{
    unsigned int i, j;

    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = 0; accept[j] != '\0'; j++)
        {
            if (s[i] == accept[j])
                return &s[i]; // Return pointer to first matching byte
        }
    }

    return NULL; // No match found
}
