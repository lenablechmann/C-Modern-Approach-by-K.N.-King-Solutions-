// Checking how scanf works with strings.

#include <stdio.h>
#include <stdint.h>

int main(void)
{
    int i, j;
    char s[20];
    printf("Enter the string from the book:");
    scanf("%d%s%d", &i, s, &j);
    printf("Here is i %d\n", i);
    printf("Here is j %d\n", j);
    printf("Here is the string: ");
    puts(s);

    return 0;
}