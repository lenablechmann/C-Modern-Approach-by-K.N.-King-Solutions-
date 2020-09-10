
// Generates a random walk from A to Z in a 10x10 array.
// now split into two extra functions

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generate_random_walk(char ground[10][10]);
void print_array(char ground[10][10]);

int main(void)
{
    char ground[10][10];

    generate_random_walk(ground);
    print_array(ground);

    return 0;
}

void generate_random_walk(char ground[10][10])
{
    char letter = 'A';
    int direction, row, column;

    srand(time(NULL)); // Starting the random function for moves of the snake.

    for (row = 0; row < 10; row++)
    {
        for (column = 0; column < 10; column++)
        {
            ground[row][column] = '.';
        }
        printf("\n");
    }

    row = 0, column = 0;
    ground[row][column] = letter;

    while (ground[row + 1][column] == '.' ||
           ground[row][column + 1] == '.' ||
           ground[row - 1][column] == '.' ||
           ground[row][column - 1] == '.')
    {
        direction = (rand() % 4); // gives random numbers 0 to 3.
        switch (direction)
        {
        case 0: // down
            if (ground[row + 1][column] == '.' && row < 9)
            { //down
                row = row + 1;
                column = column;
                break;
            }
            if (ground[row - 1][column] == '.' && row > 0)
            { // goes up.
                row = row - 1;
                column = column;
                break;
            }
            if (ground[row][column + 1] == '.' && column < 9)
            { // goes right.
                row = row;
                column = column + 1;
                break;
            }
            if (ground[row][column - 1] == '.' && column > 0)
            { // goes left.
                row = row;
                column = column - 1;
                break;
            }

        case 1: // up
            if (ground[row - 1][column] == '.' && row > 0)
            { // goes up.
                row = row - 1;
                column = column;
                break;
            }
            if (ground[row + 1][column] == '.' && row < 9)
            { //down
                row = row + 1;
                column = column;
                break;
            }
            if (ground[row][column + 1] == '.' && column < 9)
            { // goes right.
                row = row;
                column = column + 1;
                break;
            }
            if (ground[row][column - 1] == '.' && column > 0)
            { // goes left.
                row = row;
                column = column - 1;
                break;
            }
            break;

        case 2: // left
            if (ground[row][column - 1] == '.' && column > 0)
            { //left
                row = row;
                column = column - 1;
                break;
            }
            if (ground[row + 1][column] == '.' && row < 9)
            { // down
                row = row + 1;
                column = column;
                break;
            }
            if (ground[row - 1][column] == '.' && row > 0)
            { // up
                row = row - 1;
                column = column;
                break;
            }
            if (ground[row][column + 1] == '.' && column < 9)
            { // right
                row = row;
                column = column + 1;
                break;
            }
            break;

        case 3: // right
            if (ground[row][column + 1] == '.' && column < 9)
            { // right
                row = row;
                column = column + 1;
                break;
            }
            if (ground[row][column - 1] == '.' && column > 0)
            { //left
                row = row;
                column = column - 1;
                break;
            }
            if (ground[row + 1][column] == '.' && row < 9)
            { // down
                row = row + 1;
                column = column;
                break;
            }
            if (ground[row - 1][column] == '.' && row > 0)
            { // up
                row = row - 1;
                column = column;
                break;
            }
            break;

        default:
            break;
        }

        if (letter < 'Z')
        {
            letter++;
            ground[row][column] = letter;
        }
        else
            break;
    }
}
    void print_array(char ground[10][10])
    {

        for (int row = 0; row < 10; row++)
        {
            for (int column = 0; column < 10; column++)
            {
                printf("%c ", ground[row][column]);
            }
            printf("\n");
        }
    }