#include <stdio.h>

/**
 * main - Finds and prints the sum of even Fibonacci numbers
 *        whose values do not exceed 4,000,000.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
    long int first = 1, second = 2, next;
    long int sum = 2; // Start with 2 because it's the first even number

    while (1)
    {
        next = first + second;

        if (next > 4000000)
            break;

        if (next % 2 == 0)
            sum += next;

        first = second;
        second = next;
    }

    printf("%ld\n", sum);
    return (0);
}

