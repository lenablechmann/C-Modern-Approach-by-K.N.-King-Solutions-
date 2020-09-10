// Experimenting with square2.c from chapter 6. Finding out how many bits are in my ints.

#include <stdio.h>

int main(void)
{
	long int i;
	int n;
	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in the table: ");
	scanf("%ld", &n);

	for (i = 50000; i <= n; i++)
		printf("%10ld%10ld\n", i, i*i);

	return 0;
}
