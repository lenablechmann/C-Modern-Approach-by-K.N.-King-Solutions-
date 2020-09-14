
/*
    Modify delete_from_list function so that it uses one pointer instead of two.
    Thought process: I have the first node of the list, and i can use a pointer to traverse the list.
    so theoretically I could store the position of the item I found and reloop to find the loop before it?
    then link it to the node after it. but... it would still require two pointers.
*/
#include <stdio.h>
#include <stdlib.h> //memory related stuff

struct node
{
    int value;
    struct node *next; // Pointer to the next node
};

struct node *delete_from_list(struct node *list, int n);
struct node *add_to_list(struct node *list, int n);
void show_list(struct node *list);

int main(void)
{
    //Filling a linked list.
    struct node *start = NULL;
    int user_input, user_key;

    printf("Enter a list of integers, 0 to terminate: ");
    scanf(" %d", &user_input);
    while (user_input != 0)
    {
        start = add_to_list(start, user_input);
        scanf(" %d", &user_input);
    }
    printf("Enter a value you want to delete from the list: ");
    scanf("%d", &user_key);
    start = delete_from_list(start, user_key);

    printf("The linked list we have now is:");
    show_list(start);

    return 0;
}

struct node *delete_from_list(struct node *list, int n)
{
    struct node *current_node, *previous_node;
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

void show_list(struct node *list)
{
    if (list == NULL)
        printf("NULL. short list.\n");
    else
    {
        for (; list != NULL; list = list->next)
            printf(" %d", list->value);
    }
    printf("\n");
}

struct node *add_to_list(struct node *list, int n)
{
    struct node *fresh;
    fresh = malloc(sizeof(struct node));
    if (fresh == NULL)
        exit(EXIT_FAILURE);

    fresh->value = n;
    fresh->next = list;
    return fresh;
}