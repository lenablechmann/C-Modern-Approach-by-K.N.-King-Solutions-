// A function, that returns a pointer to the array's largest element.

#include <stdio.h>

#define N 10

int *find_largest(int *a, int n);
void max_min(int a[], int n, int *max, int *min);

int main(void)
{
    int a[N] = {0};

    printf("Enter %d numbers: ", N);
    for (int i = 0; i < N; i++)
        scanf("%d", &a[i]);

    printf("Largest: %d\n", *find_largest(a, N));

    return 0;
}

void max_min(int a[], int n, int *max, int *min)
{
    int i;

    *max = *min = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] > *max)
            *max = a[i]; // but modifying values.
        else if (a[i] < *min)
            *min = a[i];
    }
}

int *find_largest(int *a, int n)
{
    int high, element;
    high = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > high)
            element = i;
    }

    return &a[element];
}