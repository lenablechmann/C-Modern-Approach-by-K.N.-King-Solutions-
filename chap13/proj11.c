// Rewrite old project 13 chapter 7
// using a function that only receives a pointer to the array.

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define SIZE 120

// Counts average word length in a sentence.
// Assumes user doesnt spam spaces.

double compute_average_word_length(const char *sentence);

int main(void)
{
    char user_input[SIZE] = {0};

    char *sentence;
    sentence = user_input;

    printf("Enter a sentence: ");
    fgets(user_input, SIZE, stdin);

    printf("Average word length is %.1f\n", compute_average_word_length(sentence));

    return 0;
}

double compute_average_word_length(const char *sentence)
{
    int word_length = 0, word_count = 1;
    double average;

    while (*sentence != 0 && *sentence != '\n')
    {
        if (*sentence != ' ')
            word_length++;

        else if (*sentence == ' ')
            word_count++;
        sentence++;
    }

    average = ((double)word_length) / word_count;
    return average;
}