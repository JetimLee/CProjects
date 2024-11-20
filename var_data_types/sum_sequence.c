#include <stdio.h>

int main()
{
    float d, a1;
    int n;

    // Prompt the user to enter values for d, a1, and n
    printf("Enter the common difference (d): ");
    scanf("%f", &d);

    printf("Enter the first term (a1): ");
    scanf("%f", &a1);

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    // Calculate the nth term and sum of the series
    float an = a1 + (n - 1) * d;
    float sn = (a1 + an) * n / 2.0;

    // Print the result
    printf("The sum of the arithmetic series is: %f\n", sn);

    return 0;
}
