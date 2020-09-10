// write a function named capitalize that capitalizes all letters in its argument
// the argument will be a null terminated string. 

#include <stdio.h>
#include <stdint.h>
#include <ctype.h>

#define LENGTH 80

int read_line(char s[], int n);
void capitalize(char *s);

int main(void)
{
    char s[LENGTH];
    printf("Enter the string: ");

    read_line(s, LENGTH);

    capitalize(s);

    printf("And here is your string in capital letters: \n");
    puts(s);

    return 0;
}

int read_line(char s[], int n)
{
    int ch, i = 0;
    while ((ch = getchar()) == ' ')
        ; // Skipping whitespaces. But stores the first letter.

    // Do while loop so that it gets the first char still.
    do
    {
        if (i < n)
            s[i++] = ch;
        s[i] = '\0';
    } while ((ch = getchar()) != '\n');
    return i;
}

void capitalize(char *s)
{
    for (; *s != '\0'; s++)
    *s = toupper(*s);
}