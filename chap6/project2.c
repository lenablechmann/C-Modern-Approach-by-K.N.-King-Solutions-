#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int m, n, remain;	
	printf("Enter two positive integers : ");
	scanf("%d %d", &m, &n);

	while (n != 0)
	{
	remain = m % n;
	m = n;
	n = remain;
	}

//	if (n == 0)
//	Apparently an unnecessary condition
	printf("%d is the greatest common divisor.\n", m);

	return 0;
}

