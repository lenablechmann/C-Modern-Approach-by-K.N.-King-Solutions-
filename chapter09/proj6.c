// calculates a polynom

#include <stdio.h>


int power(int x, int n);

int main(void)
{
    int product, x;
    printf("Solving a polynomial 3x^5+2x^4-5x^3-x^2+7x-6 for the x of your choice.\n");
    printf("Enter an integer for x: ");
    scanf("%d", &x);

    product = 3 * power(x, 5) + 2 * power(x, 4) - 5 * power(x, 3) - power(x, 2) - 7 * x - 6;
    printf("The solution is %d \n", product);
    return 0;
}
// A basic recursive power function
int power(int x, int n)
{
    if (n == 0)
    return 1;
    else
    return x * power(x, n - 1);
}