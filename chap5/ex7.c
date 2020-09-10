#include <stdio.h>

int main(void)
{
  // prints out 17 for i = 17 and 17 for i=-17. cause - - gives +
  int i = 17;
  printf_s("%d\n", i >= 0 ? i : -i);
  return 0;
}
