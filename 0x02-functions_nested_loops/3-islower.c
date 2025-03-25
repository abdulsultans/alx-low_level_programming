#include "main.h"
#include <stdio.h>

/**
 * main - Test the _islower function.
 *
 * Return: Always 0.
 */
int main(void)
{
    char ch = 'g';
    
    if (_islower(ch))
        printf("%c is lowercase\n", ch);
    else
        printf("%c is not lowercase\n", ch);
    
    return (0);
}
