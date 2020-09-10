#include <stdio.h>

// Finds out which date is earlier but with loop de loops.
// Day, month, year 1act as min  cause im lazy.
int main(void)
{

  int day1, day2, month1, month2, year1, year2;

  printf("Enter a date in format D/M/YYYY: ");
  scanf("%d/%d/%d", &day1, &month1, &year1);

  if (day1 != 0 && month1 != 0 && year1 != 0)
	printf("Enter a second  date in format D/M/YYYY: ");
	scanf("%d/%d/%d", &day2, &month2, &year2);
  
  while (day1 !=  0 && month1 != 0 && year1 != 0 && day2 != 0 && month2 != 0 && year2 != 0)
  {
	if (year1 > year2)
	{
		day1 = day2;
		month1 = month2;
		year1 = year2;
		continue;
	}

	else if (year1 ==  year2)
	{
		if (month1 > month2)
		{
			day1 = day2;
			month1 = month2;
			continue;
		}

		if (month1 == month2)
		{
			if (day1 > day2)
			{
				day1 = day2;
				continue;
			}
		}
	}	

	printf("Enter a date in format D/M/YYYY: ");
	scanf("%d/%d/%d", &day2, &month2, &year2);

  }

  printf("%2d/%2d/%4d is the earliest date.\n", day1, month1, year1);

  return 0;
}
