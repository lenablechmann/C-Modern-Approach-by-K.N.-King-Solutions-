// Declaring the color structure, that will be represented via RGB
// And adding const magenta

#include <stdio.h>

int main(void)
{
    struct color
    {
        int red, green, blue;
    } const MAGENTA = {255, 0, 255};

    return 0;
    
}