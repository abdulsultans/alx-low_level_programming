#include <stdio.h>

void puts_half(char *str)
{
    // Find the length of the string
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    // If the length is odd, adjust to print the second half
    int start_index = (length + 1) / 2;

    // Print the second half of the string
    while (str[start_index] != '\0') {
        putchar(str[start_index]);
        start_index++;
    }

    // Print a newline after the string
    putchar('\n');
}

int main()
{
    char str[] = "Hello, World!";
    
    // Call puts_half to print the second half of the string
    puts_half(str);
    
    return 0;
}

