/* Testing out what works from the in-book options:
*   a is a 1D array and p is a pointer. We assign p = a
*   which of the following is illegal: */

#include <stdio.h>
#include <stdint.h>

int main(void)
{
    int a[] ={1, 2, 3, 4, 5};
    int *p;
    p = a;

    if (p == a[0])
    printf("Option a works.\n"); // Pointer and integer - illegal.
    if (p == &a[0])
    printf("Option b works.\n"); // all the other options are legal and true.
    if (*p == a[0])
    printf("Option c works.\n");
    if (p[0] == a[0])
    printf("Option d works.\n");

    return 0;
}