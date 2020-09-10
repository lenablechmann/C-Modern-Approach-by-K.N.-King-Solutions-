// make a date structure, that will contain ints day, month, year
// a) write a function that returns the day of the year
// b) wrie a function that compares 2 dates.

// main will only ask the user for 2 dates.
#include "dates.h"

int main(void)
{
    struct date date1, date2;

    // Getting both dates from the user:
    printf("Enter the first date in format DD/MM/YYYY: ");
    scanf("%2d/%2d/%4d", &date1.day, &date1.month, &date1.year);

    printf("Enter the second date in format DD/MM/YYYY: ");
    scanf("%2d/%2d/%4d", &date2.day, &date2.month, &date2.year);

    // checking if the dates are legit and calculating the day of the year
    if (day_of_the_year(date2) < 366 && day_of_the_year(date1) < 366)
        printf("The first one is the day of the year %d,\nthe second one is %d.\n",
               day_of_the_year(date1), day_of_the_year(date2));

    else
    {
        printf("Invalid date.\n");
        return 1;
    }

    if (compare_dates(date1,date2) == -1)
        printf("First date is earlier.\n");
    else if (compare_dates(date1,date2) == 1)
        printf("Second date is earlier.\n");
    else
        printf("Same date.\n");

    return 0;
}
