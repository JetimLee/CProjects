#include <stdio.h>

int main()
{
    int grade1, grade2;

    printf("Enter the first grade: ");
    scanf("%d", &grade1);

    double gpa;
    // printf("Enter your GPA: ");
    // scanf("%lf", &gpa); // Correct for double, incorrect for float

    printf("Enter the second grade: ");
    scanf("%d", &grade2);

    double gpa = ((double)grade1 + grade2) / 2;

    printf("Your gpa is: %lf\n", (gpa));

    return 0;
}
