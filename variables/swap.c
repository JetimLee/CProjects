#include <stdio.h>

int main()
{
    double a = 10.2;
    double b = 11.3;

    double temp = a;
    a = b;
    b = temp;
    printf("Variables: a = %f, b = %f\n", a, b);

    return 0;
}
