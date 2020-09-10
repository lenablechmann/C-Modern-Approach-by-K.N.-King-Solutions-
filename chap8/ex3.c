// Write a declaration of an array called "weekend"
// which will contain 7 bools, first and last should be true, the rest false.
// kind of exercise 4 tbh.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(void)
{
    bool weekend[7] = {[0] = 1, [6] = 1};

    printf("Here are the values of the array: \n");
    for (int i = 0; i < 7; i++)
    printf("%d",weekend[i]);

    printf("\n");
    return 0;
}