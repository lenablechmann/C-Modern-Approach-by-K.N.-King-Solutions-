#include <stdio.h>
#include <ctype.h> // wanna use toupper

// Takes first name and last name from user then converts them to a different format.

int main(void)
{
	char ch, letter1, letter2;
	printf("Enter your first and last name: ");

	while ((letter1 = getchar())  == ' ') // Skips blanks then stores first letter. Idiom.
		;
	//Skipping the letters of the first name.
	while ((ch = getchar()) != ' ')
		;
	while ((letter2 = getchar())  == ' ') // Skips blanks then stores first letter. Idiom.
		;
	printf("%c", letter2); // Prints out first letter of last name.

	// Printing out te rest of the last name.
	ch = getchar();
	while (ch != '\n')
	{
		if (ch == ' ')
			break;

		printf("%c", ch);
		ch = getchar();
	}
	printf(", %c.\n", letter1);


	return 0;
}
