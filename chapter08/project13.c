#include <stdio.h>
#include <ctype.h> // wanna use toupper

// Takes first name and last name from user then converts them to a different format.

int main(void)
{
    int size = 0;
    char ch, letter1, letter2, last_name[20] = {0};

    printf("Enter your first and last name: ");

    while ((letter1 = getchar()) == ' ') // Skips blanks then stores first letter. Idiom.
        ;
    //Skipping the letters of the first name.
    while ((ch = getchar()) != ' ')
        ;
    //Storing the last name in the array.
    for (int i = 0; (ch = getchar()) != '\n'; i++) // Skips blanks then stores first letter. Idiom.
        last_name[i] = ch;

	printf("You entered the name: ");
    for (int i = 0; last_name[i] != '\0'; i++) // \0 is the string end.
    {
        printf("%c", last_name[i]);
    }
	printf(", %c.\n", letter1);

	return 0;
}
