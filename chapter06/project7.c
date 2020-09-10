#include <stdio.h>
// Prints squares using an odd method.

int main(void)
{
	int i, n, odd, square;
	printf("Enter the number of entries:");
	scanf("%d", &n);

	odd = 3;
	for(square = 1, i = 1; i  <= n; ++i, odd += 2)
	{
		printf("%10d%10d\n", i, square);
		square += odd;
	}
	return 0;
}
