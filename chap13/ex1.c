// Checking which inputs are legal for puts, printf

#include <stdio.h>
#include <stdint.h>

int main(void)
{
    printf("%c", 'a');

    printf("%c", "b");
    printf("%s", "d");
    printf("f");
    putchar('g');
    putchar("h");
    puts("j"); // prints an extra tab

    return 0;
}