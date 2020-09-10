// Calculates the inner product of matrices. 
#include <stdio.h>
#include <stdlib.h>

double inner_product(double a[], double b[], int n);

int main(void)
{
    const int n = 5;
    double a[n], b[n];
    printf("Enter 5 doubles for the first array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", & a[i]);
    }

    printf("Enter 5 doubles for the second array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", & b[i]);
    }
    // Don't need to separately use the function, can just put it into printf.
    printf("%.2lf is the product of those.\n", inner_product(a, b, n));

    return 0;
}


double inner_product(double a[], double b[], int n)
{
    double product = 0;
    for(int i = 0; i < n; i++)
    {
        product += a[i] * b[i];
    }
    return product;
}
