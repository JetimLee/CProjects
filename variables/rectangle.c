#include <stdio.h>

int main()
{
    double height;
    double width;

    printf("Enter the rectangle height: ");
    scanf("%lf", &height);

    printf("Enter the rectangle width: ");
    scanf("%lf", &width);

    printf("The area of the rectangle is: %.2f\n", (height * width));

    return 0;
}
