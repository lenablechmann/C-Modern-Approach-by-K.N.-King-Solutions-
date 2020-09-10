/* 
    rewrite a multidimensional array ident in such a way, that you don't use rows and column loops
*/

#include <stdio.h>
#include <stdint.h>

#define N 10

int main(void)
{
    double ident[N][N], *p;
    int count = 0;
    p = *ident;
    //The first element of the array must be 1 and then every N elements there will be another 1.
    *p = 1;
    for (p = &ident[0][1]; p <= &ident[N - 1][N - 1]; p++)
    {
        if (count == N)
        {
            *p = 1.0;
            count = 0; // Resetting the counter for simplicity's sake.
        }
        else
        {
            *p = 0.0;
            count++;
        }
    }

    // testing the array the old way:
    for (int row = 0; row < N; row++)
    {
        for (int col = 0; col < N; col++)
            printf("%.0lf ", ident[row][col]);
        printf("\n");
    }
    // testing the array the new way:
    printf("New version: \n");

    for (p = &ident[0][0]; p <= &ident[N - 1][N - 1]; p++)
    {
        printf("%.0lf ", *p);
        count++;
        if (count % N == 0 && count > 0) // that's where the row ends.
        {
            printf("\n");
        }
    }
            printf("\n");
    return 0;
}
