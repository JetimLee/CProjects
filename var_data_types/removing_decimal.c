#include <stdio.h>

int main()
{
    float receivedData;

    printf("Enter a number with a decimal: ");
    scanf("%f", &receivedData);

    // Separate integer and decimal parts
    int numberAsInt = (int)receivedData;
    float decimalPart = receivedData - numberAsInt;

    // Print the results
    printf("The decimal part of the entered number is: %.2f\n", decimalPart);

    return 0;
}