// A program that is translating an alphabetic phone number into numeric form.
// Changing an old project in such a way that it now accepts all chars.

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    char user_number[15];

    for (int i = 0; i < 15; i++)
    {
        user_number[i] = ' ';
    }
	printf("This program translates alphabetic phone numbers into numeric form.\n");
	printf("Enter a phone number (15 chars): ");
    scanf("%c", &user_number[0]);
    for (int i = 1; i < 15; i++)
    {
        scanf("%c", &user_number[i]);
    }

    for (int i = 0; i < 15; i++)
    {

        switch (toupper(user_number[i]))
        {
        case 'A':
        case 'B':
        case 'C':
            printf("2");
            break;

        case 'D':
        case 'E':
        case 'F':
            printf("3");
            break;

        case 'G':
        case 'H':
        case 'I':
            printf("4");
            break;

        case 'J':
        case 'K':
        case 'L':
            printf("5");
            break;

        case 'M':
        case 'N':
        case 'O':
            printf("6");
            break;

        case 'P':
        case 'R':
        case 'S':
            printf("7");
            break;

        case 'T':
        case 'U':
        case 'V':
            printf("8");
            break;

        case 'W':
        case 'X':
        case 'Y':
            printf("9");
            break;
        default:
            printf("%c", toupper(user_number[i]));
            break;
        }

	}
	printf("\n");
	return 0;
}
