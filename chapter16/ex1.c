// A simple program for experimenting with structs
// That have seemingly conflicting naming with their members.

#include <stdio.h>
#define LENGTH 25

int main(void)
{
    struct 
    {
        int number;
        char name[LENGTH];
        int on_hand;
    } part1 = {528, "Disk Drive", 10},
        part2 = {915, "SSD", 4};

    printf("This is member1 %d,\n member2 %s,\n member3 %d\n", part1.number, part1.name, part1.on_hand);

    struct 
    {
        int x, y;
    }x ={10, 15};
    printf("This is member1 %d,\n member2 %d,\n", x.x, x.y);

    struct 
    {
        int x, y;
    }y;

    return 0;
    
}