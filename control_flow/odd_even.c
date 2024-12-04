#include <stdio.h>

int main()
{
    int number;

    // Prompt the user for input
    printf("Enter a number: ");

    // Read the number from the user
    if (scanf("%d", &number) != 1)
    {
        printf("Invalid input. Please enter an integer.\n");
        return 1; // Exit with error code
    }

    if (number % 2 == 0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }

    return 0; // Successful execution
}
