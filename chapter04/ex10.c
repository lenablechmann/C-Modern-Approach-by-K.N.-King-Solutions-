//Showing the input of random entries.
#include <stdio.h>

int main(void)
{

  int i, j;

  i = 6;
  j = i += i;
  printf("10a) is %d %d\n", i, j);
  /*
  i = 5;
  j = (i -= 2) + 1;
  printf("10b) is %d %d\n", i, j);

  i = 7;
  j = 6 + (i = 2.5);
  printf("10c) is %d %d\n", i, j);

  i = 2, j = 8;
  j = (i = 6) + (j = 3);
  printf("10d) is %d %d\n", i, j);
  */

  return 0;
}
