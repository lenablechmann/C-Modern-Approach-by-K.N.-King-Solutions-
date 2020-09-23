/* 
    Following along the book's instruction on how to create a linked list
    So as to understand it better.
*/

#include <stdio.h>
#include <stdlib.h> //memory related stuff

int main(void)
{
    // declaring a node incl a pointer to the same struct
    struct node
    {
        int value;
        struct node *next; // Pointer to the next node
    };

    // keeping track of where it begins:
    struct node *nr1 = NULL;

    // adding on, *nr2 is just a pointer, 
    // we need to allocate a struct with memory its gonna point to.
    struct node *nr2;
    nr2 = malloc(sizeof(struct node));

    // Storing new data in this nr2 node:
    // () needed so that the dot doesn't take priority
    (*nr2).value = 10;

    // could also write this instead: nr2->value = 10;
    // same for scanf: scanf("%d", &nr2->value)

    return 0;
}

