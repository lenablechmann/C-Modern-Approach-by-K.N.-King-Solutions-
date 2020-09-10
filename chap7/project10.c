#include <stdio.h>
#include <ctype.h> // wanna use toupper

// Counts the number of vowels in a sentence.

int main(void)
{
	char ch;
	int vowel_sum = 0;
	printf("Enter a sentence: ");
	ch = getchar();

	while (ch != '\n') // Determining the end of user input.
	{
		switch (toupper(ch)) // Makes it case sensitive.
		{
			//Listing them like that makes them have the same statement.
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U': vowel_sum++; break;
			default: break;
		}
		ch = getchar();
	}

	printf("There are %d vowels in your sentence.\n", vowel_sum);
	return 0;
}
