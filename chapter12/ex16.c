
//  Write a loop that prints out the highest temperature for the day
// (so 7 days) Should call find largest function and pass the current row there.

#include <stdio.h>
#include <stdlib.h>
#include <time.h> // for the random function.

#define DAYS 7
#define HOURS 24
#define UPPER 35
#define LOWER 25
#define SIZE ((int)(sizeof(temperature_readings) / sizeof(temperature_readings[0][0])))

int find_largest(int *a, int n);

int main(void)
{
    int temperature, *p, row;
    int temperature_readings[DAYS][HOURS] = {1};

    // Starts random function to fill temperatures
    srand(time(NULL));

    // fills the array with random temperatures
    for (p = &temperature_readings[0][0]; p <= &temperature_readings[DAYS - 1][HOURS - 1]; p++)
    {
        temperature = (rand() % (UPPER - LOWER + 1)) + LOWER;
        *p = temperature;
    }
    row = 0;

    // Tricking the function into reading a multidimensional array.
    //Limiting it with HOURS so it doesn't read past the end of the row.
    for (p = temperature_readings[row]; p < temperature_readings[row] + HOURS, row < DAYS; p++)
    {
        printf("The highest temperature for day %d ", row + 1);
        printf("is %d. \n ", find_largest(temperature_readings[row], HOURS));
        row++;
    }

    return 0;
}

int find_largest(int *a, int n)
{
    int *p, max = *a;

    for (p = a; p < a + n; p++)
    {
        if (*p > max)
            max = *p;
    }
    return max;
}