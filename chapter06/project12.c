#include <stdio.h>

int main(void)
{
// A different kind of e approximation.

	int fact_i = 1;
	float e = 1.0, term;
	
	printf("Enter a small float that will limit the e approximation: ");
	scanf("%f", &term);



	for (int i = 1; 1.0/fact_i >= term; i++)
	{	
		fact_i *= i;
		e += 1.0/fact_i;
	}

	printf("The approximation of e is %.6f\n", e);

	return 0;
}
