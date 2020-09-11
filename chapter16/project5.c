//Based on project 8 chapter 5 and project 2 chapter 11 (pointers)
/*
    The task is to modify this program in such a way, that
    the times are storen in a single array, the elements of the array shall be structures
    each containing the corresponding departure and arrival times, times will be ints in min
*/

#include <stdio.h>

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);

int main(void) {

    int desired_time, h, min, departure_time, arrival_time;

    printf("Enter a 24-hour time HH:MM : ");
    scanf("%d :%d", &h, &min);
    desired_time = (h * 60) + min;

    find_closest_flight(desired_time, &departure_time, &arrival_time);
    
    printf("Closest departure time is %02d:%02d\nClosest arrival time is %02d:%02d\n",
            departure_time / 60, departure_time % 60, arrival_time / 60, arrival_time % 60);

    return 0;
}

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time)
{
    struct times
    {
        int departure, arrival;
    } time_table;

    // the new array of structs as requested in the book
    struct times depart_arrive[] = {
    {480, 616}, {583, 712}, {679, 811}, {767, 900}, {840, 968}, {945, 1075}, {1140, 1280}, {1305, 1438}
    };

    // Departure and arrival times as specified in the book, but in min.

    int size = sizeof(depart_arrive)/(sizeof(depart_arrive[0]));
    int i = 0, element;

    for (i = 0; i < size; i++)
    {
        if (desired_time > depart_arrive[i].departure && desired_time < depart_arrive[size - 1].departure) 
        {
           *departure_time = depart_arrive[i + 1].departure;
           *arrival_time = depart_arrive[i + 1].arrival;
        }

        // making sure there is no gap between the first morning departure and the last evening departure.
        else if (desired_time >= depart_arrive[size - 1].departure || desired_time < depart_arrive[0].departure)
        {
           *departure_time = depart_arrive[0].departure;
           *arrival_time = depart_arrive[0].arrival;
           break;
        }
    }

}