// Formula for converting Celsius to Fahrenheit: T(F) = (T(C) * 1.8) + 32
// Formula for converting Fahrenheit to Celsius: T(C) = (T(F) - 32) / 1.8

#include <stdio.h>

int main()
{
    double tempInFahrenheit;

    printf("Enter a temperature in fahrenheit: ");
    scanf("%lf", &tempInFahrenheit);

    double tempInCelsius = (tempInFahrenheit - 32) / 1.8;

    printf("The converted temperature is %f", tempInCelsius);

    return 0;
}
