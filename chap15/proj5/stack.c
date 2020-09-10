#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h> //  for is digit
#include "stack.h"

#define STACK_SIZE 100

float contents[STACK_SIZE] = {0}; // supposedly now should accept chars.
int top = 0;

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