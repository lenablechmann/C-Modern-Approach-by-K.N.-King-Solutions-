#include <stdio.h>

// Converts 24 hour format to 12 hour format
int main(void)
{
  int hours_24, minutes;
  printf("Enter a 24 hour time HH:MM: ");
  scanf_s("%2d:%2d", &hours_24, &minutes);

  if (hours_24 < 13 && hours_24 >= 0)
    printf("Equivalent 12 hour time: %2d:%2d AM\n", hours_24, minutes);
  else if (hours_24 < 25 && hours_24 >= 13)
    printf("Equivalent 12 hour time: %2d:%2d PM\n", hours_24 - 12, minutes);
  return 0;
}
