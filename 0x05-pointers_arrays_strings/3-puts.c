#include <stdio.h>

void _puts(char *str)
{
    // Loop through each character in the string and print it
    while (*str != '\0') 
    {
        putchar(*str);
        str++;  // Move to the next character in the string
    }
    
    // Print a newline after the string
    putchar('\n');
}

int main()
{
    char str[] = "Hello, World!";
    
    // Call _puts to print the string followed by a newline
    _puts(str);
    
    return 0;
}

