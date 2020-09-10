#include "dates.h"

int day_of_the_year(struct date d)
{
    int which_day = 0;
    int months_leap[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int months_common[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    //Leap year calc.
    if (d.year % 4 == 0 && d.year % 100 != 0 && d.month > 0 && d.month <= 12)
    {
        for (int i = 0; i < d.month - 1; i++)
            which_day += months_leap[d.month - 1];

        which_day += d.day;
    }

    else if (d.year && d.month > 0 && d.month <= 12)
    {
        for (int i = 0; i < d.month - 1; i++)
            which_day += months_common[d.month - 1];

        which_day += d.day;
    }

    return which_day;
}

int compare_dates(struct date d1, struct date d2)
{
    if (d1.year < d2.year)
        return -1;
    else if (d1.year > d2.year)
        return 1;
    else
    {
        if (day_of_the_year(d1) > day_of_the_year(d2))
            return 1;
        else if (day_of_the_year(d1) < day_of_the_year(d2))
            return -1;
        else
            return 0;
    }
}