//Inverts the number, base
#include <stdio.h>

int main(void)
{

	int i = 0;

	printf_s("Enter a three digit number, nerd ");
	scanf_s("%1d", &i);
  int hundred = i/100
	printf_s("Here you go: %d%d%d\n", i % 10, (i/10)%10, i/100);
	return 0;
}
