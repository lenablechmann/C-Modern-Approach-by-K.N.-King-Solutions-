// Declare a structure with the tag pinball_machine
// that will be composed of a string, ints, an enum type

#include <stdio.h>

#define LENGTH 40
int main(void)
{
    struct pinball_machine
    {
        char name[LENGTH + 1]; // +1 as it needs to be a string, so extra space for the nullchar
        int year;
        enum type {EM, ES}; // Electromechanical, solid state
        int players;
    };
   return 0;
}
