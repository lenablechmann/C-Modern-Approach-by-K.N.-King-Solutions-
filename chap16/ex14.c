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
} s, new_s;

// a) calculate the area of the shape
int area_of_shape(struct shape s);
// b) move the shape via the center
struct shape move_shape(int x, int y);
// c) scale shape by a factor
struct shape scale_shape(struct shape s, double scale_factor);

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

    // b)
    printf("How far do you want to move the shape (x y)? ");
    scanf("%d %d", &move_x, &move_y);

    move_shape(move_x, move_y);
    printf("The new center is at %d:%d\n", s.center.x, s.center.y);
    // c)
    printf("By how much do you want to scale the shape (a double)? ");
    scanf("%lf", &scale_factor);
    scale_shape(s, scale_factor);
    if (s.shape_kind == 0)
    printf("The new circle radius is %d.\n", new_s.u.circle.radius);
    else
    printf("The new rectangle width is %d, height is %d.\n", new_s.u.rectangle.height, new_s.u.rectangle.width);
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

struct shape move_shape(int x, int y)
{
    s.center.x += x;
    s.center.y += y;
    
    return s;
}

//c)
struct shape scale_shape(struct shape s, double scale_factor)
{
    if (s.shape_kind == 0)
        new_s.u.circle.radius = (int)(s.u.circle.radius * scale_factor);
    else
    {
        new_s.u.rectangle.height = (int)(s.u.rectangle.height * scale_factor);
        new_s.u.rectangle.width = (int)(s.u.rectangle.height * scale_factor);
    }

    return new_s;
}