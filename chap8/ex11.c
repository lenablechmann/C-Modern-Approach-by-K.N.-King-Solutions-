
// Prints out an 8x8 checkerboard themed array.
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    char checker_board[8][8];

    printf("Here is a checkerboard: \n");
    for (int i = 0; i < 8; i++)
    {
        printf("\n");

        for (int j = 0; j < 8; j++)
        {
            if ((i + j) % 2 == 0)
            {
            checker_board[i][j] = 'B';
            printf(" %c", checker_board[i][j]);
            }
            else
            {
            checker_board[i][j] = 'R';
            printf(" %c", checker_board[i][j]);
            }
        }
    }
    printf("\n");
    return 0;
}