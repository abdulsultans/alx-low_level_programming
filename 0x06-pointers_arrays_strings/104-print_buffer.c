#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - Prints a buffer in a specific format
 * @b: Pointer to the buffer
 * @size: Number of bytes in the buffer
 */
void print_buffer(char *b, int size)
{
    int i, j;

    if (size <= 0)
    {
        printf("\n");
        return;
    }

    for (i = 0; i < size; i += 10)
    {
        printf("%08x: ", i);

        // Print hex values in groups of two
        for (j = 0; j < 10; j++)
        {
            if (i + j < size)
                printf("%02x", b[i + j]);
            else
                printf(" ");

            if (j % 2)
                printf(" ");
        }

        // Print ASCII representation
        for (j = 0; j < 10 && (i + j) < size; j++)
        {
            char c = b[i + j];
            if (isprint(c))
                printf("%c", c);
            else
                printf(".");
        }

        printf("\n");
    }
}
