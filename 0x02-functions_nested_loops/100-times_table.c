#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The number to generate the times table for.
 *
 * If n is greater than 15 or less than 0, the function does nothing.
 */
void print_times_table(int n)
{
    int num, multiplier, product;

    if (n < 0 || n > 15)
        return;

    for (num = 0; num <= n; num++)
    {
        for (multiplier = 0; multiplier <= n; multiplier++)
        {
            product = num * multiplier;

            if (multiplier == 0)
                printf("%d", product);
            else
                printf(", %3d", product); // Ensures proper spacing

        }
        printf("\n");
    }
}

