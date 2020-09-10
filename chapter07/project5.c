// A programm that tells you how many points you get in Scrabble for a specific word.

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char ch;
	int sum = 0;
	printf("This program will tell you how many points you get for a word in scrabble.\n");
	printf("Enter your word: ");
	ch = getchar();

		while (ch != '\n')
		{
			switch(toupper(ch)) // This way the code will work no matter if the letter is upper case or nah.
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

			ch = getchar();
		}
	printf("This word has %d points.\n", sum);
	return 0;
}
