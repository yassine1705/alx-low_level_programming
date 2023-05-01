#include <stdio.h>

int main(void)
{
    int result;

    result = _pow_recursion(2, 3); // 2 raised to the power of 3 is 8
    printf("%d\n", result); // Output: 8

    result = _pow_recursion(10, 2); // 10 raised to the power of 2 is 100
    printf("%d\n", result); // Output: 100

    result = _pow_recursion(3, 0); // 3 raised to the power of 0 is 1
    printf("%d\n", result); // Output: 1

    result = _pow_recursion(2, -2); // y is negative, should return -1
    printf("%d\n", result); // Output: -1

    return 0;
}

