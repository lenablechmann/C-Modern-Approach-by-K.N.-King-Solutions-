// Modifying the ol project 10 from chapter 7
// to include a function that returns the number of vowels in a string.

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define LENGTH 120
// Counts the number of vowels in a sentence.
int compute_vowel_count(const char *sentence);

int main(void)
{
    char *ch, input_sentence[LENGTH] = {0};
    ch = input_sentence;
    printf("Enter a sentence: ");
    // A safer alternative to gets()
    fgets(input_sentence, LENGTH, stdin);

    printf("There are %d vowels in your sentence.\n", compute_vowel_count(input_sentence));
    return 0;
}

int compute_vowel_count(const char *sentence)
{
    int vowel_sum = 0;

    while (*sentence) // loop ends at null char.
    {
        switch (toupper(*sentence)) // Makes it case sensitive.
        {
        //Listing them like that makes them have the same statement.
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            vowel_sum++;
            break;
        default:
            break;
        }
        sentence++;
    }
    return vowel_sum;
}