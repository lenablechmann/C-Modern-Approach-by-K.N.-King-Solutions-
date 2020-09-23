/*  
    Modifying the print_part function from the book
    so that its parameter is a pointer to a part struct
    and I gotta use the -> operator.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define NAME_LEN 25

struct part
{
    int number;
    char name[NAME_LEN + 1];
    int on_hand;
};

void print_part(struct part *p);

int main(void)
{
    struct part example = {10, "Random name", 3};
    struct part *pointer;
    pointer = malloc(sizeof(struct part));
    *pointer = example;

    print_part(pointer);
    printf("\n");
}

void print_part(struct part *p)
{
    printf("Part number: %d\n", p->number);
    printf("Part name: %s\n", p -> name);
    printf("Quantity at hand: %d\n", p -> on_hand);
}