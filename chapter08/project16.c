// A program that tests if two words are anagrams (permutations of the same letters.)
// needs 3 loops: one for marking letters as seen, from one word,
// second for demarking, third for seeing if anything isn't zero.

#include <stdbool.h> // letter seen or not.
#include <stdio.h>
#include <stdint.h>
#include <ctype.h> // for toupper, isalpha etc.

#define SIZE 26 // letters in the alphabet

int main(void)
{
    bool letter_seen[SIZE] = {false};
    char ch;
    int number, count = 0;

    printf("Enter the first word: ");
    ch = getchar();
    while (isalpha(ch))
    {
        number = tolower(ch) - 97; // a is 97, so we shift it to compare it with our boolean array.
        letter_seen[number] = true;
        ch = getchar();
    }

    printf("Enter the second word: ");
    ch = getchar();
    while (isalpha(ch))
    {
        number = tolower(ch) - 97; // a is 97, so we shift it to compare it with our boolean array.
        letter_seen[number] = false;
        ch = getchar();
    }

    for (int i = 0; i < SIZE; i++)
    {
        if (letter_seen[i] == true)
            count++;
        else
            continue;
    }

    if (count > 0)
        printf("The words are not anagrams.\n");
    else
        printf("The words are indeed anagrams.\n");

    return 0;
}