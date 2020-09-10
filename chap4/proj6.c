// UPC
// Computes a Universal Product Code check digit.

#include <stdio.h>

int main(void)
{
    int i1, i2 , i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, first_sum, second_sum, total;

    printf_s("Enter 12 numbers of a EAN: ");
    scanf_s("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8, &i9, &i10, &i11, &i12);

    /*
    printf_s("Enter the first single digit: ");
    scanf_s("%1d", &d);

    printf_s("Enter the first group of five digits: ");
    scanf_s("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);

    printf_s("Enter the second group of five digits: ");
    scanf_s("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);
    */

    first_sum = i2 + i4 + i6 + i8 + i10 + i12;
    second_sum = i1 + i3 + i5 + i7 + i9 + i11;
    total = 3 * first_sum + second_sum;

    printf("Check digit is: %d\n", 9 - ((total - 1) % 10));
    return 0;
}
