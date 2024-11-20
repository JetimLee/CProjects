#include <stdio.h>

int main()
{
    float d = 2;
    float a1 = 1;
    int n = 9;
    float an = a1 + (n - 1) * d;

    float sn = (a1 + an) * (n / 2);
    printf("%f\n", (sn));

    return 0;
}
