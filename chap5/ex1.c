#include <stdio.h>

int main(void)
{
    // a) prints 1. Equality operators produce either 1 or 0 as their result. 2*3 equals 6 so in this case the boolean is 1.
    int i = 2, j = 3, k;
    k = i * j == 6;
    printf_s("a) is equal to %d\n", k);

    // b) prints 1. k > i produces 0 cause untrue. 0 is smaller than j.
    int i = 5, j = 10, k = 1;
    printf_s("b) is equal to %d\n", k > i < j);

    // c) prints 1. i < j and j < k are both not true, so 0 == 0 produces 1
    int i = 3, j = 2, k = 1;
    printf_s("c) is equal to %d\n", i < j == j < k);

    // d) prints 0. i % j is 3, 3 + i is > k, so 0
    int i = 3, j = 4, k = 5;
    printf_s("d) is equal to %d\n", i % j + i < k);

    return 0;
}
