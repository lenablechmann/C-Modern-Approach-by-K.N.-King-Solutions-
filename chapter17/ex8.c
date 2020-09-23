/* 
    Rewriting an old stack program, so that the stack is stored as a linked list instead of an array.
    contents and top variables should fuse into a single variable that points to the first node in the list
    so the top of the stack.
    All functions should be using pointers.
    Remove is_full function, instead push should be returning either true or false, depending on the null check. 
*/

// A reverse polish notation calculator

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h> 

struct node
{
    float number;
    struct node *next;
};

struct node *start = NULL;

bool is_empty(void);
bool push(float number); // needs to return a bool
float pop(void);

int main(void)
{
    float number, operand1, operand2;
    float value = 0;
    bool push_check;
    char ch;

    printf("Enter an RPN expression: ");
    ch = getchar();
    while (ch != '\n')
    {
        if (isdigit(ch))
        {
            number = ch - '0'; //converts char to number.
            push_check = push(number);
            if (push_check == false)
            {
                printf("No memory could be allocated.\n");
                return 1;
            }
        }
        if (ch == '+' || ch == '-' || ch == '/' || ch == '*' || ch == '=')
        {
            switch (ch)
            {
            case '+':
            {
                operand1 = pop();
                operand2 = pop();
                value = operand1 + operand2;
                push(value);
                break;
            }
            case '-':
            {
                operand1 = pop();
                operand2 = pop();

                value = operand2 - operand1;
                push(value);
                break;
            }
            case '*':
            {
                operand1 = pop();
                operand2 = pop();
                value = operand1 * operand2;
                push(value);
                break;
            }
            case '/':
            {
                operand1 = pop();
                operand2 = pop();
                value = operand2 / operand1;
                push(value);
                break;
            }
            case '=':
            {
                printf("The value is %.2f.\n", start->number);
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

bool is_empty(void)
{
    return start == NULL;
}

// pushes onto the list, returns boolean.
bool push(float number)
{
    struct node *new_node;
    new_node = malloc(sizeof(struct node));
    if (new_node != NULL)
    {
        new_node->number = number;
        new_node->next = start;
        start = new_node; // new top of the stack
        return true;
    }
    else if (new_node == NULL)
        return false;
}

// sends the first linked list number, and frees the node.
float pop(void)
{
    // we need a temporary node, so that we can change top to the item below
    struct node *temporary_node;
    float temporary_float;

    temporary_node = start;

    if (is_empty())
    {
        printf("No more operands.\n");
        EXIT_FAILURE;
    }
    else
    {
        temporary_float = temporary_node->number;
        start = start->next;
        free(temporary_node);
        return temporary_float;
    }
}