
// Translates user input into l33t sp34k or B1FF speak as per the book.

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // Needed for toupper()

int main(void)
{
    char sentence[140];
    char user_input;
    printf("Enter a sentence (140 chars max): ");

    for (int i = 0; ((user_input = getchar()) != '\n') && i < 140; i++)
    {
        // toupper so that it isn't case sensitive.
        sentence[i] = toupper(user_input);
        switch (sentence[i])
        {
        case 'A':
            printf("4");
            break;
        case 'B':
            printf("8");
            break;
        case 'E':
            printf("3");
            break;
        case 'I':
            printf("1");
            break;
        case 'O':
            printf("0");
            break;
        case 'S':
            printf("5");
            break;
        default:
            printf("%c", sentence[i]);
            break;
        }
    }
    // As per the book true B1FF speak needs exclamation marks.
    printf("!!!!!!!!!!\n");
    return 0;
}