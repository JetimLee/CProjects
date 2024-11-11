#include <stdio.h>

int main()
{
    int currentYear;
    int age;

    printf("Enter the current year: ");
    scanf("%d", &currentYear);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Your birth year is: %d\n", (currentYear - age));

    return 0;
}
