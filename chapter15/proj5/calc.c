// A reverse polish notation calculator
// Modifying this proj6 from chapter 10 by splitting it into multiple files.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h> //  for is digit
#include "stack.h"

// Asks user for a line of braces and pushes the left braces, then pops the right ones.
int main(void)
{
    float number, operand1, operand2;
    float value = 0;
    char ch;

    printf("Enter an RPN expression: ");
    ch = getchar();
    while (ch != '\n')
    {
        if (isdigit(ch))
        {
            number = ch - '0'; //converts char to number.
            push(number);
        }
        if (ch == '+' || ch == '-' || ch == '/' || ch == '*' || ch == '=')
        {
            operand1 = pop();
            operand2 = pop();
            switch (ch)
            {
            case '+':
            {
                value = operand1 + operand2;
                push(value);
                break;
            }
            case '-':
            {
                value = operand2 - operand1;
                push(value);
                break;
            }
            case '*':
            {
                value = operand1 * operand2;
                push(value);
                break;
            }
            case '/':
            {
                value = operand2 / operand1;
                push(value);
                break;
            }
            case '=':
            {
                printf("The value is %.2f.\n", pop());
                break;
            }
            default:
                break;
            }
        }
        ch = getchar();
    }

    return 0;
}