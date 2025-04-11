#include <stdio.h>

void rev_string(char *s)
{
    // Find the length of the string
    int length = 0;
    while (s[length] != '\0') {
        length++;
    }

    // Reverse the string in place
    int start = 0;
    int end = length - 1;
    while (start < end)
    {
        // Swap characters at start and end positions
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;

        start++;
        end--;
    }
}

int main() {
    char str[] = "Hello, world!";
    rev_string(str);
    printf("Reversed string: %s\n", str);
    return 0;
}
  
