/*
    A program that sums up command line arguments
*/

#include <stdio.h>
#include <stdlib.h> //atoi
#include <ctype.h>
#include <string.h>


int main(int argc, char *argv[])
{
    int sum = 0;

    for (int i = 1; i < argc; i++)
    {
        sum += atoi(argv[i]); // Atoi turns every string into an int.
    }
    printf("This is the sum: %d.\n", sum);
    return 0;
}
