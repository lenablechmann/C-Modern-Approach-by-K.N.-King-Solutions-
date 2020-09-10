
// chooses random temps between 25 and 35 and fills the array with them.
//  searches the array for 32.

#include <stdio.h>
#include <stdlib.h>
#include <time.h> // for the random function.

#define DAYS 7
#define HOURS 24
#define UPPER 35
#define LOWER 25
#define KEY 32
#define SIZE ((int)(sizeof(temperature_readings) / sizeof(temperature_readings[0][0])))

int main(void)
{
    int temperature, *p, i;
    int temperature_readings[DAYS][HOURS] = {1};

    // Starts random function to fill temperatures
    srand(time(NULL));

    // fills the array with random temperatures
    for (p = &temperature_readings[0][0]; p <= &temperature_readings[DAYS - 1][HOURS - 1]; p++)
    {
        temperature = (rand() % (UPPER - LOWER + 1)) + LOWER;
        *p = temperature;
    }

    printf("Choose an integer between 0 and 6: ");
    scanf("%d", &i);

    // Prints out all values of row i.
    for (p = temperature_readings[i]; p < temperature_readings[i] + HOURS; p++)
       {
           printf("%d ", *p);
       }
       printf("\n ");
    return 0;
}