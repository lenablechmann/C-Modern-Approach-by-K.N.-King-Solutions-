// no input from me, just testing what the program from the book outputs

#include <stdio.h>

int main(void)
{
    char s[] = "Hsjodi", *p;

    for (p = s; *p; p++)
    --*p;
    puts(s);
    return 0;
}