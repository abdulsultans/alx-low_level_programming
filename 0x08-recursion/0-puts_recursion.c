#include <stdio.h>

/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @s: The string to print.
 */
void _puts_recursion(char *s)
{
    if (*s == '\0')  // Base case: if we reach the end of the string
    {
        putchar('\n');  // print the newline
        return;
    }
    putchar(*s);  // print the current character
    _puts_recursion(s + 1);  // recursively call function with next character
}
