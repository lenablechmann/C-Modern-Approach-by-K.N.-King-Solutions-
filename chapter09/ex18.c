// writing a recursive GCD function for function practice
#include <stdio.h>
#include <stdlib.h>

int gcd(int m, int n);

int main(void)
{
    int m, n;
    printf("Enter two positive integers : ");
    scanf("%d %d", &m, &n);

    // Don't need to separately use the function, can just put it into printf.
    printf("%d is the greatest common divisor.\n", gcd(m, n));

    return 0;
}

int gcd(int m, int n)
{
    if (n != 0)
    gcd(n, m % n);
    else
    return m; // that's what the function sends to the main.
}
