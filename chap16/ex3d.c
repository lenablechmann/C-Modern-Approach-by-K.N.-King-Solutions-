// Write a function that adds the corresponding members of two structs
// Then returns its result (another structure)

#include <stdio.h>

struct complex
{
    double real, imaginary;
};

struct complex sum_complex(struct complex a, struct complex b);

int main(void)
{
    return 0;
}


struct complex sum_complex(struct complex a, struct complex b)
{
    struct complex sum;

    sum.real = a.real + b.real;
    sum.imaginary = a.imaginary + b.imaginary;

    return sum;
}