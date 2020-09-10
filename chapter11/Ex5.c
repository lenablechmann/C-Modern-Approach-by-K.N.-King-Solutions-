#include <stdio.h>

// total_sec is the number of seconds since midnight
// hr, min and sec are pointers to variables in which the function will store the corresponding time.
void split_time(long total_sec, int *hr, int *min, int *sec);

int main(void)
{
    long int total_sec;
    int hr, min, sec;
    printf("Enter seconds since midnight (0 to 86,400): ");
    scanf("%ld", &total_sec);

    // We won't be changing total_sec, so a copy is fine.
    split_time(total_sec, &hr, &min, &sec);
    printf("That's %d hours, %d min and %d seconds.\n ", hr, min, sec);
    return 0;
}

void split_time(long total_sec, int *hr, int *min, int *sec)
{
    *hr = total_sec / (60 * 60);
    *min = (total_sec % (60 * 60)) / 60;
    *sec = total_sec - (*hr * 60 * 60 + *min * 60);

}