// Write a function that splits up time given in seconds into hours and minutes
// ofc using a struct.

#include <stdio.h>

struct time
{
    int hours, minutes, seconds;
} ;
    struct time total;

struct time split_time(long total_seconds);

int main(void)
{
    long int total_seconds;
    
    printf("Enter the amount of seconds (a positive int): ");
    scanf("%ld", &total_seconds);
    if (total_seconds > 0)
    split_time(total_seconds);
    else
    {
        printf("Time is assumed to be a positive int.\n");
        return 1;
    }
    printf("That's %d hours, %d minutes, %d seconds.\n", total.hours, total.minutes, total.seconds);

    return 0;
}

struct time split_time(long total_seconds)
{

    total.hours = total_seconds / (60 * 60);
    total.minutes = (total_seconds - (total.hours * 60 * 60)) / 60;
    total.seconds = total_seconds - (total.hours * 60 * 60) - (total.minutes * 60);

    return total;
}