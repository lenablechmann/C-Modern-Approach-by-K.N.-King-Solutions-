/*
    void remove_filename(char *url);
    url points to a string with a url + filename like index.html
    the function should remove that filename and the preceding slash.
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define LENGTH 80

void remove_filename(char *url);

int main(void)
{
    char url[LENGTH] = {0};

    printf("Enter a url: ");
    // opting for scanf as it'll skip white spaces and stop at the next white space.
    scanf("%s", url); 

    remove_filename(url);
    printf("That's the new link: ");
    puts(url);
    putchar('\n');

    return 0;
}

void remove_filename(char *url)
{
    char *p;
    p = url + strlen(url);

    // loops back from the end and replaces the first slash it sees with a null char.
    // thus getting rid of the file name
    while (p-- > url)
    if (*p == '/')
    {
    *p = '\0';
    break;
    }
}