
// Prints out the average temperatures over a month. 
// rows are days, columns are hours.

#include<stdio.h>
#include<stdlib.h>
#include<time.h> // for the random function.

#define UPPER 35
#define LOWER 25
#define SIZE ((int) (sizeof(temperature_readings) / sizeof(temperature_readings[0][0])))

int main(void)
{
    int temperature;
    float sum;
    int temperature_readings[30][24] = {1};

    // Starts random function to fill temperatures
    srand(time(NULL)); // trying without unsigned

    printf("Here are the temperatures of the month: \n");
    for (int i = 0; i < 30; i++)
    {

        printf("\n");
        printf("Hourly temperatures on day %2d:\n", i + 1);

        for (int j = 0; j < 24; j++)
        {
            temperature = (rand() % (UPPER - LOWER + 1)) + LOWER;
            temperature_readings[i][j] = temperature;
            printf("%3d,", temperature_readings[i][j]);
            sum += temperature;
        }
    }
    printf("\n");
    printf("The average temperature for the month is %.1f.\n", sum / SIZE);
    return 0;
}