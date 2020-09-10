#include <stdio.h>

#define N 5
// correcting a function
// avoid brackets [] for arrays if you use pointers.
void avg_sum(double *a, int n, double *avg, double *sum);

//void avg_sum(double a[], int n, double *avg, double *sum);
int main(void)
{
    double avg, sum, a[N] = {1, 2, 3, 5.5, 6.4};
    avg_sum(a, N, &avg, &sum);
    printf("This is the average %lf\n", avg);

    return 0;
}

//void avg_sum(double a[], int n, double *avg, double *sum)
void avg_sum(double *a, int n, double *avg, double *sum)
{
    int i;
    *sum = 0.0;

    for(i = 0; i < N; i++)
    {
        *sum += a[i];
    }
    *avg = *sum / N;
}