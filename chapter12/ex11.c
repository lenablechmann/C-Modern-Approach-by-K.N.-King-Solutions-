/* 
    rewrite find_largest function using pointer arithmetics.
    this is the original
    int find_largest(int a[], int n)
    {
        int i, max;
        max = a[0];
        for (i = 1; i < n; i++)
        {
            if (a[i] > max)
            max = a[i]
            return max;
        }
    }
*/

#include <stdio.h>
#include <stdint.h>

#define N 3

int find_largest(int *a, int n);

int main(void)
{
    int a[N] = {0};
    int *ptr;

    printf("Enter %d integers. \n", N);
    for (ptr = a; ptr < a + N; ptr++)
        scanf(" %d", ptr);

    printf("%d is the largest element.\n", find_largest(a, N));
    return 0;
}

// Will find the middle address. if we wanted to find the middle "cell",

int find_largest(int *a, int n)
{
    int *p, max = *a;

    for (p = a; p < a + N; p++)
    {
        if (*p > max)
        max = *p;
    }
    return max;
}