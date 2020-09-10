// Declaring the color structure, that will be represented via RGB
// And adding const magenta
// This time using C99 capabilities with designated initializers

#include <stdio.h>

int main(void)
{
    struct color
    {
        int red, green, blue;
        //green defaults to 0 as it aint mentioned.
    } const MAGENTA = {.red = 255, .blue = 255};

    return 0;
    
}