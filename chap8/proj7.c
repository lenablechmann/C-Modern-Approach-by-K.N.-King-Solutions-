
// Fills a 5x5 array with user input then sums up rows and columns separately.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int numbers_array[5][5];
    int sum_rows[5], sum_columns[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter row %d: ", i + 1);

        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &numbers_array[i][j]);
        }
    }

    printf("Row totals: ");

    for (int row = 0; row < 5; row++)
    {
        for (int column = 0; column < 5; column++)
        {
           sum_rows[row] += numbers_array[row][column];
        }
        printf("%d ", sum_rows[row]);
    }
    printf("\n");

    // inverting rows and columns to find the sum of columns.

    printf("Column totals: ");

    for (int column = 0; column < 5; column++)
    {
        for (int row = 0; row < 5; row++)
        {
        sum_columns[column] += numbers_array[row][column];
        }
        printf("%d ", sum_columns[column]);
    }
    printf("\n");
    return 0;
}