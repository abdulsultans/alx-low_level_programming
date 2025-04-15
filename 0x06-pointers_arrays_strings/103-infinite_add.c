#include <stdio.h>
#include <string.h>

/**
 * infinite_add - Adds two numbers represented as strings
 * @n1: First number as a string
 * @n2: Second number as a string
 * @r: Buffer to store the result
 * @size_r: Size of the result buffer
 *
 * Return: Pointer to result, or 0 if it can't be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int i = strlen(n1) - 1;
    int j = strlen(n2) - 1;
    int k = size_r - 1;
    int carry = 0;

    r[k] = '\0';
    k--;

    while (i >= 0 || j >= 0 || carry)
    {
        int digit1 = (i >= 0) ? n1[i--] - '0' : 0;
        int digit2 = (j >= 0) ? n2[j--] - '0' : 0;
        int sum = digit1 + digit2 + carry;

        carry = sum / 10;

        if (k < 0)
            return 0;

        r[k--] = (sum % 10) + '0';
    }

    return &r[k + 1];
}
