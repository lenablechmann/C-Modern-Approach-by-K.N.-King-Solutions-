// UPC
// Computes a Universal Product Code check digit.

#include <stdio.h>

int main(void)
{
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, first_sum, second_sum, total, check_digit;

    printf_s("Enter the first single digit: ");
    scanf_s("%1d", &d);

    printf_s("Enter the first group of five digits: ");
    scanf_s("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);

    printf_s("Enter the second group of five digits: ");
    scanf_s("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);

    printf_s("Enter the check digit: ");
    scanf_s("%1d", &check_digit);

    first_sum = d + i2 + i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + i5 + j2 + j4;
    total = 3 * first_sum + second_sum;

    if (check_digit == 9 - ((total - 1) % 10))
      printf("Seems like your UPC is ok\n");
    else
      printf("ur UPC is a hoax, mate.\n");

    return 0;
}
