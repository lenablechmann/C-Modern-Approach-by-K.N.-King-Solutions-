//Inverts the number, base
#include <stdio.h>

int main(void)
{

	int  number, remainder;

	printf("Enter an integer, nerd ");
	scanf("%d", &number);
	do
	{
		remainder = number % 10;	
		printf("%d", remainder);
		number /= 10;
	}
	while (number > 0);
	if (number == 0)
		printf("\n");

	return 0;
}
