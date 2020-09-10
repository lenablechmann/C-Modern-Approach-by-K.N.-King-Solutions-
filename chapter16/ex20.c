/* 
    There is a direction variable (enum)
    x and y are also variables and I need to write a switch statement
    for the direction, increment x if direction is east, decrement if west
    increment if south, decrement if north
*/

#include <stdio.h>

int main(void)
{
    int x = 10, y = 10;
    enum {NORTH, SOUTH, EAST, WEST} direction;

    direction = 1;

    switch (direction)
    {
    case NORTH: y--; break;
    case SOUTH: y++; break;
    case EAST: x++; break;
    case WEST: x--; break;
    default: break;
    }
    printf("%d %d\n", x, y);
    return 0;
}
