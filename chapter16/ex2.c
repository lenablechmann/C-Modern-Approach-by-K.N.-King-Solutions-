// declare structure variables c1, c2, c3 each having members real and imaginary of type double
// copy c1 into c2, add up their members and copy the sum into c3

#include <stdio.h>

int main(void)
{
    struct
    {
        double real, imaginary;
    }
    c1 = {0.0, 1.0},
    c2 = {1.0, 0.0},
    c3;
    
    c2 = c1;
    c3.real = c2.real + c1.real;
    c3.imaginary = c2.imaginary + c1.imaginary;

    return 0;
    
}