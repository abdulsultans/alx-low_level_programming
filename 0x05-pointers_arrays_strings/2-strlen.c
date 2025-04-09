#include <stdio.h>

int _strlen(char *s)
{
    int length = 0;

    // Loop through the string until we encounter the null terminator '\0'
    while (s[length] != '\0') 
    {
        length++;
    }

    return length;
}

int main()
{
    char str[] = "Hello, World!";
    
    // Call _strlen to get the length of the string
    int len = _strlen(str);
    
    printf("The length of the string is: %d\n", len);
    
    return 0;
}

