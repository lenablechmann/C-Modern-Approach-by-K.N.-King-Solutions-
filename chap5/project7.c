#include <stdio.h>

// finds the lowest number out of four. Brutforce
int main(void)
{
  int number_1, number_2, number_3, number_4;
  printf("Enter four integers: ");
  scanf_s("%d%d%d%d", &number_1, &number_2, &number_3, &number_4);

  if (number_4 > number_3 && number_4 > number_2 && number_4 > number_1)
  printf("The largest number is %d\n", number_4);
  else if (number_4 < number_3 && number_4 < number_2 && number_4 < number_1)
  printf("The lowest number is %d\n", number_4);

  if (number_3 > number_4 && number_3 > number_2 && number_3 > number_1)
  printf("The largest number is %d\n", number_3);
  else if (number_3 < number_4 && number_3 < number_2 && number_3 < number_1)
  printf("The lowest number is %d\n", number_3);

  if (number_2 > number_3 && number_2 > number_4 && number_2 > number_1)
  printf("The largest number is %d\n", number_2);
  else if (number_2 < number_3 && number_2 < number_4 && number_2 < number_1)
  printf("The lowest number is %d\n", number_2);

  if (number_1 > number_3 && number_1 > number_2 && number_1 > number_4)
  printf("The largest number is %d\n", number_1);
  else if (number_1 < number_4 && number_1 < number_2 && number_1 < number_3)
  printf("The lowest number is %d\n", number_1);


  return 0;
}
