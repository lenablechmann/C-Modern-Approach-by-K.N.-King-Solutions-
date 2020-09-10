//    A program that reads a user message, then checks if it's a palindrome
// Meaning the message is the same from left to right.
// Should ignore all non-letter chars. (isalpha() and tolower())

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define SIZE 20

int main(void)
{
    char *ch, input, *end, *start, message[SIZE] = {' '};
    end = &message[SIZE - 1]; // pointer arithmetic, substracting pointers gives distance.
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
            break;
    }
    // the message reversed should be the same as forward.
    for (ch = end; ch >= message; ch--)
    {
        if (*ch != '\0')
        {
            if(*ch == *start)
                start++;
            else
            {
                printf("Not a palindrome.\n");
                return 0;
            }
        }
    }
    printf("A palindrome.\n");
    return 0;
}
