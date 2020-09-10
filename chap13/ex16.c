// testing out a * function from the book with the debugger.
// this mystery function prints how long the common word combination is between strings
// that are of the same length

#include <stdio.h>
#include <stdint.h>
#include <ctype.h>

#define LENGTH 150

int count_spaces(const char *s);

int main(void)
{
    char s1[LENGTH] = {0};
    char *s2 = {&s1[0]};

    printf("Enter a string: ");
    fgets(s1, LENGTH, stdin);

    printf("This is the amount of spaces: %d \n", count_spaces(s1));
    return 0;
}

int count_spaces(const char *s)
{
    int count = 0;
    while (*s++)
        if (*s == ' ')
            count++;
    return count;
}