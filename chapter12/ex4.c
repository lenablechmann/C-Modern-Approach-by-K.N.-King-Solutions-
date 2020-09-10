// A program that simulates a stack.
// rewrite the make_empty is_empty make_full functions
// to use the pointer top_ptr  instead of int top

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

#define STACK_SIZE 100

char contents[STACK_SIZE]; // supposedly now should accept chars.
// int top = 0;
char *top_ptr = &contents[0]; // replacing the old top int through this pointer.

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
    top_ptr = 0;
}
bool is_empty(void)
{
    return top_ptr == &contents[0];
    //    return top_ptr == 0;
}
bool is_full(void)
{
    return top_ptr - contents == STACK_SIZE;
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
    {
        *top_ptr++ = ch; // as per the book. below is the working non book version.
        /*    top_ptr++;
        *top_ptr = ch;
        */
    }
}
// when any right brace comes up, pop gotta pop the left braces and check if its a corresponding brace
char pop(void) // changed to char
{
    char ch;

    if (is_empty())
    {
        printf("The stack is underflowing\n");
        EXIT_FAILURE;
    }
    else
    {
        return *--top_ptr;
        /*    ch = *top_ptr;
        top_ptr--;

        return ch;
        */
    }
}