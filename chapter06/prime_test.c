#include <stdio.h>

int main(void)
{
	int n = 100, d;
	for (d = 70; d < n; d++)
		if (n % d == 0)
			goto done;
done:
	if (d < n)
		printf("%d is divisible by %d\n", n, d);
	else
		printf("%d is a prime. \n", n);
return 0;
	
}
