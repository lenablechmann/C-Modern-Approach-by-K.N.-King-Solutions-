/*  Describe a chessboard with its pieces via structures and enums:
    a) define two enum types: color and pieces
    b) using the aforementioned types define a struct type square that can store em
    c) using type square declare an 8x8 array that can store the entirety of the chessboard
    d) initialize the chessboard */

#include <stdio.h>

int main(void)
{
    //a)
    typedef enum {PAWN, KNIGHT, BISHOP, ROOK, QUEEN, KING, EMPTY} piece;
    typedef enum {BLACK, WHITE} color;

    // b) Defining a struct type that can store both pieces and colors
    typedef struct
    {
        enum piece;
        enum color;
    } square;

   // c) & d) initializing the board with all the chess pieces.
   square board[8][8] =
   {
       {ROOK, WHITE}, {KNIGHT, WHITE}, {BISHOP, WHITE}, {QUEEN, WHITE}, {KING, WHITE}, {BISHOP, WHITE}, {KNIGHT, WHITE}, {ROOK, WHITE},
       {PAWN, WHITE}, {PAWN, WHITE}, {PAWN, WHITE}, {PAWN, WHITE}, {PAWN, WHITE}, {PAWN, WHITE}, {PAWN, WHITE}, {PAWN, WHITE},   
       {EMPTY, 0}, {EMPTY, 0}, {EMPTY, 0}, {EMPTY, 0}, {EMPTY, 0}, {EMPTY, 0}, {EMPTY, 0}, {EMPTY, 0}, 
       {EMPTY, 0}, {EMPTY, 0}, {EMPTY, 0}, {EMPTY, 0}, {EMPTY, 0}, {EMPTY, 0}, {EMPTY, 0}, {EMPTY, 0}, 
       {EMPTY, 0}, {EMPTY, 0}, {EMPTY, 0}, {EMPTY, 0}, {EMPTY, 0}, {EMPTY, 0}, {EMPTY, 0}, {EMPTY, 0}, 
       {EMPTY, 0}, {EMPTY, 0}, {EMPTY, 0}, {EMPTY, 0}, {EMPTY, 0}, {EMPTY, 0}, {EMPTY, 0}, {EMPTY, 0}, 
       {PAWN, BLACK}, {PAWN, BLACK}, {PAWN, BLACK}, {PAWN, BLACK}, {PAWN, BLACK}, {PAWN, BLACK}, {PAWN, BLACK}, {PAWN, BLACK},   
       {ROOK, BLACK}, {KNIGHT, BLACK}, {BISHOP, BLACK}, {QUEEN, BLACK}, {KING, BLACK}, {BISHOP, BLACK}, {KNIGHT, BLACK}, {ROOK, WHITE}
   };

   return 0;
}
