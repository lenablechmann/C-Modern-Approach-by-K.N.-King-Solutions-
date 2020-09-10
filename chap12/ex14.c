
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
    int temperature, *p;
    int temperature_readings[DAYS][HOURS] = {1};

    // Starts random function to fill temperatures
    srand(time(NULL));

    // fills the array with random temperatures
    for (p = &temperature_readings[0][0]; p <= &temperature_readings[DAYS - 1][HOURS - 1]; p++)
    {
        temperature = (rand() % (UPPER - LOWER + 1)) + LOWER;
        *p = temperature;
    }
    // Searches the array for 32
    for (p = &temperature_readings[0][0]; p <= &temperature_readings[DAYS - 1][HOURS - 1]; p++)
    {
        if (*p == KEY)
        {
            printf("Found %d in the array!\n", KEY);
            return 0;
        }
    }
    printf("Couldn't find %d in this random array.\n", KEY);
    return 0;
}