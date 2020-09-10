#include <stdio.h>

// Swap function of two variables.
void swap(int *p, int *q);

int main(void)
{
    int p = 54, q = 2;
    printf("This is p before the accident: %d And this is q before: %d\n", p, q);
    swap(&p, &q);
    printf("This is p after: %d And this is q after: %d\n Swap - not even once.\n", p, q);

    return 0;
}

void swap(int *p, int *q)
{
    int tmp = 0;
    tmp = *p;
    *p = *q;
    *q = tmp;
}