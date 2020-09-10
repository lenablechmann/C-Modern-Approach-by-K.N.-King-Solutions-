#include <stdio.h>
#include <math.h> // just in case

// computes the factorial of a positive int,

int main(void)
{
	int x;
	long long fact = 1;

	printf("Enter a positive integer: ");
	scanf("%d", &x);
	if (x < 0)
	{
		printf("nope, try again");
		return 1;
	}

	for  (int i = 1; i <= x; i++)
	{
		fact *= i; 
	}

	printf("the factorial is  %lld\n", fact);
	return 0;
}
