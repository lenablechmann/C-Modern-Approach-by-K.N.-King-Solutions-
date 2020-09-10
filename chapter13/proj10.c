// Modify project 11 chapter 7: add a function that reverses the name
// via a string pointer

// Takes first name and last name from user then converts them to a different format.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define LENGTH 50

void reverse_name(char *name);

int main(void)
{
    char name[LENGTH] = {0};
    char last_name[LENGTH] = {0};
    char *ptr_name;
    ptr_name = name;

    printf("Enter your first and last name: ");
    // scanf skips spaces so it's perfect to store last name, fist name.
    scanf("%s", name);
    strcat(name, " "); // Adding a space so its easier to tell name and last name apart
    scanf("%s", last_name);
    strcat(name, last_name);
    reverse_name(ptr_name);

    printf("%s\n", name);
    return 0;
}

void reverse_name(char *name)
{
    // An array we will do the work in.
    char placeholder[LENGTH];
    char initial = *name;
    int counter = 0;

    while (*name != ' ')
    {
        counter++;
        name++;
    }

    // Copying last name into placeholder, skipping space
    strcpy(placeholder, name + 1);
    //going to the start via counter.
    strcpy(name - counter, placeholder);
    strcat(name, ", ");
    //Need to make a string so that cat works.
    placeholder[0] = initial;
    placeholder[1] = '.';
    placeholder[2] = '\0';

    strcat(name, placeholder);
}