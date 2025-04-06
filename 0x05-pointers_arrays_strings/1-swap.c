#include <stdio.h>

void swap_int(int *a, int *b)
{
    int temp = *a;  // Store the value pointed to by 'a' in a temporary variable
    *a = *b;        // Assign the value pointed to by 'b' to the location pointed to by 'a'
    *b = temp;      // Assign the stored value from 'a' to the location pointed to by 'b'
}

int main()
{
    int x = 5, y = 10;

    printf("Before swap: x = %d, y = %d\n", x, y);

    swap_int(&x, &_

