#include <stdio.h>

int main()
{
    int receivedSeconds;

    printf("Enter an amount of seconds to convert to hours:minutes:seconds format ");
    scanf("%d", &receivedSeconds);

    int hours = receivedSeconds / 3600;
    int minutes = (receivedSeconds - hours * 3600) / 60;
    int seconds = (receivedSeconds - hours * 3600) % 60;

    printf("%d :%d : %d ", hours, minutes, seconds);

    return 0;
}
