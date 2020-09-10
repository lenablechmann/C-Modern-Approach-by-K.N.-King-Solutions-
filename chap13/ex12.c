// User enters a file name and you store the extension and the file name in two different strings.
// it's advised to use strcpy and strlen.

#include <stdio.h>
#include <stdint.h>
#include <ctype.h>
#include <string.h>

#define LENGTH 20
#define EXT 5

void get_extension(const char *file, char *extension);
int read_line(char s[], int n);
int compare_strings(char *s1, char *s2);

int main(void)
{
    char file[LENGTH] = {0}, extension[EXT] = {0};

    printf("Enter a file name incl extension (for example todo.txt): ");
    // opting for scanf as it'll skip white spaces and stop at the next white space.
    scanf("%s", file); 

    get_extension(file, extension);

    printf("That's the file extension: ");
    puts(extension);
    putchar('\n');

    return 0;
}

void get_extension(const char *file, char *extension)
{
    int count = 0, length;
    length = strlen(file) - 1;
    const char *p;
    p = &file[length];

    //counting backwards.
    while (*p-- != '.' && p > 0)
        count++;
    // Telling it to start copying from the filename end - where the point is
    strcpy(extension, file + (strlen(file) - count));
}