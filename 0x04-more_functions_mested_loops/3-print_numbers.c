#include "main.h"

/**
 * print_numbers - Prints numbers from 0 to 9 followed by a new line.
 */
void print_numbers(void)
{
    char num = '0';

    while (num <= '9')
    {
        _putchar(num);
        num++;
    }
    _putchar('\n');
}

