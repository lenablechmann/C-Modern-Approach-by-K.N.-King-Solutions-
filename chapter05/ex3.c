#include <stdio.h>

int main(void)
{
    // a) prints 1. J isn't incremented.
    int i = 3, j = 4, k = 5;
    printf_s("a) is equal to %d\n", i < j || ++j <k);
    printf_s("a) is equal to i=%d j=%d k=%d\n", i, j, k);

    // b) prints 0, and j aint incremented, cause i - 7 is 0.
    int i = 7, j = 8, k = 9;
    printf_s("b) is equal to %d\n", i - 7 && j++ < k);
    printf_s("a) is equal to i=%d j=%d k=%d\n", i, j, k);

    // c) prints 1. i becomes 8, j stays 8, cause the j = k aint evaluated as i = j is already a 1?
    int i = 7, j = 8, k = 9;
    printf_s("c) is equal to %d\n", (i = j) || (j = k));
    printf_s("a) is equal to i=%d j=%d k=%d\n", i, j, k);

    // d) prints 1 and only i gets incremented.
    int i = 1, j = 1, k = 1;
    printf_s("d) is equal to %d\n", ++i || ++j && ++k);
    printf_s("a) is equal to i=%d j=%d k=%d\n", i, j, k);

    return 0;
}
