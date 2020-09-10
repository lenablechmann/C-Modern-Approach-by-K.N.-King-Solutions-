// Checks numbers for repeated digits, user can spam.

#include<stdbool.h>
#include<stdio.h>
#include<stdint.h>

int main(void)
{
    bool digit_seen[10] ={ false }; // There are 10 digits from 0 to 9.
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);
    while (n != 0)
    {
        while (n > 0)
        {
            digit = n % 10; // Takes the last digit from the long number the user entered.
            if (digit_seen[digit])
            {
                break; // If it is already true, then it's been seen before.
            }
            digit_seen[digit] = true; // Definitely seen now tho.
            n /= 10; // advancing through the number
        }
        if (n > 0) // Meaning the number is still there, so the break happened.
            printf("Repeated digit.\n");
        else
        printf("No repeats.\n");
       
        printf("Enter a number: ");
        scanf("%ld", &n);
    }
    return 0;
}