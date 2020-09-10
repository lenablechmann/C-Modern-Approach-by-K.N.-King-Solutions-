/* 
    There is a chess pieces enum, the task is to write
    a declaration for an array of piece value ints
    Then repeat the same but with a designated initializer.
*/

#include <stdio.h>

int main(void)
{
    enum chess_pieces {KING, QUEEN, ROOK, BISHOP, KNIGHT, PAWN};
    // a) C89 way
    //const int piece_value[] = {200, 9, 5, 3, 3, 1} ;
    // b) same but the C99 way.
    const int piece_value[] = {[KING] = 200,[QUEEN] = 9, [ROOK] = 5, [BISHOP] = 3, [KNIGHT] = 3, [PAWN] = 1} ;

    return 0;
}
