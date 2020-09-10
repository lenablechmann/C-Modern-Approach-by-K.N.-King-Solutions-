/* 
    write a function that finds two largest elements,
    using pointer arithmetics and without changing the arrays themselves.
*/

#include <stdio.h>
#include <stdint.h>

#define N 5

void find_two_largest(int *a, int n, int *largest, int *second_largest);

int main(void)
{
    int a[N] = {0};
    int *ptr, largest, second_largest;

    printf("Enter %d integers. \n", N);
    for (ptr = a; ptr < a + N; ptr++)
        scanf(" %d", ptr);

    // since the fu returns void, it'll be called separately.
    find_two_largest(a, N, &largest, &second_largest);

    printf("%d is the largest element, and %d the second largest.\n", largest, second_largest);

    return 0;
}

// Find two largest elements in the array without modifying it:

void find_two_largest(int *a, int n, int *largest, int *second_largest)
{
    // setting their starting value to a[0]
   *second_largest = *largest = *a;

   for (int *p = a; p < a + N; p++) 
   {
       if (*p >= *largest)
       *largest = *p;
   }
   for (int *p = a; p < a + N; p++) 
   {
       if (*p < *largest && *p >= *second_largest)
       *second_largest = *p;
   }
}