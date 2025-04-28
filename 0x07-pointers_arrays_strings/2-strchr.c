#include <stdio.h>

/**
 * _strchr - Locates a character in a string
 * @s: The string to search
 * @c: The character to find
 *
 * Return: Pointer to the first occurrence of c in s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
    while (*s != '\0')
    {
        if (*s == c)
            return s;
        s++;
    }

    if (c == '\0')
        return s; // Special case: if searching for '\0', return pointer to end

    return NULL;
}
