// Point structure stores x and y coordinates
// rectangle struct stores coordinates of upper left and lower right corners.
// writing various functions around the rectangle structure, which will be passed as an argument.
// A is upper left, B is upper right, C is lower right, D is lower left of the rectangle.

#include <stdio.h>
#include <stdbool.h>

struct point
{
    int x, y;
};
struct point center, user_point;

struct rectangle
{
    struct point upper_left, lower_right;
};
struct rectangle the_rectangle;

int area_of_rectangle(struct rectangle the_rectangle);
struct point center_of_rectangle(struct rectangle the_rectangle);
bool point_within_rectangle(struct rectangle the_rectangle, struct point user_point);
struct rectangle reposition_rectangle(struct rectangle the_rectangle, int x, int y);

int main(void)
{
    int width, height;
    int x, y;

    printf("Give me the upper left corner of a rectangle in a format x/y, both ints: ");
    scanf("%d/%d", &the_rectangle.upper_left.x, &the_rectangle.upper_left.y);

    printf("Whats the width/height of the rectangle are gonna be? ");
    scanf("%d/%d", &width, &height);
    if (width > 0 && height > 0) 
    {
        the_rectangle.lower_right.x = the_rectangle.upper_left.x + width;
        the_rectangle.lower_right.y = the_rectangle.upper_left.y - height;
    }
    else 
    {
        printf("These values must be positive, retry.\n");
        return 1;
    }

    printf("The area of your rectangle is %d.\n", area_of_rectangle(the_rectangle));

    center_of_rectangle(the_rectangle);
    printf("This is the center of your rectangle is %d:%d.\n", center.x, center.y);

    printf("Give me a point in a format x/y, both ints: ");
    scanf("%d/%d", &user_point.x, &user_point.y);

    if (point_within_rectangle(the_rectangle, user_point))
    printf("Your point is within the rectangle.\n");
    else
    printf("Your point is not within the rectangle.\n");

    printf("Enter an x and and y (by how much you want to reposition the rectangle): ");
    scanf("%d %d", &x, &y);
    reposition_rectangle(the_rectangle, x, y);

    return 0;
}

int area_of_rectangle(struct rectangle the_rectangle)
{
    int width, height;

    width = the_rectangle.lower_right.x - the_rectangle.upper_left.x;
    height = the_rectangle.upper_left.y - the_rectangle.lower_right.y;

    return (width * height);
}

struct point center_of_rectangle(struct rectangle the_rectangle)
{
    int width, height;

    width = (the_rectangle.lower_right.x - the_rectangle.upper_left.x);
    height = (the_rectangle.upper_left.y - the_rectangle.lower_right.y);
    center.x = the_rectangle.upper_left.x + (width / 2);
    center.y = the_rectangle.lower_right.y + (height / 2);

    return center;
}

bool point_within_rectangle(struct rectangle the_rectangle, struct point user_point)
{
    if (user_point.x < the_rectangle.upper_left.x || user_point.x > the_rectangle.lower_right.x ||
        user_point.y > the_rectangle.upper_left.y || user_point.y < the_rectangle.lower_right.y)
        return false;
    else
    return true; 
}

struct rectangle reposition_rectangle(struct rectangle the_rectangle, int x, int y)
{
    the_rectangle.lower_right.x += x;
    the_rectangle.lower_right.y += y;
    the_rectangle.upper_left.x += x;
    the_rectangle.upper_left.y += y;

    return the_rectangle;
}