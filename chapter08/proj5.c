// Checks numbers for repeated digits.

#include<stdio.h>
#include<stdint.h>
// Finding out the array length. So how many columns, so 5,
#define NUM_RATES ((int) (sizeof(value) / sizeof(value[0]))) 
#define INITIAL_BALANCE 100.0

int main(void)
{
   int i, low_rate, month, num_years, year;
   double value[5]; // Five columns of rates.

   printf("Enter interest rate: ");
   scanf("%d", &low_rate);

   printf("Enter number of years: ");
   scanf("%d", &num_years);

    printf("\nYears"); // prints out upper row of user interest percentage + 4.
    for(i = 0; i < NUM_RATES; i++)
    {
        printf("%6d%%", low_rate + i);
        value[i] = INITIAL_BALANCE;
    }
    printf("\n");

    // Double loop. Upper loop is year, inner loop is interest percentages.
    for(year = 1; year <= num_years; year++)
    {
        printf("%3d   ", year);

        for (i = 0; i < NUM_RATES; i++)
        {
            for (month = 1; month <= 12; month++)
            {
                // Added a monthly calculation
            value[i] += ((low_rate + i) / 12.0) / 100.0 * value[i];
            }

            printf("%7.2f", value[i]);
        }
       printf("\n"); 
    }
    return 0;
}