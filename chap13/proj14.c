/*
Modifying the old project 16 from chapter 8 to include a function that receives pointers.
This is a program that tests if two words are anagrams (permutations of the same letters.)
needs 3 loops: one for marking letters as seen, from one word,
second for demarking, third for seeing if anything isn't zero. 
*/

#include <stdbool.h> // letter seen or not.
#include <stdio.h>
#include <stdint.h>
#include <string.h> // for strcmp
#include <ctype.h>

#define SIZE 26 // letters in the alphabet
#define LENGTH 45

bool are_anagrams(const char *word1, const char *word2);

int main(void)
{
    char first_word[LENGTH + 1] = {0}, second_word[LENGTH + 1] = {0};
    char *word1, *word2;
    word1 = first_word; // Pointers for the function
    word2 = second_word;

    printf("Enter the first word (45 chars max): ");
    scanf("%s", first_word);

    printf("Enter the second word (45 chars max): ");
    scanf("%s", second_word);

    if (are_anagrams(word1, word2) == false)
        printf("\nThe words are not anagrams.\n");
    else
        printf("\nThe words are indeed anagrams.\n");

    return 0;
}

bool are_anagrams(const char *word1, const char *word2)
{
    int number, count = 0;
    bool letter_seen[SIZE] = {false};

    while (isalpha(*word1))
    {
        number = tolower(*word1) - 97; // a is 97, so we shift it to compare it with our boolean array.
        letter_seen[number] = true;
        word1++;
    }

    while (isalpha(*word2))
    {
        number = tolower(*word2) - 97; // a is 97, so we shift it to compare it with our boolean array.
        letter_seen[number] = false;
        word2++;
    }

    for (int i = 0; i < SIZE; i++)
    {
        if (letter_seen[i] == true)
            count++;
        else
            continue;
    }

    if (count > 0)
        return false; // If not everything in the array is 0, then letters are left over
    else
        return true;
}