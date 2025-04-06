#include <stdio.h>

void reset_to_98(int *n)
{
    *n = 98;  // Dereference the pointer and set the value to 98
}

int main()
{
    int num = 42;
    printf("Before: %d\n", num);  // Output the initial value

    reset_to_98(&num);  // Pass the address of num to the function

    printf("After: %d\n", num);  // Output the updated value

    return 0;
}

