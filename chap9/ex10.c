// Building three different functions

#include <stdio.h>
#include <stdlib.h>

// a is an array of values and n is the array length
int largest_element(int a[], int n);
int average(int a[], int n);
int positives(int a[], int n);

int main(void)
{
    const int n = 5; // array length
    int a[n];
    for (int i = 0; i < n; i++)
    a[i] = 0;
    int size = sizeof(int);
    int* first_pointer = &a[0];
    int first_value = a[0];

    int* second_pointer = &a[1];
    int second_value = a[1];

    int* last_pointer = &a[n - 1];
    int last_value = a[n - 1];


    printf("Enter 5 integers: ");
    for (int i = 0; i < n; i++)
    {
    scanf("%d", &a[i]);
    }
// you can use either &a[0] or a because it assumes a pointer if you use brackets.
    printf("The largest element is %d.\n", largest_element(a, n)); 
    printf("The average is %d.\n", average(a, n));
    printf("There are %d positive numbers.\n", positives(a, n));

    return 0;
}

int largest_element(int a[], int n)
{
    int high = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > high) // implies a + i
        high = a[i];
    }
    return high;
}
int average(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];
    return sum / n;

}
int positives(int a[], int n)
{
    int positive = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 0)
        positive++;
    }
    return positive;

}