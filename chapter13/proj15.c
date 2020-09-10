// Modifying proj 6 chap 10, adding a function and a pointer.
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
//New function
float evaluate_RPN_expression(const char *expression);

int main(void)
{
    char expression[STACK_SIZE + 1] ={0};
    char *ptr = expression;

    printf("Enter an RPN expression: ");
    fgets(expression, STACK_SIZE, stdin);
    printf("The value is %.2f.\n", evaluate_RPN_expression(ptr));

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

// Returns the value of the rpn expression
float evaluate_RPN_expression(const char *expression)
{
    float number, operand1, operand2;
    float value = 0;

    while (*expression != '\n' && *expression != 0)
    {
        if (isdigit(*expression))
        {
            number = *expression - '0'; //converts char to number.
            push(number);
        }
        if (*expression == '+' || *expression == '-' || *expression == '/' || *expression == '*' || *expression == '=')
        {
            operand1 = pop();
            operand2 = pop();
            switch (*expression)
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
                return contents[top];
                break;
            }
            default:
                break;
            }
        }
        expression++;
    }

}