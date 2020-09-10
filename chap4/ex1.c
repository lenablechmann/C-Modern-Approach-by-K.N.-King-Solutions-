#include <stdio.h>

int main(void)
{
  // a)
  int i_a = 5;
  int j_a = 3;
  printf_s("a) is %d %d\n", i_a / j_a, i_a % j_a);

  // b)
  int i_b = 2;
  int j_b = 3;
  printf_s("b) is %d\n", (i_b + 10) % j_b);

  // c)
  int i_c = 7;
  int j_c = 8;
  int k_c = 9;
  printf_s("c) is %d\n", (i_c + 10) % k_c / j_c);

  // d)
  int i_d = 1;
  int j_d = 2;
  int k_d = 3;
  printf_s("d) is %d\n", (i_d + 5) % (j_d + 2) / k_d);

  return 0;
}
