/* shape is a nested structure/union mix that we need to copy from exercise 13 and use it as a base.
    The task is to write 3 functions that will work with the "shape" */

#include <stdio.h>
#include <stdbool.h>

struct point
{
    int x, y;
};
struct point center;

struct rectangle
{
    struct point upper_left, lower_right;
};
struct rectangle the_rectangle;

struct shape
{
    int shape_kind;
    struct point center;
    union
    {
        struct
        {
            int height, width;
        } rectangle;
        struct
        {
            int radius;
        } circle;
    } u;
} s;

int area_of_rectangle(struct rectangle the_rectangle);

int main(void)
{
    int choice;
    int width, height;
    int move_x, move_y;
    double scale_factor;

    printf("Whats the center point of your shape is it gonna be (x y)? ");
    scanf("%d/%d", &s.center.x, &s.center.y);

    printf("Which shape do you want to work with (0 for circle, 1 for rectangle): ");
    scanf(" %d", &s.shape_kind);
    if (s.shape_kind != 0 || s.shape_kind != 1)
    {
        printf("Choose the shape via 0 or 1.\n");
        return 1;
    }

    else if (s.shape_kind == 1)
    {
        printf("Whats the width/height of the rectangle are gonna be? ");
        scanf("%d/%d", &s.u.rectangle.width, &s.u.rectangle.height);
        if (s.u.rectangle.width < 0 || s.u.rectangle.height < 0)
        {
            printf("These values must be positive, retry.\n");
            return 1;
        }
    }

    printf("The area of your rectangle is %d.\n", area_of_rectangle(the_rectangle));

    return 0;
}

int area_of_rectangle(struct rectangle the_rectangle)
{
    int width, height;

    width = the_rectangle.lower_right.x - the_rectangle.upper_left.x;
    height = the_rectangle.upper_left.y - the_rectangle.lower_right.y;

    return (width * height);
}
