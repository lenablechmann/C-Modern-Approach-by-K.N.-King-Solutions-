//Inverts the number, base
#include <stdio.h>

int main(void)
{

	int i = 0;

	printf_s("Enter an integer between 0 and 32767, nerd ");
	scanf_s("%d", &i);

	int num5 = i%8;
	int num4 = (i/8)%8;
	int num3 = (i/8/8)%8;
	int num2 = (i/8/8/8)%8;
	int num1 = (i/8/8/8/8)%8;
	printf_s("Here you go: %d%d%d%d%d\n", num1, num2, num3, num4, num5);
	return 0;
}
