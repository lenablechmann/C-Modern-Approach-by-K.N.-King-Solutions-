// testing out a * function from the book with the debugger.
// this mystery function prints how long the common word combination is between strings
// that are of the same length

#include <stdio.h>
#include <stdint.h>
#include <ctype.h>

#define LENGTH 80

int f(char *s, char *t);

int main(void)
{
    char s1[LENGTH] = {0}, s2[LENGTH] = {0};

    printf("Enter a string: ");
    scanf("%s", s1);
    printf("Enter another string: ");
    scanf("%s", s2);
    printf("Thats the value %d \n", f(s1, s2));

    return 0;
}

int f(char *s, char *t)
{
    char *p1, *p2;

    for (p1 = s; *p1; p1++)
    {
        for (p2 = t; *p2; p2++)
        if (*p1 == *p2) break;
        if (*p2 == '\0') break;
    }
    return p1 - s;
}