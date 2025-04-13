#include "main.h"

/**
 * print_number - Prints an integer using only _putchar
 * @n: The integer to print
 */
void print_number(int n)
{
    int power = 1;
    int temp = n;

    if (n < 0)
    {
        _putchar('-');
        temp = -n;
    }
    else
    {
        temp = n;
    }

    while (temp / power >= 10)
    {
        power *= 10;
    }

    while (power > 0)
    {
        _putchar((temp / power) % 10 + '0');
        power /= 10;
    }
}
