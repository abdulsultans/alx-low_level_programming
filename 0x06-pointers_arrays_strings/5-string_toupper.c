#include <stdio.h>

/**
 * string_toupper - Converts all lowercase letters of a string to uppercase.
 * @str: The string to be modified.
 *
 * Return: A pointer to the resulting string.
 */
char *string_toupper(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - ('a' - 'A'); // or str[i] -= 32;
        }
        i++;
    }

    return str;
}
