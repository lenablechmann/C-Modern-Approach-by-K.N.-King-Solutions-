#include <stdio.h>

int main(void)
{
	// This program is going to display a user specified calender for the month.

	int days_in_month, start_day;
	
	printf("Enter number of days in the month: ");
	scanf("%d", &days_in_month);

	printf("Enter starting day of the week (1=Sun, 7=Sat): ");
	scanf("%d", &start_day);

	for (int i = 1; i < start_day; i++)
		printf("   ");

	for (int i = 1; i <= days_in_month; i++)
	{
		if ( (start_day + i -1) % 7 == 0 || i == days_in_month)
		{
			printf("\n");
		}
		else
		{
			printf("%3d", i);
		}
	}
	return 0;
}
