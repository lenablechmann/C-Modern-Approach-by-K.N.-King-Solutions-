/* 
need to rewrite a sum function from the book,
so that it uses pointer arithmetic instead of subscription.
*/

#include <stdio.h>
#include <stdint.h>

#define N 5

int sum_array(int *a, int n);

int main(void)
{
    int a[N] = {1, 1, 1, 1, 1};
    
    printf("This is the sum of the array: %d.\n", sum_array(a, N));

    return 0;
}

int sum_array(int *a, int n)
{
    int *p, sum;

    sum = 0;

    for (p = a; p < a + N; p++)
        sum += *p;

    return sum;
}