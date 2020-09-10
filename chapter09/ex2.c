// practicing writing functions

#include <stdio.h>

int check(int x, int y, int n) 
{
    // Trying to find out wether x and y are between 0 and n - 1.
    // Checked official answer, apparently I could have used "return" instead of "if"
    if (x > 0 && x < n - 1 && y > 0 && y < n - 1)
    return 1;
    return 0;
}

int main(void)
{
    int x, y, n;
    printf("Enter three integers: ");
    scanf("%d%d%d", &x, &y, &n);

    if (check(x, y, n)) // if true, then 1
    printf("%d and %d are between 0 and %d - 1\n", x, y, n);
    else
    printf("%d and %d are NOT between 0 and %d - 1\n", x, y, n);
    
    return 0;
}