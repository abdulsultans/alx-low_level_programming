#include <stdio.h>

int main(void)
{
    int result;

    result = mul(3, 4);
    printf("3 * 4 = %d\n", result);

    result = mul(-2, 6);
    printf("-2 * 6 = %d\n", result);

    return (0);
}

