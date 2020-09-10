#include <stdio.h>

// Prints a two digit number in words.
int main(void)
{
    int digit1, digit2;
    printf("Enter a two digit number: ");
    scanf_s("%1d%1d", &digit1, &digit2);

    if (digit1 == 1)
    {
        switch (digit2)
        {
        case 1: printf("You entered the number eleven\n"); break;
        case 2: printf("You entered the number twelve\n"); break;
        case 3: printf("You entered the number thirteen\n"); break;
        case 4: printf("You entered the number forteen\n"); break;
        case 5: printf("You entered the number fifteen\n"); break;
        case 6: printf("You entered the number sixteen\n"); break;
        case 7: printf("You entered the number seventeen\n"); break;
        case 8: printf("You entered the number eighteen\n"); break;
        case 9: printf("You entered the number nineteen\n"); break;
        }
    }

    else
    {
        printf("You entered the number ");
        switch (digit1)
        {
        case 2: printf("twenty-"); break;
        case 3: printf("thirty-"); break;
        case 4: printf("fourty-"); break;
        case 5: printf("fifty-"); break;
        case 6: printf("sixty-"); break;
        case 7: printf("seventy-"); break;
        case 8: printf("eighty-"); break;
        case 9: printf("ninenty-"); break;
        }

        switch (digit2)
        {
        case 1: printf("one.\n"); break;
        case 2: printf("two.\n"); break;
        case 3: printf("three.\n"); break;
        case 4: printf("four.\n"); break;
        case 5: printf("five.\n"); break;
        case 6: printf("six.\n"); break;
        case 7: printf("seven.\n"); break;
        case 8: printf("eight.\n"); break;
        case 9: printf("nine.\n"); break;
        }
    }

    return 0;
}
