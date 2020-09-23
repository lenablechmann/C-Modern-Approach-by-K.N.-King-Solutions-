// Adding a new function find_last which will return a pointer to the last node that contains n
// going to use a trailing pointer that will keep track of the most recent node with n

#include <stdio.h>
#include <stdlib.h> //memory related stuff

struct node
{
    int value;
    struct node *next; // Pointer to the next node
};

void add_to_list(struct node **list, int n);
void show_list(struct node *list);
struct node *find_last(struct node *list, int n);

int main(void)
{
    struct node *start = NULL;
    int user_input, key;

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
    printf("Give me an int: ");
    scanf(" %d", &key);

    struct node *n_address;
    n_address = find_last(start, key);
    if (n_address == NULL)
    printf("Your int wasn't in the list\n");
    else
    printf("Your int %d was found at the adress %p.\n", key, n_address);
    return 0;
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

struct node *find_last(struct node *list, int n)
{
    struct node *keeper_pointer;
    keeper_pointer = NULL; // if there is no n in the list, this will stay null.

    for (; list != NULL; list = list->next)
    {
        if (list->value == n)
            keeper_pointer = list; // staying at the most recent n occurence
    }
    return keeper_pointer;
}