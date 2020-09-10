
// Prints out an 8x8 chessboard themed array.
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    const char chess_board[8][8] = {
        'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r',
        'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 
        ' ', '.', ' ', '.', ' ', '.', ' ', '.',
        '.', ' ', '.', ' ', '.', ' ', '.', ' ', 
        ' ', '.', ' ', '.', ' ', '.', ' ', '.',
        '.', ' ', '.', ' ', '.', ' ', '.', ' ', 
        'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 
        'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R',};

    printf("Here is a chessboard: \n");
    for (int i = 0; i < 8; i++)
    {
        printf("\n");

        for (int j = 0; j < 8; j++)
        {
            printf(" %c", chess_board[i][j]);
        }
    }
    printf("\n");
    return 0;
}