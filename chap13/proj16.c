//Modifying proj 1 from chapter 12
// adding a function that accepts two pointers to a string and does all the work
// A program that reads a user message, then prints out the reversal of it.

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define SIZE 20

void reverse(char *start, char *finish);
int main(void)
{
    char *start, *finish, message[SIZE + 1] = {0};

    printf("Enter your message (%d chars max): ", SIZE);
    fgets(message, SIZE, stdin);

    // Setting up the reverse function now that we got the message.
    size_t length = (strlen(message) - 2); // -2 because strlen points at null, and before that is \n
        finish = &message[length]; // positioning pointers at the start and finish
    start = message;

    reverse(start, finish);

    printf("Here is your message reversed: ");
    puts(message);

    return 0;
}

void reverse(char *start, char *finish)
{
    char tmp;
    while (*start && *start != '\n' && *finish && finish >= start)
    {
        // Doing the switcharoo then advancing pointers towards each other
        tmp = *start;
        *start = *finish;
        *finish = tmp;
        finish--;
        start++;
    }
}