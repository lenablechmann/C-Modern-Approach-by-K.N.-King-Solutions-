#include <stdio.h>

int main(void)
{
	int i, n;
	// This program gonna display all even squared up to the number the user enters.
	printf("Enter an integer and the program will display \nall even squared up until that number:");
	scanf("%d", &n);
	
	for(i = 1; i * i  <= n; i++)
	{
		if (i % 2 == 0)	
		printf("%d\n", i * i);
		else
		continue;
	}
	return 0;
}
