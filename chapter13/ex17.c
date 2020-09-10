/*
    write the following function:
    bool test_extension(const char *file_name, const char *extension);
    the function should return true if the file_name extension matches the extension contents
    independent of the letter case.
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

#define LENGTH 30
#define EXT 10

bool test_extension(const char *file_name, const char *extension);

int main(void)
{
    char file[LENGTH] = {0}, extension[EXT] = {0};

    printf("Enter a file name incl extension (for example todo.txt): ");
    // opting for scanf as it'll skip white spaces and stop at the next white space.
    scanf("%s", file);
    printf("Enter an extension you want to test it for (f.e. jpeg): ");
    scanf("%s", extension);

    if (test_extension(file, extension) == true)
        printf("Same extension.\n");
    else
        printf("Not the same extension.\n");

    return 0;
}

bool test_extension(const char *file_name, const char *extension)
{
    const char *p1, *p2;
    p1 = file_name;

    // Moves the pointer into the position after the dot.
    while (*p1++ != '.') 
        ;
    // strcmp doesn't care as long as it gets a pointer and our pointer is in the right position.
    if (strcmp(p1, extension))
        return false;
    else
        return true;
}