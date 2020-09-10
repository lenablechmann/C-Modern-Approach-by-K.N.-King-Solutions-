/* 
    rewrite this function:
    int *find_middle(int a[], int n)
    {
        return &a[n/2];
    }
    using pointer arithmetics
*/

#include <stdio.h>
#include <stdint.h>

#define N 10

int *find_middle(int *a, int n);
int *find_middle_book(int a[], int n);
int main(void)
{
    int a[N] = {0};

    printf("This is the middle of the array: %p \n", find_middle(a, N));
    printf("This is the book middle of the array: %p \n", find_middle_book(a, N));

    return 0;
}

// Will find the middle address. if we wanted to find the middle "cell",
// we would substract the a + n/2 from a + N, as that would give us an int.
// but the function in the book returns a pointer so, that shall stay.

int *find_middle(int *a, int n)
{
    return a + n / 2;
}
// comparing it to the "original" function in the book.
int *find_middle_book(int a[], int n)
{
    return &a[n / 2];
}