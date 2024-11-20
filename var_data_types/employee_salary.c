#include <stdio.h>

int main()
{
    float salary, hours_worked_in_a_month, total;

    // Prompt the user to enter values for d, a1, and n
    printf("Enter the employee salary: ");
    scanf("%f", &salary);

    printf("Enter the hours worked for the month: ");
    scanf("%f", &hours_worked_in_a_month);

    total = salary * hours_worked_in_a_month;

    // Print the result
    printf("The total monthly salary is: %.2f\n", (total));

    return 0;
}
