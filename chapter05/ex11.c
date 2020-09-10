#include <stdio.h>

// Prints area according to the area code in a switch statement
int main(void)
{
  int area_code;
  printf("Enter area code: ");
  scanf_s("%d", &area_code);

  switch (area_code)
  {
    case 229: printf("Albany\n"); break;
    case 404: printf("Atlanta\n"); break;
    case 470: printf("Atlanta\n"); break;
    case 478: printf("Macon\n"); break;
    case 678: printf("Atlanta\n"); break;
    case 706: printf("Columbus\n"); break;
    case 762: printf("Columbus\n"); break;
    case 770: printf("Atlanta\n"); break;
    case 912: printf("Savannah\n"); break;
    default: printf("Area code not recognized\n");
  }
  return 0;
}
