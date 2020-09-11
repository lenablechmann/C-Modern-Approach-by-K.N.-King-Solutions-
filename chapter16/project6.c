/*
    Modifying project 9 from chapter 5
    each date entered by the user is to be stored in the date structure, 
    compare_dates function from the ex5 shall be working here too
*/
#include <stdio.h>

struct date
{
  int day, month, year;
};
int compare_dates(struct date d1, struct date d2);
int day_of_the_year(struct date d);

// Finds out which date is earlier
int main(void)
{
  struct date date1, date2;

  printf("Enter a date in format D/M/YYYY: ");
  scanf("%d/%d/%d", &date1.day, &date1.month, &date1.year);
  printf("Enter another date in format D/M/YYYY: ");
  scanf("%d/%d/%d", &date2.day, &date2.month, &date2.year);

  if (date1.day < 0 || date1.day > 31 || date2.day < 0 || date2.day > 31 || date1.month < 0 || date1.month > 12 || date2.month < 0 || date2.month > 12)
  {
    printf("Invalid date, try format D/M/YYYY: ");
    return 1;
  }
  if (compare_dates(date1, date2) == 0)
    printf("These dates are the same.\n");
  else if (compare_dates(date1, date2) == -1)
    printf("Date 1 is earlier than date 2.\n");
  else
    printf("Date 2 is earlier than date 1.\n");

  return 0;
}

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