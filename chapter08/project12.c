// A programm that tells you how many points you get in Scrabble for a specific word.
// This time point values for every letter will be stored in an array of length 26.

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int values_letters[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5,
    1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

	char ch;
	int sum = 0, value;
	printf("This program will tell you how many points you get for a word in scrabble.\n");
	printf("Enter your word: ");
	ch = toupper(getchar());
    value = ch - 65; // because A is 65 in ASCII

		while (value >= 0 && value < 26) // making sure that it's a letter.
		{
            sum += values_letters[value];
	        ch = toupper(getchar());
            value = ch - 65; 
		}
	printf("This word has %d points.\n", sum);
	return 0;
}
