#include <stdio.h>
#include <ctype.h> // wanna use toupper

// Counts average word length in a sentence.
// Assumes user doesnt spam spaces.

int main(void)
{
	int word_length = 0, word_count = 1;
	char ch;
	printf("Enter a sentence: ");

	while ((ch = getchar()) != '\n')
	{
		if (ch != ' ') 
		word_length++;

		else if (ch == ' ') 
		word_count++;
	}
	printf("Word count is %d ; non blanks %d, average word length is %.1f\n", word_count, word_length, ((float)word_length) / word_count);

	return 0;
}
