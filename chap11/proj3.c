// Adding an extra function with pointers to the reduced terms.
// reducing fractions.
#include <stdio.h>
#include <stdlib.h>

void reduce(int numerator, int denumerator,
            int *reduced_numerator, int *reduced_denumerator);
int main(void)
{
    int reduced_numerator, reduced_denumerator;
    int m, n, remain; // m is a numerator, n the denumerator.

    printf("Enter a fraction: ");
    scanf("%d/%d", &m, &n);
    reduce(m, n, &reduced_numerator, &reduced_denumerator);

    //	if (n == 0)
    //	Apparently an unnecessary condition
    printf("In lowest terms: %d/%d\n", reduced_numerator, reduced_denumerator);

    return 0;
}

void reduce(int numerator, int denumerator,
            int *reduced_numerator, int *reduced_denumerator)
{
    int remain;
    int m = numerator;
    int n = denumerator;

	while (n != 0)
	{
	remain = m % n;
	m = n;
	n = remain;
	}
    *reduced_numerator = numerator / m;
    *reduced_denumerator = denumerator / m;
}