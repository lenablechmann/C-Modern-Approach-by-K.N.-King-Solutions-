// need to write statements that fit the declarations mentioned in the book:
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declarations given by the book:
    struct point
    {
        int x, y;
    };

    struct rectangle
    {
        struct point upper_left, lower_right;
    };

    struct rectangle *p;

    // What we gotta write: p will point to a rectangle whose upper corner is 10;25, lower 20;15

    p = malloc(sizeof(struct rectangle));
    if (p != NULL)
    {
        p->upper_left.x = 10;
        p->upper_left.y = 25;
        p->lower_right.x = 20;
        p->lower_right.y = 15;
        printf("Upper corner is %d;%d, lower is %d;%d\n", p->upper_left.x, p->upper_left.y, p->lower_right.x, p->lower_right.y);
        free(p);
    }
    return 0;
}