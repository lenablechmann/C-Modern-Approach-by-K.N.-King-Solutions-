/* Modifying qsort.c (Chapter 9, page 207) 
    Sorts an array of integers using Quicksort algorithm 
    Splitting it into several files instead of one. */

#include <stdio.h>
#include "quicksort.h"

#define N 5

int main(void)
{
  int a[N], i;

  printf("Enter %d numbers to be sorted: ", N);
  for (i = 0; i < N; i++)
    scanf("%d", &a[i]);

  quicksort(a, 0, N - 1);

  printf("In sorted order: ");
  for (i = 0; i < N; i++)
    printf("%d ", a[i]);
  printf("\n");

  return 0;
}
