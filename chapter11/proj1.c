#include <stdio.h>
// A program that asks the user for an amount of USD
// then tells them the smallest amount of bills necessary.

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(void) 
{

    int dollars = 0, twenties, tens, fives, ones;

    printf("Enter a dollar amount: ");
    scanf("%d", &dollars);

    pay_amount(dollars, &twenties, &tens, &fives, &ones);

    printf("$20 bills: %d\n", twenties);
    printf("$10 bills: %d\n", tens);
    printf(" $5 bills: %d\n", fives);
    printf(" $1 bills: %d\n", ones);
    return 0;
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
    *twenties = dollars / 20;
    dollars -= *twenties * 20;

    *tens = dollars / 10;
    dollars -= *tens * 10;

    *fives = dollars / 5;
    dollars -= *fives * 5;

    *ones = dollars;
}