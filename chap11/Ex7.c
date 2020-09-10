#include <stdio.h>

// User gives you the day of the year, and you calculate month and day.
// Day_of_year is an int between 1 and 366
void split_date(int day_of_year, int year, int *month, int *day);

int main(void)
{
    int day_of_year;
    int year, month = 0, day = 0;
    printf("Enter the day (1 to 366) and a year (for example 2015): ");
    scanf("%d %d", &day_of_year, &year);

    // We won't be changing total_sec, so a copy is fine.
    split_date(day_of_year, year, &month, &day);
    printf("That's %d/%d/%d.\n ", month, day, year);
    return 0;
}

void split_date(int day_of_year, int year, int *month, int *day)
{
    int leap_months[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int normal_months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int count = 1;
    for (int i = 0; i < 12; i++)
    {
        // Leap year calc
        if (year % 4 == 0 && year % 100 != 0 && day_of_year > leap_months[i])
        {
            day_of_year -= leap_months[i];
            count++;
        }
        else if (day_of_year > normal_months[i])
        {
            day_of_year -= normal_months[i];
            count++;
        }
        // If there aren't enough days for a month.
        else 
        break;
    }
        *month = count;
        *day = day_of_year;
}