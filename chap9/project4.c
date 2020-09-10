// A program that tests if two words are anagrams (permutations of the same letters.)
// will use two functions: one for reading words and storing letter counts in array
// and the second function will compare the two arrays, if letter counts differ, then the 2 words aren't anagrams.

#include <stdbool.h>
#include <stdio.h>
#include <stdint.h>
#include <ctype.h> // for toupper, isalpha etc.

#define SIZE 26 // letters in the alphabet
void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);

int main(void)
{
    int counts1[26] = {0}, counts2[26] = {0};

    printf("Enter the first word: ");
    read_word(counts1);

    printf("Enter the second word: ");
    read_word(counts2);

    if (equal_array(counts1, counts2) == false)
        printf("The words are not anagrams.\n");
    else
        printf("The words are indeed anagrams.\n");
    return 0;
}

// reads word and updates the corresponding counts array (letter count).
void read_word(int counts[26])
{
    char ch;

    ch = getchar();
    while (isalpha(ch))
    {
        counts[tolower(ch) - 97]++; // finding the relative position of the letter in the letter array.
        ch = getchar();
    }
}

// will get two arrays from main and compare the arrays if they are identical or nah.
bool equal_array(int counts1[26], int counts2[26])
{
    for (int i = 0; i < 26; i++)
    {
        if (counts1[i] != counts2[i])
            return false;
    }
    return true;
}