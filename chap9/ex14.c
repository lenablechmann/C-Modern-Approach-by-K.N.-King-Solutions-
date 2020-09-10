// Testing the function in the book that we should correct
// fu should return true if ANY value is zero
//and false if ALL values are nonzero

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool has_zero_int(int a[], int n);

int main(void)
{
    const int n = 5; // will be array length as per the book
    int a[n];

    for (int i = 0; i < n; i++)
    {
        a[i] = 1;
    }
    printf("Enter %d ints: ", n);
    scanf("%d", &a[0]);

    for (int i = 1; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    if (has_zero_int(a, n) == true)
        printf("There was a zeeeero.\n");
    else
        printf("Your ints are all non zero numbers.\n");

    return 0;
}

bool has_zero_int(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
            return true;
    }
    return false;
}
