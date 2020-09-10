// modifying project 5 from chapter 7
// include a function that returns the scrabble value of the string that is pointed to
// A programm that tells you how many points you get in Scrabble for a specific word.

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define LENGTH 45

int compute_scrabble_value(const char *word);

int main(void)
{
	char *word, input[LENGTH] ={0};
	word = input;
	printf("This program will tell you how many points you get for a word in scrabble.\n");
	printf("Enter your word: ");
	scanf("%s", input);
	
	printf("This word has %d points.\n", compute_scrabble_value(word));
	return 0;
}

int compute_scrabble_value(const char *word)
{
	int sum = 0;
		// makes sure the value isnt a null char,
		while (*word)
		{
			switch(toupper(*word)) // This way the code will work no matter if the letter is upper case or nah.
			{
			case 'D':
			case 'G': sum += 2;
				  break;
			
			case 'B':
			case 'C':
			case 'M':
			case 'P': sum += 3;
				  break;
				  
			case 'F':
			case 'H':
			case 'V':
			case 'W':
			case 'Y': sum += 4;
				  break;

			case 'K': sum += 5;
				  break;

			case 'J':
			case 'X': sum += 8;
				  break;

			case 'Q':
			case 'Z': sum += 10;
				  break;
			default:
				  sum += 1;
				  break;
			}
			word++;
		}
		return sum;
}