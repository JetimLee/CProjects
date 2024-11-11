#include <stdio.h>

int main()
{
    int grade1;
    int grade2;

    printf("Enter the first grade: ");
    scanf("%d", &grade1);

    printf("Enter the second grade: ");
    scanf("%d", &grade2);

    double gpa = ((double)grade1 + grade2) / 2;

    printf("Your gpa is: %f\n", (gpa));

    return 0;
}
