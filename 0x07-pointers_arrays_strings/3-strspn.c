#include <stdio.h>

/**
 * _strspn - Gets the length of a prefix substring
 * @s: The string to search
 * @accept: The set of bytes to match
 *
 * Return: Number of bytes in the initial segment of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int i, j;
    unsigned int count = 0;
    int match;

    for (i = 0; s[i] != '\0'; i++)
    {
        match = 0;
        for (j = 0; accept[j] != '\0'; j++)
        {
            if (s[i] == accept[j])
            {
                match = 1;
                break;
            }
        }

        if (!match)
            break;

        count++;
    }

    return count;
}
