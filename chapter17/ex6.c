// Modify delete_from_list function so that it uses one pointer instead of two.

#include <stdio.h>
#include <stdlib.h> //memory related stuff

struct node
{
    int value;
    struct node *next; // Pointer to the next node
};

void *delete_from_list(struct node **list, int n);
void add_to_list(struct node **list, int n);
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
        add_to_list(&start, user_input);
        scanf(" %d", &user_input);
    }
    add_to_list(&start, 0);

    printf("The linked list we have now is:");
    show_list(start);
    printf("Enter a value you want to delete from the list: ");
    scanf("%d", &user_key);
    delete_from_list(&start, user_key);
    printf("The linked list we have now is:");
    show_list(start);

    return 0;
}

void *delete_from_list(struct node **list, int n)
{
    // The one and only node is going to point to the start pointer of the list.
    struct node *ultimate_node = *list;
    while (ultimate_node != NULL)
    {
        if (ultimate_node->value == n)
        {
            *list = ultimate_node->next;
            free(ultimate_node);
            break;
        }
        //Advancing the nodes if the current pointer isn't pointing to the search key.
        // We need &ultimate_node since list is a double pointer so we gotta go all meta
        list = &ultimate_node->next;
        ultimate_node = ultimate_node->next;
    }
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

void add_to_list(struct node **list, int n)
{
    struct node *fresh;
    fresh = malloc(sizeof(struct node));
    if (fresh == NULL)
        exit(EXIT_FAILURE);

    fresh->value = n;
    fresh->next = *list;
    *list = fresh;
}