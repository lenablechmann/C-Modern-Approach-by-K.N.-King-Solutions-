/*
    A program that reverses the command line arguments
    since argv is an array of pointers we could just reverse them.
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define LENGTH 40

int main(int argc, char *argv[])
{
    // argc 0 is the program name, the rest we can reverse.
    for (int i = argc - 1; i > 0; i--)
    {
        printf("%s ", argv[i]);
    }
    printf("\n");
    return 0;
}
