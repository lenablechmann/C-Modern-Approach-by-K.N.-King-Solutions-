// A basic struct tag experiment.
// Show how to declare a tag named complex for a struct with two members:
// real and imaginary of type double.

#include <stdio.h>

int main(void)
{
    struct complex
    {
        double real, imaginary;
    };

    return 0;
    
}