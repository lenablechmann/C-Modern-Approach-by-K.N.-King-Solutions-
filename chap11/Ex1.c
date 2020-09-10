#include <stdio.h>

// Testing out which input is the alias of i.

int main(void)
{
    int i = 33;
    int *p; 
    p = &i;
    int j = *p;

    printf("Checking the &i value %d also %p\n", &i, &i);
    return 0;
}