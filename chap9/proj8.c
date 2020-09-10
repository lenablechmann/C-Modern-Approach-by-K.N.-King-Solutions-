// A program that simulates the game of craps.

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <time.h> // needed for the random function.
#include <stdbool.h>
#include <ctype.h>

int roll_dice(void);
bool play_game(void);

// main will call play_game repeatedly and keep track of wins and losses.
// Also display you win you lose messages.
int main(void)
{
    int wins = 0, losses = 0;
    char ch = 'y'; // This makes sure the loop starts without the user input.

    while (true)
    {
        if (play_game() == true)
        {
            printf("\nYou win!\n");
            wins++;
            printf("\nPlay again?: "); // Needs newline to flush out and actually be useable in loops.
            scanf(" %c", &ch); // Needs space to be useable in loops.
            if (tolower(ch) != 'y')
            {
                printf("Wins: %3d    Losses: %3d\n", wins, losses);
                break;
            }
        }
        else if (play_game() == false)
        {
            printf("\nYou lose.\n");
            losses++;
            printf("\nPlay again?: "); // Needs newline to flush out and actually be useable in loops.
            scanf(" %c", &ch); // Needs space to be useable in loops.
            if (tolower(ch) != 'y')
            {
                printf("Wins: %3d    Losses: %3d\n", wins, losses);
                break;
            }
        }
    } 
    return 0;
}

// generate two random numbers between 1 and 6
// then return their sum.
int roll_dice(void)
{
    int num1, num2;
    srand(time(NULL));
    num1 = 1 + rand() % 6;
    num2 = 1 + rand() % 6;
    return num1 + num2;
}

// plays one game of craps
// first roll win if sum is 7 or 11, loses if 2,3 or 12
// everything else is a point and the game continues, wins if rolls point again. loses if rolls 7
bool play_game(void)
{
    // First roll is speshl
    int roll, roll1 = roll_dice();
    printf("You rolled: %3d\n", roll1);
    if(roll1 == 7 || roll1 == 11)
    return true;
    else if(roll1 == 2 || roll1 == 3 || roll1 == 12)
    return false;
    else
    {
    printf("Your point is: %d\n", roll1);
        for (;;)
        {
            roll = roll_dice();
            if (roll != 7 && roll != roll1)
            printf("You rolled: %3d\n", roll);
            else if (roll == 7)
            {
            printf("You rolled: %3d\n", roll);
            return false;
            }
            else if (roll == roll1)
            {
            printf("You rolled: %3d\n", roll);
            return true;
            }
        }
    }
    
}