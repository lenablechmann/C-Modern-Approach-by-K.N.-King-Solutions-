#include <stdio.h>
#include <math.h> // book wants us to use the fabs function 

// Uses Newton's method to calculate the square roots.

int main(void)
{
	double x, tmp, y, avg;

	printf("Enter a positive number: ");
	scanf("%lf", &x);

	for  (y = 1; (fabs(tmp - y)) >= (0.0001 * y);)
	{
		tmp = y; // Using tmp to store the good ol y.
		avg = ((x / y) + y) / 2.0;
		y = avg;
	printf("y after is  %lf\n", y);
	}
	return 0;
}
