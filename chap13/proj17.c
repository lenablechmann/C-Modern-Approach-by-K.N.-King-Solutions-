// Modifying proj2 chap 12. Adding a function and pointers.
// A program that reads a user message, then checks if it's a palindrome
// Meaning the message is the same from left to right.
// Should ignore all non-letter chars. (isalpha() and tolower())

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

#define SIZE 20

bool is_palindrome(const char *start, const char *end);

int main(void)
{
    char *ch, input, *end, *start, message[SIZE] = {' '};
    end = &message[SIZE - 1];
    ch = start = message;

    printf("Enter your message (%d chars max): ", SIZE);
    while (ch < end)
    {
        input = getchar();

        // Should ignore all non-letter chars.
        if (isalpha(input))
        {
            *ch = tolower(input);
            ch++;
        }

        else if (input == '\n')
        {
            *ch = '\0'; //making it a string
            break;
        }
    }
    size_t length = strlen(message) - 1; // -1 as it'll point to nullchar
    end = &message[length];
    start = message;

    if (is_palindrome(start, end))
        printf("A palindrome.\n");
    else
        printf("Not a palindrome.\n");

    return 0;
}

bool is_palindrome(const char *start, const char *end)
{
    // the message reversed should be the same as forward.
    // So the end and start pointers will move towards each other
    while (*start && *start != '\0' && *end && end >= start)
    {
        if (*start == *end)
        {
            start++;
            end--;
        }
        else
            return false;
    }
    return true;
}