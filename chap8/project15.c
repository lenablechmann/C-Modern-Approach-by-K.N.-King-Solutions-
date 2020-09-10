// Implementing the caesar cipher. (letter + n)

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // for toupper

#define LENGTH 80

int main(void)
{
    char ch, sentence[LENGTH] = {0};
    int n;

    printf("Enter a message you want encrypted (80 chars): ");
    ch = getchar();
    for (int i = 0; ch != '\n' && i < LENGTH; i++)
    {
        sentence[i] = ch;
        ch = getchar();
    }
    printf("enter shift amount (1-25): ");
    scanf("%d", &n);
    if (n < 0 || n > 25)
    {
    printf("Invalid key");
    return 1;
    }

    printf("The encrypted message: ");
    for (int i = 0; i < LENGTH; i++) 
    {
        if (sentence[i] >= 'a' && sentence[i] <= 'z')
        { // makes sure that the letters loop around when the alphabet ends.
            printf("%c", ((sentence[i] - 'a') + n) % 26 + 'a');
        }
        else if (sentence[i] >= 'A' && sentence[i] <= 'Z')
        {
            printf("%c", ((sentence[i] - 'A') + n) % 26 + 'A');
        }
        else
            putchar(sentence[i]);
    }

    printf("\n");

    return 0;
}
