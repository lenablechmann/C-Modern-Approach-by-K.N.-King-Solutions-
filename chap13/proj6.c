// Modify the planet.c program from the book
// In such a way that it won't be case sensitive anymore
/* planet.c (Chapter 13, page 304) */
/* Checks planet names */

#include <stdio.h>
#include <string.h>
#include <ctype.h> // Added it for tolower

#define NUM_PLANETS 9

int main(int argc, char *argv[])
{
    char *planets[] = {"mercury", "venus", "earth",
                       "mars", "jupiter", "saturn",
                       "uranus", "neptune", "pluto"}; // changed all to lowercase
    int i, j;

    //As much as i hate it, a third loop would be the easiest option
    for (i = 1; i < argc; i++)
    {
        // changing each letter in the string entered by user to lowercase
        for (int k = 0; k < strlen(argv[i]); k++)
            argv[i][k] = tolower(argv[i][k]);

        for (j = 0; j < NUM_PLANETS; j++)
        {
            if (strcmp(argv[i], planets[j]) == 0)
            {
                printf("%s is planet %d\n", argv[i], j + 1);
                break;
            }
        }
        if (j == NUM_PLANETS)
            printf("%s is not a planet\n", argv[i]);
    }

    return 0;
}
