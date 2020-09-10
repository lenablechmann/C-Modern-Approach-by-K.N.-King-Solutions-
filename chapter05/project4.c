#include <stdio.h>

// PPrints out wind categories based on wind force.
int main(void)
{
  int wind_speed;
  printf("Enter (positive) wind speed in knots: ");
  scanf_s("%d", &wind_speed);

  if (wind_speed < 1)
    printf("Calm\n");
  else if (wind_speed < 4)
    printf("Light air\n");
  else if (wind_speed < 27)
    printf("Breeze\n");
  else if (wind_speed < 47)
    printf("Gale\n");
  else if (wind_speed < 63)
    printf("Storm\n");
  else
    printf("Hurricane\n");

  return 0;
}
