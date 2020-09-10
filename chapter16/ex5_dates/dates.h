#include <stdio.h>
struct date
{
    int day, month, year;
} ;

int day_of_the_year(struct date d);
int compare_dates(struct date d1, struct date d2);