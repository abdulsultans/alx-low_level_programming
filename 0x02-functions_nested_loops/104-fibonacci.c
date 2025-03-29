#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
    unsigned long num1 = 1, num2 = 2, next;
    int count;

    printf("%lu, %lu", num1, num2);

    for (count = 3; count <= 98; count++)
    {
        next = num1 + num2;

        if (next < num2) // Prevent the overflow handling
            break;

        printf(", %lu", next);

        num1 = num2;
        num2 = next;
    }

    printf("\n");
    return (0);
}

