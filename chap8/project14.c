// Program for reversing sentences (keeps the words intact though) #include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // for toupper

#define LENGTH 150

int main(void)
{
    char ch, terminator, sentence[LENGTH] = {0};

    printf("Enter a sentence (140 chars): ");
    ch = getchar();
    for (int i = 0; ch != '\n' && i < LENGTH; i++)
    {
        // Storing the terminating punctuation mark in a separate char for the flow of the reversed sentence.
        if (ch == '!' || ch == '.' || ch == '?')
        {
            terminator = ch;
            break;
        }
        sentence[i] = ch;
        ch = getchar();
    }

    printf("The sentence reversed:");
    for (int i = LENGTH; i >= 0; i--) // Looping backwards to reverse the sentence
    {
        // Finding the beginning of the last word via spaces.
        if (i != 0 && sentence[i] != '\0' && sentence[i] == ' ')
        {
            // separate loop goes forward through the "last" word
            for (int j = i; j < LENGTH; j++)
            {
                putchar(sentence[j]);
                if (sentence[j + 1] == ' ' || sentence[j + 1] == '\0')
                    break;
            }
        }
        // Edge case the very first letter as it doesn't have spaces before it.
        if (i == 0)
        {
            putchar(' '); // needs an extra space
            for (int j = i; j < LENGTH; j++)
            {
                putchar(sentence[j]);
                if (sentence[j + 1] == ' ' || sentence[j + 1] == '\0')
                    break;
            }
        }
    }

    putchar(terminator);
    printf("\n");

    return 0;
}
