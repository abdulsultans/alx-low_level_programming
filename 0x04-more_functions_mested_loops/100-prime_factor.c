#include <stdio.h>

/**
 * main - Finds and prints the largest prime factor of 612852475143
 * Return: 0 (Success)
 */
int main(void)
{
    long number = 612852475143;
    long factor = 2;
    long largest = 0;

    while (number > 1)
    {
        while (number % factor == 0) // Check divisibility
        {
            largest = factor;
            number /= factor;
        }
        factor++; // Move to the next possible factor
    }

    printf("%ld\n", largest);
    return (0);
}

