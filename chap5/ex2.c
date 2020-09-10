#include <stdio.h>

int main(void)
{
    // a) prints 1. i isn't 0, so !i is 0 (if it was 0, it'd be 1), 0 is < 5, so overall 1
    int i = 10, j = 5;
    printf_s("a) is equal to %d\n", !i < j);

    // b) prints 1. !! negates and makes it 1? !j is defo 0 tho.
    /*In C and C++ the double negation operator can be (and often is) used to convert a value to a boolean.
     *Simply put, if int x = 42, !!x evaluates to 1. If x = 0, !!x evaluates to 0.
     */
    int i = 2, j = 1;
    printf_s("b) is equal to %d\n", !!i + !j);

    // c) prints 1.  j || k in this case k has nonzero value. so 1. both i and k have nonzero values, so 1.
    int i = 5, j = 0, k = -5;
    printf_s("c) is equal to %d\n", i && j || k);

    // d) prints 1
    int i = 1, j = 2, k = 3;
    printf_s("d) is equal to %d\n", i < j || k);

    return 0;
}
