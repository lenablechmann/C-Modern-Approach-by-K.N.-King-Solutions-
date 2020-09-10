// modifying an older project so that it uses a function to compute the amount of tax
#include <stdio.h>

float taxes(float income);
// Prints out the tax due based on the income
int main(void)
{
    float income;
    printf("What's your income in $: ");
    scanf("%f", &income);
    
    printf("Your taxes due are: %.2f\n", taxes(income));

    return 0;
}

float taxes(float income)
{
    if (income < 750)
        return income / 100;
    else if (income < 2250)
        return 7.5 +  (((income - 750) / 100) * 2);
    else if (income < 3750)
        return 37.50 + (((income - 2250) / 100) * 3);
    else if (income < 5250)
        return 82.50 + (((income - 2250) / 100) * 4);
    else if (income < 7000)
        return 142.50 + (((income - 5250) / 100) * 5);
    else
        return 230 + (((income - 7000) / 100) * 6);

}