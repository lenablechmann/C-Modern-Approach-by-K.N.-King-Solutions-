/* shape is a nested structure/union mix that we need to copy from exercise 13 and use it as a base.
    The task is to write 3 functions that will work with the "shape" */

#include <stdio.h>
#include <stdbool.h>

#define PI 3.1415926535

struct shape
{
    int shape_kind;
    struct point
    {
        int x, y;
    } center;
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

// a) calculate the area of the shape
int area_of_shape(struct shape s);

int main(void)
{
    int choice;
    int width, height;
    int move_x, move_y;
    double scale_factor;

    printf("Whats the center point of your shape is it gonna be (x y)? ");
    scanf("%d %d", &s.center.x, &s.center.y);

    printf("Which shape do you want to work with (0 for circle, 1 for rectangle): ");
    scanf(" %d", &s.shape_kind);
    if (s.shape_kind < 0 || s.shape_kind > 1)
    {
        printf("Choose the shape via 0 or 1.\n");
        return 1;
    }

    else if (s.shape_kind == 1)
    {
        printf("Whats the width/height of the rectangle are gonna be? ");
        scanf("%d %d", &s.u.rectangle.width, &s.u.rectangle.height);
        if (s.u.rectangle.width < 0 || s.u.rectangle.height < 0)
        {
            printf("These values must be positive, retry.\n");
            return 1;
        }
    }
    else if (s.shape_kind == 0)
    {
        printf("Whats the radius of the circle is it gonna be? ");
        scanf("%d", &s.u.circle.radius);
        if (s.u.circle.radius < 0)
        {
            printf("These values must be positive, retry.\n");
            return 1;
        }
    }

    printf("The area of your shape is %d.\n", area_of_shape(s));

    return 0;
}

int area_of_shape(struct shape s)
{
    // 0 is a circle, 1 is a rectangle
    if (s.shape_kind == 0)
        return ((int)(s.u.circle.radius * s.u.circle.radius * PI));
    else
        return (s.u.rectangle.height * s.u.rectangle.width);
}
