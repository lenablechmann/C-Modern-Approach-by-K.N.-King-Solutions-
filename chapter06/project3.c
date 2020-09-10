//calculating the greatest common denominator

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int m, n, remain;	
	printf("Enter a fraction: ");
	scanf("%d/%d", &m, &n);

	int number1 = m;
	int number2 = n;

	while (n != 0)
	{
	remain = m % n;
	m = n;
	n = remain;
	}

//	if (n == 0)
//	Apparently an unnecessary condition
	printf("In lowest terms: %d/%d\n", number1 / m, number2 / m);

	return 0;
}

