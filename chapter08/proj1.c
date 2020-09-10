// Checks numbers for repeated digits and prints out how many times those occur.

#include<stdbool.h>
#include<stdio.h>
#include<stdint.h>

int main(void)
{
    bool digit_seen[10] ={ false }; // There are 10 digits from 0 to 9.
    int times_seen[10] ={ 0 };
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0)
    {
        digit = n % 10; // Takes the last digit from the long number the user entered.
        if (digit_seen[digit] == false)
        {
            times_seen[digit] = 1;
        }
        else if (digit_seen[digit] == true)
        {
            times_seen[digit]++;
        }
       digit_seen[digit] = true; // Definitely seen now tho.
       n /= 10; // advancing through the number
    }

    printf("Digit:     ");
    for (int i = 0; i < 10; i++)
    {
        printf("%3d", i);
    }
    printf("\n");

    printf("Occurences:");
    for (int i = 0; i < 10; i++)
    {
        printf("%3d", times_seen[i]);
    }
    printf("\n");
    
    return 0;
}