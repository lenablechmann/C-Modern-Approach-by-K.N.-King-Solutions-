// A function that returns the number of digits in n.

#include <stdio.h>
#include <stdlib.h>

int digits_number(int n);

int main(void)
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Try a positive integer.\n");
        return 1;
    }

    printf("Your integer has %d digits.\n", digits_number(n));

    return 0;
}

int digits_number(int n)
{               
    int digits = 0;

    while (n > 0)
    {
        n /= 10;
        digits++;
    }

    return digits; 
}
