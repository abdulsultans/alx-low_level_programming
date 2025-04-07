#include <stdio.h>

void puts2(char *str)
{
    // Loop through the string, but increment the index by 2 each time
    int i = 0;
    while (str[i] != '\0') {
        // Print every other character starting with the first one
        putchar(str[i]);
        i += 2;  // Skip the next character
    }

    // Print a newline after the characters
    putchar('\n');
}

int main()
{
    char str[] = "Hello, World!";
    
    // Call puts2 to print every other character followed by a newline
    puts2(str);
    
    return 0;
}

