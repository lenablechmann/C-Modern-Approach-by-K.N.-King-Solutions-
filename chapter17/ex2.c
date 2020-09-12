/* 
    Write a function called duplicate, 
    that uses dynamic storage allocation to create a copy of a string.
    p = duplicate(str)
    woruld allocate space for a string of the same length as str, copy contents of str into it,
    return a pointer to the duplicate 
*/

#include <stdio.h>
#include <stdlib.h> //memory related stuff
#include <string.h>

char *duplicate(char *original);

int main(void)
{
    char *original, *duped;
    original = "Here is some text.\n";

    duped = (duplicate(original));

    // Only proceeds with printing if duplicate doesn't return a null pointer.
    if (duped != NULL)
        puts(duped);

    return 0;
}

char *duplicate(char *original)
{
    char *copy;
    copy = (char *)malloc(strlen(original) + 1);
    if (copy == NULL)
    {
        printf("Memory allocation failed.\n");
        return NULL;
    }
    strcpy(copy, original);
    return copy;
}