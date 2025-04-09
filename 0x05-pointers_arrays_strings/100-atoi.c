#include <stdio.h>

int _atoi(char *s)
{
    int result = 0;  // This will store the result
    int sign = 1;    // By default, the number is positive

    // Skip leading non-digit characters
    while (*s != '\0' && (*s < '0' || *s > '9') && *s != '+' && *s != '-')
    {
        s++;
    }

    // Handle potential signs before the number
    if (*s == '-' || *s == '+') 
    {
        if (*s == '-') 
	{
            sign = -1;  // If it's a negative sign, set sign to -1
        }
        s++;  // Move to the next character after the sign
    }

    // Convert the digits into an integer
    while (*s >= '0' && *s <= '9') 
    {
        result = result * 10 + (*s - '0');  // Build the number by shifting the previous result
        s++;  // Move to the next character
    }

    return result * sign;  // Return the result with the correct sign
}

int main() 
{
    char str1[] = "   -123abc";
    char str2[] = "42";
    char str3[] = "   +56";
    char str4[] = "abc";

    printf("_atoi(str1) = %d\n", _atoi(str1));  // Output: -123
    printf("_atoi(str2) = %d\n", _atoi(str2));  // Output: 42
    printf("_atoi(str3) = %d\n", _atoi(str3));  // Output: 56
    printf("_atoi(str4) = %d\n", _atoi(str4));  // Output: 0

    return 0;
}

