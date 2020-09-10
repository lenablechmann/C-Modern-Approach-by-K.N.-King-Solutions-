// a read line function that stops reading after first white space

#include <stdio.h>
#include <stdint.h>
#include <ctype.h>

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
    while ((ch = getchar()) != '\n')
    {
        if (i < n && !isspace(ch))
            s[i++] = ch;
        else if (isspace(ch))
            break;
    }
    s[i] = '\0';
    return i;
}