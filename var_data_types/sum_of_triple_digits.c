#include <stdio.h>

int main()
{

    int receivedThreeDigitNumber;

    printf("Enter a number that has 3 digits such as 531 to get the sum of the numbers:  ");
    scanf("%d", &receivedThreeDigitNumber);

    int hundredsDigit = receivedThreeDigitNumber / 100;                                     // 431 gives 4
    int tensDigit = (receivedThreeDigitNumber - (100 * hundredsDigit)) / 10;                // 431 - 400 = 31 / 10 = 3
    int singlesDigit = (receivedThreeDigitNumber - (100 * hundredsDigit)) - 10 * tensDigit; // 431 - 400 = 31 - 30 = 1
    int threeIntSum = hundredsDigit + tensDigit + singlesDigit;

    printf("%d + %d + %d = %d", hundredsDigit, tensDigit, singlesDigit, threeIntSum);

    return 0;
}