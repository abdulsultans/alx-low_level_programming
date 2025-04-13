#include <stdio.h>

/**
 * rot13 - Encodes a string using ROT13.
 * @str: The string to encode.
 *
 * Return: A pointer to the resulting string.
 */
char *rot13(char *str)
{
    char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char rot[]   = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
    int i, j;

    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = 0; j < 52; j++)
        {
            if (str[i] == alpha[j])
            {
                str[i] = rot[j];
                break; // Only one if is used
            }
        }
    }

    return str;
}
🧪 Example Usage
c
Copy
Edit
int main()
{
    char msg[] = "Hello World! This is rot13.";
    printf("Original: %s\n", msg);
    printf("Encoded : %s\n", rot13(msg));
    return 0;
}
