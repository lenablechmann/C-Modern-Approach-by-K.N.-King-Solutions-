// A program that is translating an alphabetic phone number into numeric form.
// As per the book's specification this program assumes all caps.

#include <stdio.h>

int main(void)
{
	char ch;
	printf("This program translates alphabetic phone numbers into numeric form.\n");
	printf("Enter a phone number (all caps, letters only): ");
	ch = getchar();

		while (ch != '\n')
		{

			switch(ch)
			{
			case 'A':
			case 'B':
			case 'C': printf("2");
				  break;
			
			case 'D':
			case 'E':
			case 'F': printf("3");
				  break;
				  
			case 'G':
			case 'H':
			case 'I': printf("4");
				  break;

			case 'J':
			case 'K':
			case 'L': printf("5");
				  break;

			case 'M':
			case 'N':
			case 'O': printf("6");
				  break;

			case 'P':
			case 'R':
			case 'S': printf("7");
				  break;

			case 'T':
			case 'U':
			case 'V': printf("8");
				  break;

			case 'W':
			case 'X':
			case 'Y': printf("9");
				  break;
			default:
				  printf("%c", ch);
				  break;
			}

			ch = getchar();
		}
	printf("\n");
	return 0;
}
