#include <stdio.h>

int main(void)
{
  // a)
  printf_s("a) is %d\n", 8 % 5);

  // b)
  printf_s("b) is %d\n", -8 % 5);

  // c)
  printf_s("c) is %d\n", 8 % -5);

  // d)
  printf_s("d) is %d\n", -8 % -5);

  return 0;
}
