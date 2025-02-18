// A program from the book, just so that I can experiment with concepts.
// Computes pairwise averages of three numbers.

#include <stdio.h>
double average(double a, double b) // Notice how everything is marked as double.
{
    return (a + b) / 2;
}

int main(void)
{
    double x, y, z;
    printf("Enter three numbers: ");
    scanf("%lf%lf%lf", &x, &y, &z);

    printf("Average of %g and %g is: %g\n", x, y, average(x, y));
    printf("Average of %g and %g is: %g\n", y, z, average(y, z));
    printf("Average of %g and %g is: %g\n", x, z, average(x, z));

    return 0;
}