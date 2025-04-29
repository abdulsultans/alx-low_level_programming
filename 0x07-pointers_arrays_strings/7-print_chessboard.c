#include <stdio.h>

/**
 * print_chessboard - Prints an 8x8 chessboard
 * @a: A pointer to a 2D array of 8 columns (each row is an array of 8 chars)
 */
void print_chessboard(char (*a)[8])
{
    int i, j;

    for (i = 0; i < 8; i++) // Rows
    {
        for (j = 0; j < 8; j++) // Columns
        {
            putchar(a[i][j]);
        }
        putchar('\n'); // Move to next line after each row
    }
}
