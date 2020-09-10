#include <stdio.h>

void decompose(double x, long *int_part, double *frac_part);

int main(void)
{
    // Just some pointer experiments.
    int *p, i;
    p = &i; // & is the address of the variable.
    i = 42;

    printf("P is %p, i is %d, *p is %d and &i is %p\n", p, i, *p, &i);
    // * is the indirection operator.
    *p = 33; // changes the i value as well.

    printf("I've set p* = 33 so now we have \n P is %p, i is %d, *p is %d and &i is %p\n\n\n", p, i, *p, &i);

    long z; // Don't need to initialize it as decompose will fill it with the value.
    double d;

    decompose(3.14159, &z, &d);
    printf("Let's decompose 3.1415 into parts: %d is the int part, %lf is the frac part. \n",
           z, d);

    return 0;
}

void decompose(double x, long *int_part, double *frac_part)
{
    // I don't need to announce that *int_part is a long because I already did it in the function name.
    *int_part = (long)x;
    *frac_part = x - *int_part;
}