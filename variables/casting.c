#include <stdio.h>

int main()
{
    int a = 5;
    int b = 2;

    // Without casting, this will perform integer division
    int integerResult = a / b;
    printf("Integer result (without casting): %d\n", integerResult);

    // With casting, we can get a floating-point result
    double floatResult = (double)a / b;
    printf("Floating-point result (with casting): %.2f\n", floatResult);

    return 0;
}
