// A reverse polish notation calculator
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h> //  for is digit

#define STACK_SIZE 100

float contents[STACK_SIZE]; // supposedly now should accept chars.
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(float number); // changed int i to char ch
int pop(void);

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
                printf("The value is %.2f.\n", contents[top]);
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

void make_empty(void)
{
    top = 0;
}
bool is_empty(void)
{
    return top == 0;
}
bool is_full(void)
{
    return top == STACK_SIZE;
}
// will push every left brace
void push(float number)
{
    if (is_full())
    {
        printf("Expression is too complex\n");
        EXIT_FAILURE;
    }
    else
        contents[top++] = number;
}
// when any right brace comes up, pop gotta pop the left braces and check if its a corresponding brace
int pop(void) // changed to char
{
    if (is_empty())
    {
        printf("No more operands.\n");
        EXIT_FAILURE;
    }
    else
        return contents[--top];
}