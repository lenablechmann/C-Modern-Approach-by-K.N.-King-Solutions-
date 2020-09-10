// Declare a tag for an enumeration whose values  represent the 7 days of the week.
// Do it again but now with typedef.

#include <stdio.h>

int main(void)
{
    // a) just enum
    enum
    {
        MONDAY,
        TUESDAY,
        WEDNESDAY,
        THURSDAY,
        FRIDAY,
        SATURDAY,
        SUNDAY 
    } weekday;

    // b) sameish but with typedef
    // You need to choose which method you prefer, as declarations contradict each other.
    //typedef enum {MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY} week;

    return 0;
}
