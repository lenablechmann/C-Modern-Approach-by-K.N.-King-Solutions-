// Declaring the color structure, that will be represented via RGB
// writing various functions around dat structure.

#include <stdio.h>
#include <stdbool.h>

struct color
{
    int red, green, blue;
};
struct color color1, color2, c;

struct color make_color(int red, int green, int blue);
int get_red(struct color c);
bool equal_color(struct color color1, struct color color2);
struct color brighter(struct color c);
struct color darker(struct color c);

int main(void)
{

    int red1, green1, blue1, red2, green2, blue2;

    printf("Give me 6 integers and we will turn em into RGB values: ");
    scanf("%d %d %d %d %d %d", &red1, &green1, &blue1, &red2, &green2, &blue2);

    color1 = make_color(red1, green1, blue1);
    color2 = make_color(red2, green2, blue2);

    printf("This is the first red value: %d,\nAnd this is the second red: %d\n", get_red(color1), get_red(color2));

    (equal_color(color1, color2) ? printf("Same colors\n") : printf("Not the same colors\n"));

    brighter(color1);
    brighter(color2);
    printf("The first color but brighter: %d %d %d\n the second: %d %d %d\n", color1.red, color1.green, color1.blue, color2.red, color2.green, color2.blue);

    return 0;
}

// Returns a struct with the specified color. 
//If the number is out of range it defaults to 0 for negative or 255 for positive.
struct color make_color(int red, int green, int blue)
{
    // Using shorthand to avoid too long of a statement.
    (red < 0) ? (c.red = 0) : (c.red = 255); 
    if (red >= 0 && red <= 255)
    c.red = red;

    (green < 0) ? (c.green = 0) : (c.green = 255); 
    if (green >= 0 && green <= 255)
    c.green = green;

    (blue < 0) ? (c.blue = 0) : (c.blue = 255); 
    if (blue >= 0 && blue <= 255)
    c.blue = blue;
    return c;
}

int get_red(struct color c)
{
    return c.red;
}

bool equal_color(struct color color1, struct color color2)
{
    if(color1.red == color2.red && color1.green == color2.green && color1.blue == color2.blue)
    return true;
    else
    return false;
}

struct color brighter(struct color c)
{
    struct color brighter;

    if (c.red == 0 && c.green == 0 && c.blue == 0)
    {
    brighter.red = brighter.green = brighter.blue = 3;
    return brighter;
    }

    (c.blue < 3 && c.blue > 0) ? (c.blue = 3) : (0); 
    (c.green < 3 && c.green > 0) ? (c.green = 3) : (0);
    (c.red < 3 && c.red > 0) ? (c.red = 3) : (0); 

    // 179 / 0.7 = 255 so its the other edge case
    (c.blue > 178) ? (c.blue = 179) : (0); 
    (c.red > 178) ? (c.red = 179) : (0); 
    (c.green > 178) ? (c.green = 179) : (0); 

    brighter.red = c.red / 0.7;
    brighter.green = c.green / 0.7;
    brighter.blue = c.blue / 0.7;
    
    return brighter;
}

struct color darker(struct color c)
{
    struct color darker;

    if (c.red == 0 && c.green == 0 && c.blue == 0)
    {
    darker.red = darker.green = darker.blue = 3;
    return darker;
    }

    (c.blue < 3 && c.blue > 0) ? (c.blue = 3) : (0); 
    (c.green < 3 && c.green > 0) ? (c.green = 3) : (0);
    (c.red < 3 && c.red > 0) ? (c.red = 3) : (0); 

    darker.red = c.red * 0.7;
    darker.green = c.green * 0.7;
    darker.blue = c.blue * 0.7;
    
    return darker;

}