// prints a user specified n x n magic square.

#include <stdio.h>
#include <stdint.h>

int main(void)
{
    int n, num = 1, row, column;
    int magic_square[5][5] = {0};

    printf("This program is going to print a magic square.\n");
    printf("You can specify the size, give me an odd number\n between 2 and 100: ");
    scanf("%d", &n);
    if (n % 2 == 0 || n > 99 || n < 3)
    {
        printf("Try a different odd number\n");
        return 1;
    }

    row = 0, column = n / 2; // Starting in the middle of the first row.

    for (num = 1; num <= n * n;)
    {
        if (row < 0 && column == n)
        {
            row = 1; // tbh just found it out via debugger.
            column = n - 1;
        }
        else
        {
            // for when it goes off to the right side.
            if (column == n)
            {
                column = 0;
            }
            // For when it tries to leave upper row
            if (row < 0)
            {
                row = n - 1;
            }
        }
        if (magic_square[row][column] != 0)
        {
            column--;
            row += 2;
            continue;
        }
        else
            magic_square[row][column] = num++;

        row--;
        column++; // As per the magic square description down one row, next column.
    }

    for (row = 0; row < n; row++)
    {
        for (column = 0; column < n; column++)
        {
            printf("%3d", magic_square[row][column]);
        }
        printf("\n");
    }

    return 0;
}