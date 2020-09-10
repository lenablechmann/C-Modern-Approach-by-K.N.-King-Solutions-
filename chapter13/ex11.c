// write a strcmp function but via pointer arithmetic.

#include <stdio.h>
#include <stdint.h>
#include <ctype.h>

#define LENGTH 80

int read_line(char s[], int n);
int compare_strings(char *s1, char *s2);

int main(void)
{
    char s1[LENGTH] = {0}, s2[LENGTH] = {0};

    printf("Enter a string: ");
    read_line(s1, LENGTH);
    printf("Enter another string: ");
    read_line(s2, LENGTH);

    if (compare_strings(s1, s2) != 0)
        printf("These strings are different huh. \n");
    else
        printf("These strings are the same. \n");

    printf("Thats the value %d \n", compare_strings(s1, s2));

    return 0;
}

int read_line(char s[], int n)
{
    int ch, i = 0;
    while ((ch = getchar()) == ' ')
        ;
    do
    {
        if (i < n)
            s[i++] = ch;
        s[i] = '\0';
    } while ((ch = getchar()) != '\n');
    return i;
}

int compare_strings(char *s1, char *s2)
{
    int counter = 0;
    char *ptr1 = s1, *ptr2 = s2;

    while (*ptr1++ == *ptr2++)
    {
        counter++;
        if (*ptr1 == '\0')
            return 0;
    }
    // Using counter to substract the last elements from each other
    return *(s1 + counter) - *(s2 + counter);  
}