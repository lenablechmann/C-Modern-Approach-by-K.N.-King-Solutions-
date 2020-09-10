/* A program that gets a date from the user in form mm/dd/yyyy 
    and spews out month dd, yyyy. month will be the name of the month.
    Supposed to to store month in an array of pointers. 
*/

#include <stdio.h>
#include <string.h>

#define NUM_MONTHS 12

int main(void)
{
    const char *months[NUM_MONTHS] = {"January", "February", "March", "April", "May", "June",
                                      "July", "August", "September", "October", "November", "December"};
    int m, d, y;

    printf("Enter a date in form mm/dd/yyyy: ");
    scanf(" %d/%d/%d", &m, &d, &y);

    // Checking for bad user input
    if (m < 0 || m > 12 || d < 0 || d > 31 || y < 0 || y > 9999)
    {
        printf("Wrong format. Try mm/dd/yyy \n");
        return 1;
    }

    printf("You've entered the date %s %d, %.4d\n", months[m - 1], d, y);
    return 0;
}