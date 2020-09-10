#include <stdio.h>

// Prints out grades
int main(void)
{
  int number_grade;
  printf("Enter anumerical code from 0 to 100: ");
  scanf_s("%d", &number_grade);

  number_grade = number_grade / 10;

  switch (number_grade)
  {
    case 10: printf("You got an A\n"); break;
    case 9: printf("You got an A\n"); break;
    case 8: printf("You got a B\n"); break;
    case 7: printf("You got a C\n"); break;
    case 6: printf("You got a D\n"); break;
    default: printf("You got an F, sorry\n");
  }
  return 0;
}
