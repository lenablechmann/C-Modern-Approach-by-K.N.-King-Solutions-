/*
    rewrite the following function to use pointer arithmetic instead of array subscripting.
    Use a single loop instead of nested loops.
    
    int sum_two_dimensional_array(const int a[][LEN], int n)
    {
        int i, j, sum = 0;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < LEN; j++)
            sum += a[i][j];
        }
        return sum;
    }
*/

#include <stdio.h>
#include <stdlib.h>

#define LEN 10

//int sum_two_dimensional_array(const int **a, int n);
//int sum_two_dimensional_array(const int a[][LEN], int n);
int sum_two_dimensional_array(const int a[], int n);
int main(void)
{
    int array_2D[LEN][LEN] = {1, 2, 3, 4, 5}; // The sum should be 15
    int *p = &array_2D[0][0];

    printf("The sum is %d.\n", sum_two_dimensional_array(p, LEN));
    return 0;
}

//int sum_two_dimensional_array(const int **a, int n)
//int sum_two_dimensional_array(const int a[][LEN], int n)
int sum_two_dimensional_array(const int a[], int n)
{
    const int *p; // to match the const array type
    int sum = 0;
    // Everything is stored in one "row", so n*LEN is the whole array length
    
    for (p = a; p < a + n * LEN; p++)
    {
        sum += *p;
    }
    return sum;
}