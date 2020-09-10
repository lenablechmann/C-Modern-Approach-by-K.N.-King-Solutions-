#include <stdio.h>

// Finds out which date is earlier
int main(void)
{
  int day1, day2, month1, month2, year1, year2;
  printf("Enter a date in format D/M/YYYY: ");
  scanf_s("%d/%d/%d", &day1, &month1, &year1);
  printf("Enter another date in format D/M/YYYY: ");
  scanf_s("%d/%d/%d", &day2, &month2, &year2);

if (day1 < 0 || day1 > 31 || day2 < 0 || day2 > 31 || month1 < 0 || month1 > 12 || month2 < 0 || month2 > 12)
  {
    printf("Invalid date, try format D/M/YYYY: ");
    return 1;
  }

if (year1 < year2)
  {
    printf("%d/%d/%d is earlier than %d/%d/%d", day1, month1, year1, day2, month2, year2);
  }

else if (year2 < year1)
  {
    printf("%d/%d/%d is earlier than %d/%d/%d", day2, month2, year2, day1, month1, year1);
  }
else if (year2 == year1)
  {
    if (month1 < month2)
      {
        printf("%d/%d/%d is earlier than %d/%d/%d", day1, month1, year1, day2, month2, year2);
      }

    else if (month2 < month1)
      {
        printf("%d/%d/%d is earlier than %d/%d/%d", day2, month2, year2, day1, month1, year1);
      }

    else if (month1 == month2)
      {
        if (day1 < day2)
          {
            printf("%d/%d/%d is earlier than %d/%d/%d", day1, month1, year1, day2, month2, year2);
          }

          else if (day2 < day1)
          {
            printf("%d/%d/%d is earlier than %d/%d/%d", day2, month2, year2, day1, month1, year1);
          }
      }

  }

  return 0;
}
