// A program from chapter 8, that takes a user sentence, and reverses it while keeping the words intact.
// now rewriting it using pointer arithmetic.

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define SIZE 140

int main(void)
{
    char *ch, input, *end, *start, terminator, message[SIZE] = {' '};
    end = &message[SIZE - 1]; // pointer arithmetic, substracting pointers gives distance.
    ch = start = message;

    printf("Enter your message (%d chars max): ", SIZE);
    while (ch <= end)
    {
        input = getchar();
        // Storing the terminating punctuation mark in a separate char for the flow of the reversed sentence.
        if (input == '!' || input == '.' || input == '?')
        {
            terminator = input;
            break;
        }
        else if (input == '\n')
            break;
        else
        {
            *ch = tolower(input);
            ch++;
        }
    }

    printf("The sentence reversed:");
    for (ch = end; ch >= message; ch--)
    {
        // Finding the beginning of the last word via spaces.
        if (ch > message && *ch != '\0' && *ch == ' ')
        {
            // separate loop goes forward through the "last" word
            for (char *backwards = ch; backwards <= end; backwards++)
            {
                putchar(*backwards);
                if (*(backwards + 1) == '\0' || *(backwards + 1) == ' ')
                    break;
            }
        }
        // Edge case the very first letter as it doesn't have spaces before it.
        if (ch == &message[0])
        {
            putchar(' '); // needs an extra space
            for (char *backwards = ch; backwards <= end; backwards++)
            {
                putchar(*backwards);
                if (*(backwards + 1) == '\0' || *(backwards + 1) == ' ')
                    break;
            }
        }
    }
    putchar(terminator);
    putchar('\n');
    return 0;
}
