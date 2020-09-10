#include <stdio.h>

int main(void)
{
  int i = 1;
  switch (i % 3) // Remainder is 1
  {
    case 0: printf("zero\n");
    case 1: printf("one\n");
    // prints out one then falls thorugh cause no break and prints two
    case 2: printf("two\n");
  }
  return 0;
}
