#include <stdio.h>

// Prints out the tax due based on the income
int main(void)
{
    float income;
    printf("What's your income in $: ");
    scanf_s("%f", &income);

    if (income < 750)
        printf("Your taxes due are %.2f\n", income / 100);
    else if (income < 2250)
        printf("Your taxes due are $%.2f\n", 7.5 +  (((income - 750) / 100) * 2));
    else if (income < 3750)
        printf("Your taxes due are $%.2f\n", 37.50 + (((income - 2250) / 100) * 3));
    else if (income < 5250)
        printf("Your taxes due are $%.2f\n", 82.50 + (((income - 2250) / 100) * 4));
    else if (income < 7000)
        printf("Your taxes due are $%.2f\n", 142.50 + (((income - 5250) / 100) * 5));
    else
        printf("Your taxes due are $%.2f\n", 230 + (((income - 7000) / 100) * 6));

    return 0;
}
