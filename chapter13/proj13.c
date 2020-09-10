// Modifying proj 15 from chapter 8 to include a function
// which will get a pointer to the string of the user input, and the function shall encrypt.
// Implementing the caesar cipher. (letter + n)

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define LENGTH 80

void encrypt(char *message, int shift);

int main(void)
{
    char ch, sentence[LENGTH + 1] = {0}, *pointer_sentence;
    int n;
    pointer_sentence = sentence;

    printf("Enter a message you want encrypted (80 chars): ");
    fgets(sentence, LENGTH, stdin); // Gets the full message up to \n safely.

    printf("enter shift amount (1-25): ");
    scanf("%d", &n);

    if (n < 0 || n > 25)
    {
        printf("Invalid key\n");
        return 1;
    }
    encrypt(pointer_sentence, n);

    printf("The encrypted message: ");
    puts(sentence);

    return 0;
}

void encrypt(char *message, int shift)
{
    while (*message != '\n' && *message != 0)
    {
        // makes sure that the letters loop around when the alphabet ends.
        if (*message >= 'a' && *message <= 'z')
            *message = ((*message - 'a') + shift) % 26 + 'a';
        else if (*message >= 'A' && *message <= 'Z')
            *message = ((*message - 'A') + shift) % 26 + 'A';
        message++;
    }
}