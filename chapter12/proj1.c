//    A program that reads a user message, then prints out the reversal of it.

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define SIZE 20

int main(void)
{
    char *ch, *end, message[SIZE] = {' '};
    end = &message[SIZE]; // pointer arithmetic, substracting pointers gives distance.

    printf("Enter your message (%d chars max): ", SIZE);
    for (ch = message; ch < end; ch++)
    {
        *ch = getchar(); 
        if (*ch == '\n')
        break;
    }

    printf("Here is your message reversed: ");
    for (ch = end; ch >= message; ch--) // Starting from the end for reversal, getting rid of []
    {
        if(*ch != '\0' && *ch != '\n')
        putchar(*ch);
    }
    printf("\n");
    return 0;
}
