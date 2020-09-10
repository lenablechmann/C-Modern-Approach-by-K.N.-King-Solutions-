// basic read line function will be modified in ex4a to ex4c

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
    for (i = 0; i < n; i++)
    {
        ch = getchar();

        if ((ch = getchar()) == '\n')
            break;
        else
            s[i] = ch;
    }
    s[i] = '\0';
    return i;
}