#include <stdio.h>

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be modified.
 *
 * Return: A pointer to the resulting string.
 */
char *cap_string(char *str)
{
    int i = 0;
    int cap_next = 1; // Start by capitalizing the first character

    // List of separators
    char separators[] = " \t\n,;.!?\"(){}";
    int j;

    while (str[i] != '\0')
    {
        if (cap_next && str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32; // Convert to uppercase
            cap_next = 0;
        }
        else
        {
            // Check if current character is a separator
            cap_next = 0;
            for (j = 0; separators[j] != '\0'; j++)
            {
                if (str[i] == separators[j])
                {
                    cap_next = 1;
                    break;
                }
            }
        }

        i++;
    }

    return str;
}
