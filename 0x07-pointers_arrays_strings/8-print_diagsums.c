#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 * @a: Pointer to the first element of the matrix (1D representation)
 * @size: The number of rows/columns (matrix is size x size)
 */
void print_diagsums(int *a, int size)
{
    int i;
    int sum1 = 0, sum2 = 0;

    for (i = 0; i < size; i++)
    {
        sum1 += a[i * size + i];                 // Left-to-right diagonal
        sum2 += a[i * size + (size - 1 - i)];    // Right-to-left diagonal
    }

    printf("%d, %d\n", sum1, sum2);
}
