#include <stdio.h>

int main()
{
    int grade1;
    int grade2;

    printf("Enter a grade: ");
    scanf("%d", &grade1);

    printf("Enter another grade: ");
    scanf("%d", &grade2);

    printf("The average of the two grades is: %d\n", (grade1 + grade2) / 2);

    return 0;
}
