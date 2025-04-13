#include <stdio.h>

/**
 * leet - Encodes a string into 1337 (leet speak).
 * @str: The string to encode.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
    char letters[] = "aAeEoOtTlL";
    char leet[]    = "4433007711";
    int i, j;

    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (str[i] == letters[j])
            {
                str[i] = leet[j];
                break; // Only one if used, break allowed
            }
        }
    }

    return str;
}
