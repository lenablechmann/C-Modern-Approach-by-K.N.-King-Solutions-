#include <stdio.h>

// Finds the closest departure time.
// but this time the times are stored in arrays.

int main(void)
{
	int hours, min;

    int departure_minutes[8] = {
    ((8 * 60) + 0), ((9 * 60) + 43), ((11 * 60) + 19), ((12 * 60) + 47), ((14 * 60) + 0), 
    ((15 * 60) + 45), ((19 * 60) + 0), ((21 * 60) + 45), 
    };

    int arrival_minutes[8] = {
    ((10 * 60) + 16), ((11 * 60) + 52), ((13 * 60) + 31), ((15 * 60) + 0), ((16 * 60) + 8), 
    ((17 * 60) + 55), ((21 * 60) + 20), ((23 * 60) + 58), 
    };

	printf("Enter your departure time in 24h format HH:MM : ");
	scanf("%d:%d", &hours, &min);
	int user_minutes = hours * 60 + min;

    if (hours > 23 || hours < 0 || min < 0 || min > 59)
    {
    printf("Try HH:MM\n");
    return 1;
    }

    for (int i = 0; i < 8; i++)
    {
        if (user_minutes < departure_minutes[0] || user_minutes > departure_minutes[7])
        {
        printf("The closest departure time is %02d:%02d while the arrival is %02d:%02d\n",
        (departure_minutes[0] / 60), departure_minutes[0] % 60,
        arrival_minutes[0] / 60, arrival_minutes[0] %60);
        break;
        }

        else if (user_minutes > departure_minutes[i] && user_minutes < departure_minutes[i + 1])
        {
        printf("The closest departure time is %02d:%02d while the arrival is %02d:%02d\n",
        (departure_minutes[i + 1] / 60), departure_minutes[i + 1] % 60,
        arrival_minutes[i +1 ] / 60, arrival_minutes[i + 1] %60);
        }
        else
        continue;
    }

	return 0;
}
