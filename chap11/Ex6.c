#include <stdio.h>
#include <stdint.h>
#include <ctype.h>

#define N 5

void find_two_largest(int *a, int n, int *largest, int *second_largest);

int main(void)
{
    int a[N] ={0};
    int user_input, largest, second_largest;
    printf("Enter %d integers you'd like to store in an array: \n", N);
    for(int i = 0; i < N; i++) 
    {
       scanf(" %d", &user_input);
       a[i] = user_input;
    }
    find_two_largest(a, N, &largest, &second_largest);
    printf("%d is the largest element and %d is the second largest. \n", largest, second_largest);
    return 0;
}

// When passed an array of length n, the function will search the array for the largest
// And second largest elements storing them in corresponding variables.
void find_two_largest(int *a, int n, int *largest, int *second_largest)
{
   *second_largest = *largest = a[0];
   for (int i = 0; i < n; i++) // i = 0 because we already set em to a[0] before the loop
   {
       if (a[i] >= *largest)
       *largest = a[i];
   }
   for (int i = 0; i < n; i++) // i = 0 because we already set em to a[0] before the loop
   {
       if (a[i] < *largest && a[i] >= *second_largest)
       *second_largest = a[i];
   }
}
