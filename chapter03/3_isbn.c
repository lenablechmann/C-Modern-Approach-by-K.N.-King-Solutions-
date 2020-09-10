#include <stdio.h>

int main(void)
{
  int prefix, group, publisher, item, check;

  printf_s("Enter your ISBN:");
  scanf_s("%d-%d-%d-%d-%d", &prefix, &group, &publisher, &item, &check);

  printf_s("GS1 Prefix: %d\n", prefix);
  printf_s("Group identifier: %d\n", group);
  printf_s("Publisher code: %d\n", publisher);
  printf_s("Item number: %d\n", item);
  printf_s("Check digit: %d\n", check);

  return 0;
}
