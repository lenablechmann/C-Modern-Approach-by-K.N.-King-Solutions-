// This read_line function will skip spaces at the start.

#include <stdio.h>
#include <stdint.h>

#define LENGTH 80

int read_line(char s[], int n);

int main(void)
{
    char s[LENGTH];
    printf("Enter the string: ");
    read_line(s, LENGTH);
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