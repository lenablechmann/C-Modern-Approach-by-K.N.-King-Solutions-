// Modify maxmin in such a way that the function uses a pointer intstead of an int to keep track of the position in the array.

/* maxmin.c (Chapter 11, page 250) */
/* Finds the largest and smallest elements in an array */

#include <stdio.h>

#define N 5

void max_min(int a[], int n, int *max, int *min);

int main(void)
{
  int b[N], i, big, small;

  printf("Enter %d numbers: ", N);
  for (i = 0; i < N; i++)
    scanf("%d", &b[i]);

  max_min(b, N, &big, &small);

  printf("Largest: %d\n", big);
  printf("Smallest: %d\n", small);

  return 0;
}

void max_min(int a[], int n, int *max, int *min)
{
  int i, *ptr;

  *max = *min = a[0];
  for (ptr = a + 1; ptr < a + n; ptr++) {
    if (*ptr > *max)
      *max = *ptr;
    else if (*ptr < *min)
      *min = *ptr;
  }
}
