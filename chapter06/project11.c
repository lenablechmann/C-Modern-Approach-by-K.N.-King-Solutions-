#include <stdio.h>

int main(void)
{
	// A program that approximates Eulers number.

	int n, fact_i = 1;
	float e = 1.0;
	
	printf("Enter an integer (the higher the better the approximation to e): ");
	scanf("%d", &n);



	for (int i = 1; i <= n; i++)
	{
		
		fact_i *= i;
		e += 1.0/fact_i;
	}

	printf("The approximation of e is %.6f\n", e);

	return 0;
}
