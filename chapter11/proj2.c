//Based on project 8 chapter 5 but with a special function

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
    // Departure and arrival times as specified in the book, but in min.
    int departure[] = {480, 583, 679, 767, 840, 945, 1140, 1305};
    int arrival[] = {616, 712, 811, 900, 968, 1075, 1280, 1438};
    int size = sizeof(departure)/(sizeof(departure[0]));
    int i = 0, element;

    for (i = 0; i < size; i++)
    {
        if (desired_time > departure[i] && desired_time < departure[size - 1]) 
        {
           *departure_time = departure[i + 1];
           *arrival_time = arrival[i + 1];
        }

        // making sure there is no gap between the first morning departure and the last evening departure.
        else if (desired_time >= departure[size - 1] || desired_time < departure[0])
        {
           *departure_time = departure[0];
           *arrival_time = arrival[0];
           break;
        }
    }

}