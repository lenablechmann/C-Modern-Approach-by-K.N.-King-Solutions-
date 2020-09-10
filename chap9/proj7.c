// Optimizing the recursive power function.

#include <stdio.h>

int power(int x, int n);

int main(void)
{
    int x, n;
    printf("Testing the power function for x^2.\n");
    printf("Enter an integer for x: ");
    scanf("%d", &x);
    printf("Enter an integer for n: ");
    scanf("%d", &n);

    printf("The solution is %d \n", power(x, n));
    return 0;
}

// A recursive power function that bases off its logic that even n is a multiple of 2.
int power(int x, int n)
{
    if (n == 0)
        return 1;
    else
    {
        if (n % 2 == 0)
            return power(x, n / 2) * power(x, n / 2);
        else
            return x * power(x, n - 1);
    }
}