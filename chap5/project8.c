#include <stdio.h>

// Finds the closest departure time.
int main(void)
{
	int hours, min;
	printf("Enter your departure time in 24h format HH:MM : ");
	scanf_s("%d:%d", &hours, &min);

	int minutes = hours * 60 + min;

	if (minutes > 120 && minutes < 480)
		printf("The departure time is 8:00 AM, arriving 10:16 AM\n");

	else if (minutes > 480 && minutes < 531)
		printf("The departure time is 9:43 AM, arriving 11:52 AM\n");

	else if (minutes < 631)
		printf("The departure time is 11:19 AM, arriving 1:31 PM\n");

	else if (minutes < 723)
		printf("The departure time is 12:47 PM, arriving 3:00 PM\n");

	else if (minutes < 803)
		printf("The departure time is 2:00 PM, arriving 4:08 PM\n");

	else if (minutes < 891)
		printf("The departure time is 3:45 PM, arriving 5:55 PM\n");

	else if (minutes < 1042)
		printf("The departure time is 7:00 PM, arriving 9:20 PM\n");

	else if (minutes < 1305)
		printf("The departure time is 9:45 PM, arriving 11:58 PM\n");
	else
		printf("The departure time is 8:00 AM, arriving 10:16 AM\n");

	return 0;
}
