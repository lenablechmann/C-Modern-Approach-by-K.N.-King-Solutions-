//Inverts the number
#include <stdio.h>

int main(void)
{

	int i = 0;
	int j = 0;
	int k = 0;

	printf_s("Enter a three digit number, nerd ");
	scanf_s("%1d%1d%1d", &i, &j, &k);
	printf_s("Here you go: %d%d%d\n", k, j, i);
	return 0;
}
