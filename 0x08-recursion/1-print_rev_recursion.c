#include <stdio.h>

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The string to be printed in reverse.
 */
void _print_rev_recursion(char *s)
{
    if (*s == '\0')  // Base case: end of the string
        return;

    _print_rev_recursion(s + 1);  // Move to the end first
    putchar(*s);  // Print characters on the way back (unwinding the recursion)
}
