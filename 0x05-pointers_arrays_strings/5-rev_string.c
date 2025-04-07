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
    while (start < end) {
        // Swap characters at start and end positions

