// Modifying proj 14 chap 8
// Store words in a two dimensional array char, a row is a word
// max chars per word is 20, max words 30. store a null at the end of each string.

// Program for reversing sentences (keeps the words intact though)
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define LENGTH 20
#define WORDS 5

int main(void)
{
    //The brand new array.
    char sentence_2d[WORDS][LENGTH + 1] = {0}, *ptr; //extra length for null
    char ch, terminator = '.';
    int counter = 0;

    printf("Enter a sentence (30 words max): ");

    //getting user input
    while ((ch = getchar()) != '\n' && counter < WORDS)
    {
        for (int column = 0; column < LENGTH && ch != '\n'; column++)
        {
            if (ch != '!' && ch != '?' && ch != '.' && ch != ' ' )
                sentence_2d[counter][column] = ch;
            // Advancing to the next row whenever there is a space
            else if (ch == ' ')
                break;
            // Storing ending char separately
            else if (ch == '!' || ch == '?' || ch == '.')
            {
                terminator = ch;
                break;
            }
            ch = getchar();
        }
        counter++;
    }

    printf("Now your sentence reversed a bit:");

    ptr = &sentence_2d[counter][0];
    while (ptr >= &sentence_2d[0][0])
    {
        if (ptr == &sentence_2d[0][0])
            printf("%s%c\n", ptr, terminator);
        else
            printf("%s ", ptr);
        ptr -= LENGTH + 1;
    }

    return 0;
}
