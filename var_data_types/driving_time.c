#include <stdio.h>

int main()
{
    float distance = 580;
    float speedInKMH = 58;
    float timeToDestination = distance / speedInKMH;
    printf("The amount of hours needed until reaching the destination is %.2f\n hours", (timeToDestination));

    return 0;
}
