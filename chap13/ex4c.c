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
    while((ch = getchar()) != '\n')
    if (i < n - 1)
    s[i++] = ch;
    s[i] = '\n';
    s[i] = '\0';
    return i;
}