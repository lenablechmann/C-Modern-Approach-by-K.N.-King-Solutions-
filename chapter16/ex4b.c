// Show how to declare a struct type named complex for a struct with two members:
// real and imaginary of type double.
// add variables declaration c1 c2 and c3

#include <stdio.h>

int main(void)
{
    typedef struct 
    {
        double real, imaginary;
    } Complex;

    Complex c1, c2, c3;

    return 0;
    
}