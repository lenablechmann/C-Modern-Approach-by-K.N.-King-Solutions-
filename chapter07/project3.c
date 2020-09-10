// changing the source code from the book chapter 7.1 to sum up doubles. As per the project.
// sums a series of numbers (doubles)

#include <stdio.h>

int main(void)
{
	double i, sum = 0;
	printf("This program sums a series of integers.\n");
	printf("Enter some numbers (0 to terminate): ");
	scanf("%lf", &i);

		while (i != 0)
		{
			sum += i;
			scanf("%lf", &i);
		}

	printf("The sum is %lf\n", sum);

	return 0;
}
