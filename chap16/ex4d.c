// Write a function that adds the corresponding members of two structs
// Then returns its result (another structure)

#include <stdio.h>

typedef struct 
{
    double real, imaginary;
} Complex;

Complex sum_complex(Complex a, Complex b);

int main(void)
{
    return 0;
}


Complex sum_complex(Complex a, Complex b)
{
    Complex sum;

    sum.real = a.real + b.real;
    sum.imaginary = a.imaginary + b.imaginary;

    return sum;
}