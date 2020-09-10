// Checking what the output of a function from the book is

#include <stdio.h>
#include <stdint.h>
#include <ctype.h>
#include <string.h>

#define LENGTH 80


int main(void)
{
    char s1[15], s2[15];
    strcpy(s1, "computer");
    strcpy(s2, "science");

    if (strcmp(s1, s2) < 0) // s1 will be <, because the letters have a lower value
    strcat(s1, s2); // so s1 will be "computerscience"
    else
    strcat(s2, s1) ;
    s1[strlen(s1) - 6] = '\0'; // then it'll put a null char at -6 chars.
    // so the string will be computers\0ience
    puts(s1); // will print out "computers"
    return 0;
}

