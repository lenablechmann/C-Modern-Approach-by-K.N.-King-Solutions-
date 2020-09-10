// A program that simulates a stack.
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

#define STACK_SIZE 100

char contents[STACK_SIZE]; // supposedly now should accept chars.
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char ch); // changed int i to char ch
char pop(void);

// Asks user for a line of braces and pushes the left braces, then pops the right ones.
int main(void)
{
    char ch;

    printf("Enter a series of parantheses: ");
    ch = getchar();
    while (ch != '\n')
    {
        if (ch == '{' || ch == '[' || ch == '(' || ch == '}' || ch == ']' || ch == ')')
            switch (ch)
            {
            case '{':
                push(ch);
                break;
            case '}':
            {
                if (pop() != '{')
                {
                    printf("The braces aren't nested properly.\n");
                    return 1;
                }
                else
                    break;
            }

            case '(':
                push(ch);
                break;
            case ')':
            {
                if (pop() != '(')
                {
                    printf("The braces aren't nested properly.\n");
                    return 1;
                }
                else
                    break;
            }
            case '[':
                push(ch);
                break;
            case ']':
            {
                if (pop() != '[')
                {
                    printf("The braces aren't nested properly.\n");
                    return 1;
                }
                else
                    break;
            }
            default:
                break;
            }
        ch = getchar();
    }
    if (is_empty())
        printf("The braces are nested properly, congrats.\n");
    else
        printf("The braces aren't nested properly.\n");

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
void push(char ch)
{
    if (is_full())
    {
        printf("The stack is overflowing\n");
        EXIT_FAILURE;
    }
    else
        contents[top++] = ch;
}
// when any right brace comes up, pop gotta pop the left braces and check if its a corresponding brace
char pop(void) // changed to char
{
    if (is_empty())
    {
        printf("The stack is underflowing\n");
        EXIT_FAILURE;
    }
    else
        return contents[--top];
}