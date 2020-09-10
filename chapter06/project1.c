#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int  max = 0, number;	
	printf("Enter a positive number: ");
	scanf("%d", &number);
	while  (number > 0)
	{
		printf("Enter a positive number: ");
		scanf("%d", &number);
		if (number > max)
		{
		max = number;
		}
		else
		continue;
	}
	printf("The current maximum is %d\n", max);
	return 0;
}

