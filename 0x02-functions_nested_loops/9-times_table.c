#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
    int num, multiplier, product;

    for (num = 0; num <= 9; num++)
    {
        for (multiplier = 0; multiplier <= 9; multiplier++)
        {
            product = num * multiplier;

            if (multiplier == 0)
                _putchar(product + '0');
            else
            {
                _putchar(',');
                _putchar(' ');

                if (product < 10)
                    _putchar(' ');

                _putchar((product / 10) + '0');
                _putchar((product % 10) + '0');
            }
        }
        _putchar('\n');
    }
}

