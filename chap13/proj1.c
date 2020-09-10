/*
    A program that prompts the user for new words until he enters a 4 letter word
    then it displays the "smallest" and the "largest" words the user has entered so far.
    Books wants us to use strcmp
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

#define LENGTH 40
#define END 4 //4 letter word is the end condition

int main(void)
{
    // + 1 because we want to demonstrate that we've thought of the null char
    char user_input[LENGTH + 1] = {0};
    char smallest_word[LENGTH + 1] = {0};
    char largest_word[LENGTH + 1] = {0};

    printf("Enter word: ");
    scanf("%s", user_input);
    strcpy(smallest_word, user_input);
    strcpy(largest_word, user_input);

    while (strlen(user_input) != END)
    {
        if (strcmp(smallest_word, user_input) > 0)
            strcpy(smallest_word, user_input);

        if (strcmp(largest_word, user_input) < 0)
            strcpy(largest_word, user_input);
        printf("Enter word: ");
        scanf("%s", user_input);
    }
    printf("The smallest word so far: ");
    puts(smallest_word);
    putchar('\n');
    printf("The largest word so far: ");
    puts(largest_word);
    putchar('\n');

    return 0;
}
