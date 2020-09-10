// Modifying project 5.11 in such a way
// that it uses an array of pointers instead of switch cases.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Prints a two digit number in words.
int main(void)
{
    int digit1, digit2;
    const char *tens[] = {"twenty", "thirty", "fourty", "fifty", "sixty", "seventy",
                          "eighty", "ninety"};
    const char *ones[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    const char *except[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen",
                            "sixteen", "seventeen", "eighteen", "nineteen"};
    printf("Enter a two digit number: ");
    scanf("%1d%1d", &digit1, &digit2);

    printf("You've entered the number ");

    if (digit1 == 1)
    {
        printf("%s.\n", except[digit2]);
        return 0;
    }

    else if (digit1 > 1)
    {
        printf("%s", tens[digit1 - 2]); //since there are no tens and zeroes in our array -2

        if (digit2 == 0)
        {
            printf(".\n");
            return 0;
        }
        else
        {
            printf("-%s.\n", ones[digit2 - 1]); // counting from 0
            return 0;
        }
    }
}
