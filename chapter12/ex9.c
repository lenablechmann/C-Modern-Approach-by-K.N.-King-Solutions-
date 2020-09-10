/* 
    Write a function that multiplies matrices
    function should be using pointer arithmetic.
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

#define N 5

double inner_product(double *a, double *b, int n);

int main(void)
{
    double a[N] = {0}, b[N] = {0}, *ptr;

    // Populating both arrays with doubles with the help of the user. 
    printf("Enter the first array of %d doubles: ", N);
    for(ptr = a; ptr < a + N; ptr++)
        scanf(" %lf", ptr); 
    
    printf("Enter the second array of %d doubles: ", N);
    for(ptr = b; ptr < b + N; ptr++)
        scanf(" %lf", ptr);

    printf("\nThis is the product of the matrices: %.2lf \n", inner_product(a, b, N));

    return 0;
}

// The function that will multiply the arrays.

double inner_product(double *a, double *b, int n)
{
    double product = 0, *ptr_a, *ptr_b;
    //making sure that the pointers point to the [0] int the arrays.
    ptr_a = a;
    ptr_b = b;

    while (ptr_a < a + N && ptr_b < b + N)
    {
        // the inner product has the form of a[0]*b[0] + a[1]*b[1]....
        product += (*ptr_a) * (*ptr_b);
        ptr_a++;
        ptr_b++;
    }

    return product;
}