// UPC
// Computes a Universal Product Code check digit.

#include <stdio.h>

int main(void)
{
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, first_sum, second_sum, total;

    printf_s("Enter the first single digit: ");
    scanf_s("%1d", &d);

    printf_s("Enter the first group of five digits: ");
    scanf_s("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);

    printf_s("Enter the second group of five digits: ");
    scanf_s("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);

    first_sum = d + i2 + i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + i5 + j2 + j4;
    total = 3 * first_sum + second_sum;

    printf("Check digit is: %d\n", 9 - ((total - 1) % 10));
    printf("orr Check digit is: %d\n", (10 - (total % 10)) % 10); // still would work
    return 0;
}
