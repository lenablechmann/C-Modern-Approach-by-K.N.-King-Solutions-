#include <stdio.h>

int *max(int *a, int *b);
void decompose(double x, long *int_part, double *frac_part);

int main(void)
{
    long z; // Don't need to initialize it as decompose will fill it with the value.
    double d;

    decompose(3.14159, &z, &d);
    printf("Let's decompose 3.1415 into parts: %d is the int part, %lf is the frac part. \n",
           z, d);

    int *p, num1 = 1, num2 = 32;

    p = max(&num1, &num2);
    // Mind that we need to mark *p so that it gets the value and not the address.
    // If we wanted the address we'd need to use %p.
    printf("Finding out which number is bigger %d or %d: %d. \n", num1, num2, *p);

    return 0;
}

void decompose(double x, long *int_part, double *frac_part)
{
    // I don't need to announce that *int_part is a long because I already did it in the function name.
    *int_part = (long)x;
    *frac_part = x - *int_part;
}

// This time the function will return the pointer.
int *max(int *a, int *b)
{
    if(*a > *b)
    return a;
    if (*b > *a)
    return b;
}