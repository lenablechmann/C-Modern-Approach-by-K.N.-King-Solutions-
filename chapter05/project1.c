#include <stdio.h>

// Finds out how many digits a number has
int main(void)
{
  int number;
  printf("Enter a positive number (4 digits max): ");
  scanf_s("%d", &number);

  if (number > 0 && number < 10)
    printf("The number %d has 1 digit\n", number);
  else if (number > 9 && number < 100)
    printf("The number %d has 2 digits\n", number);
  else if (number > 99 && number < 1000)
    printf("The number %d has 3 digits\n", number);
  else if (number > 999 && number < 10000)
    printf("The number %d has 4 digits\n", number);
  else
    printf("Wrong number, try again\n");
  return 0;
}
