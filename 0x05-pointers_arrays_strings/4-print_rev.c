#include <stdio.h>

void print_rev(char *s)
{
    // First, find the length of the string
    int length = 0;
    while (s[length] != '\0') 
    {
        length++;
    }

    // Print the string in reverse
    for (int i = length - 1; i >= 0; i--) 
    {
        putchar(s[i]);
    }

    // Print a newline after the reversed string
    putchar('\n');
}

int main()
{
    char str[] = "Hello, World!";
    
    // Call print_rev to print the string in reverse followed by a newline
    print_rev(str);
    
    return 0;
}

