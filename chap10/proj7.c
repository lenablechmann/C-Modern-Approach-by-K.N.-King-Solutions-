// A program that displays digits in a seven segment format.
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> //  for is_digit

#define MAX_DIGITS 10

// 1 for '_' 2 for '|' 0 for ' ' in each displayed number
const int segments[10][9] = {
    {0, 1, 0, 2, 0, 2, 2, 1, 2},
    {0, 0, 0, 0, 0, 2, 0, 0, 2},
    {0, 1, 0, 0, 1, 2, 2, 1, 0},
    {0, 1, 0, 0, 1, 2, 0, 1, 2},
    {0, 0, 0, 2, 1, 2, 0, 0, 2},
    {0, 1, 0, 2, 1, 0, 0, 1, 2},
    {0, 1, 0, 2, 1, 0, 2, 1, 2},
    {0, 1, 0, 0, 0, 2, 0, 0, 2},
    {0, 1, 0, 2, 1, 2, 2, 1, 2},
    {0, 1, 0, 2, 1, 2, 0, 1, 2},
};
char digits[4][MAX_DIGITS * 4];

void clear_digits_array(void);               //stores blanks into all digits chars
void process_digit(int digit, int position); // seven segment representation of digit
void print_digits_array(void);               // prints each digit row on a single line

// Asks user for a line of braces and pushes the left braces, then pops the right ones.
int main(void)
{
    int how_many = 0, digit;
    char ch;

    clear_digits_array();

    printf("Enter a number: ");
    ch = getchar();
    while (ch != '\n' && how_many < MAX_DIGITS)
    {
        if (isdigit(ch))
        {
            digit = ch - '0'; // converting char to digit
            process_digit(digit, how_many);
            how_many++;
        }

        ch = getchar();
    }

    print_digits_array();

    return 0;
}

//stores blanks into all digits chars
void clear_digits_array(void)
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < MAX_DIGITS * 4; j++)
            digits[i][j] = ' ';
    }
}

// will position the seven segment representation of digit into the digits array according to the position.
void process_digit(int digit, int position)
{
    int i = 0;
    for (int row = 0; row < 3; row++)
    {
        for (int column = position * 4; column < position * 4 + 3 && i < 9; column++)
        {
            if (segments[digit][i] == 1)
            {
                digits[row][column] = '_';
            }
            else if (segments[digit][i] == 2)
            {
                digits[row][column] = '|';
            }
            i++;
        }
    }
}
void print_digits_array(void)
{

    for (int row = 0; row < 3; row++)
    {
        for (int column = 0; column < MAX_DIGITS * 4; column++)
        {
            printf("%c", digits[row][column]);
        }
        printf("\n");
    }
}