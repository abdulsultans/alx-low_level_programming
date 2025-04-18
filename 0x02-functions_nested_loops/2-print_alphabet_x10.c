#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times,
 * followed by a new line after each alphabet sequence.
 */
void print_alphabet_x10(void)
{
    int count = 0;

    while (count < 10)
    {
        char letter = 'a';

        while (letter <= 'z')
        {
            _putchar(letter);
            letter++;
        }

        _putchar('\n');
        count++;
    }
}

