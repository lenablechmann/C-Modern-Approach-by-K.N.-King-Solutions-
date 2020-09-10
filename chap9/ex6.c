// A function that returns the kth digit.

#include <stdio.h>
#include <stdlib.h>

int digit(int n, int k);

int main(void)
{
    int n, k;
    printf("This program tells you the kth digit of the number of your choice.\n");
    printf("Enter a number and k: ");
    scanf("%d%d", &n, &k);
    if (n <= 0 || k <= 0)
    {
        printf("Try a positive integer.\n");
        return 1;
    }

    printf("The digit is %d.\n", digit(n, k));

    return 0;
}
int digit(int n, int k)
{
    int digits, k_digit = 0, n_tmp = n;

    for (digits = 0; n_tmp > 0; digits++)
        n_tmp /= 10;

    if (k < digits)
    {
        for (int i = 1; i <= k; i++)
        {
            k_digit = n % 10;
            n /= 10;
        }
        return k_digit;
    }
    else
        return 0;
}
