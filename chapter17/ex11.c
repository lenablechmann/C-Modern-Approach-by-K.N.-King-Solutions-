// Adding a function count_occurences of n, which will receive a pointer to a linked list and an n

#include <stdio.h>
#include <stdlib.h> //memory related stuff

struct node
{
    int value;
    struct node *next; // Pointer to the next node
};

void add_to_list(struct node **list, int n);
void show_list(struct node *list);
int count_occurences(struct node *list, int n);

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
    printf("The key %d appears %d times in the list.\n", key, count_occurences(start, key));

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

int count_occurences(struct node *list, int n)
{
    int counter = 0;
    for(;list != NULL; list = list ->next)
    {
        if (list -> value == n)
        counter++;
    }
    return counter;
}