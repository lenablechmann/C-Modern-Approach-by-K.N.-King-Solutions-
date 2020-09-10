// A function that returns day of the year (1 to 366), when the user gives you day, month, year ints.

#include <stdio.h>
#include <stdlib.h>

int day_of_the_year(int month, int day, int year);

int main(void)
{
    int month, day, year;
    printf("Enter month/day/year: ");
    scanf("%d/%d/%d", &month, &day, &year);

    if (day < 1 || day > 31 || month < 1 || month > 12 || year < 0)
    {
        printf("Wrong date. Retry \n");
        return 1;
    }

    printf("This is the %d st/th day of the year.\n", day_of_the_year(month, day, year));

    return 0;
}

int day_of_the_year(int month, int day, int year)
{               
    int days_per_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int days_so_far;

    for(int i = 1; i < month; i++)
    days_so_far += days_per_month[i - 1]; // Since we don't count the month the current day is in.

    if (year % 4 == 0)
    days_so_far++; // There are 29 days in February in leap years.

    return days_so_far; 
}
