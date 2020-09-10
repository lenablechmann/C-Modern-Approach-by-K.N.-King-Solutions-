// The program will be asking users for a series of integers
// Storing them in an array, then selection sorting them recursively.

#include <stdio.h>
#include <stdlib.h>

#define N 5

void selection_sort(int a[], int high, int n); // void because the fu won't return anything.

int main(void)
{
    int n = N; // will be array length as per the book
    int a[N];

    printf("Enter %d positive integers you want sorted: ", N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }

    selection_sort(a, a[0], n);

    printf("\nHere is the sorted list: ");
    for (int i = 0; i < N; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}
// find the largest element, swap it with the last in the array
// call it recursivey for the first n - 1 elements.
// so we need a swap function and we need to loop to find the min.
// then continue it recursively.

void selection_sort(int a[], int high, int n)
{
    int i_max = 0, tmp;
    if (n == 0) // We are counting down n during recursion
        return;
    for (int i = 0; i <= n - 1; i++)
    {
        if (high <= a[i])
            i_max = i;
        high = a[i_max];
    }
    // swapping over the address only when necessary.
    tmp = a[n - 1];
    a[n - 1] = a[i_max];
    a[i_max] = tmp;
    // resetting high so that the program won't get confused by ultimate highs,
    high = a[0];

    selection_sort(a, high, n - 1);
}