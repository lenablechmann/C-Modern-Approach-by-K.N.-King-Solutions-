/* 
    Following along the book's instruction on how to create a linked list
    So as to understand it better.
*/

#include <stdio.h>
#include <stdlib.h> //memory related stuff

struct node
{
    int value;
    struct node *next; // Pointer to the next node
};

// A function that inserts linked list nodes:
struct node *add_to_linked_list(struct node *list, int n);
// A function that reads user input into a linked list:
struct node *read_numbers_into_ll(void);
// A function that searches for the first node that has n:
struct node *search_list(struct node *list, int n);
// deletion
struct node *delete_from_list(struct node *list, int n);

int main(void)
{

    struct node *nr1 = NULL;

    struct node *nr2;
    nr2 = malloc(sizeof(struct node));
    (*nr2).value = 10;

    //redirecting this second node to the first
    nr2->next = nr1;
    // now the first node points at the node nr2 was pointing at
    nr1 = nr2;

    // repointing nr2 to a new node
    nr2 = malloc(sizeof(struct node));
    nr2->value = 15;

    //now nr2s pointer points at what nr1s pointed node points at
    nr2->next = nr1;

    nr1 = nr2; // nor nr1 and nr2 point at the node with 15, which itself points at 10

    return 0;
}

// returns a pointer to the newly created node at the beginning of the list
// after calling this function its return value needs to be stored into first
struct node *add_to_linked_list(struct node *list, int n)
{
    struct node *new_node;
    new node = malloc(sizeof(struct node));

    if (new_node == NULL)
    {
        printf("ERROR: malloc failed in add to list fu.\n");
        exit(EXIT_FAILURE);
    }

    new_node->value = n;
    new_node->next = list;
    return new_node;
}

struct node *read_numbers_into_ll(void)
{
    struct node *first = NULL;
    int n;

    printf("Enter a series of integers (0 to terminate): ");

    while (1)
    {
        scanf(" %d", &n);
        if (n == 0)
            return first;
        first = add_to_linked_list(first, n);
    }
}

struct node *search_list(struct node *list, int n)
{
    // wether we find n or nah, we get the return a pointer to the list
    // since if it gets to the end, it'll be a NULL pointer
    for (; list != NULL && list->value != n; list = list->next)
        ;
    return list;
}

struct node *delete_from_list(struct node *list, int n)
{
    struct node *current_node, *previous_node;

    // makes sure we also find the node BEFORE the one that is to be deleted
    // so we redirect the previous node and delete + free the current that has the value we look for
    for (current_node = list, previous_node = NULL;
         current_node != NULL && current_node->value != n;
         previous_node = current_node, current_node->next)
        ;

    // if no node has the value we want
    if (current_node == NULL)
        return list;
    // if n is in the first node the previous node will be NULL
    if (previous_node == NULL)
        return list->next;
    // in other cases we can reappoint the previous node to the node right afte the one to be deleted:
    else
        previous_node->next = current_node->next;
    free(current_node);
    return list;
}
