// write a function named censor
// which will censor each occurence of "foo" with "XxX"

#include <stdio.h>
#include <stdint.h>
#include <ctype.h>

#define LENGTH 80

int read_line(char s[], int n);
void censor(char *s);

int main(void)
{
    char s[LENGTH];
    printf("Enter the string: ");

    read_line(s, LENGTH);

    censor(s);

    printf("And here is your string censored: \n");
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
// doing it via pointers cause need practice.
void censor(char *s)
{
    for (; *s != '\0'; s++)
    {
        if (tolower(*s) == 'f' && tolower(*(s + 1)) == 'o' && tolower(*(s + 2)) == 'o')
        {
        *s = 'X'; 
        *(s + 1) = 'x'; 
        *(s + 2) = 'X'; 
        }
    }
}