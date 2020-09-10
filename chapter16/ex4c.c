// Based on the previous code from ex3
// Write a function named make_complex that stores its two arguments
// Both of type double, in a complex structure then returns the structure

#include <stdio.h>

// needs to be announced here for the function to use a defined type.
typedef struct 
{
    double real, imaginary;
} Complex;


Complex make_complex(double real, double imaginary)
{
    // Uses compound literals of C99:
    //return (struct complex){real, imaginary};

    // Here is a C89 version:

    Complex c4;
    c4.real = 0.1;
    c4.imaginary = 0.3;

    return c4;
}

int main(void)
{
    return 0;
}
