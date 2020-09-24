// write a function sum(). The call sum(g, i, j), should return g(i) +...+ g(j)

#include <stdio.h>
#include <math.h> 

int sum(int (*f)(int), int start, int end);
int multiply(int number);

int main(void)
{
    int begin = 10, stop = 24;
    printf("The answer is %d.\n", sum(multiply, begin, stop));
}

// Going to add up all ints multiplied by themselves between 10 and 24 
int sum(int (*f)(int), int start, int end)
{
    int sum_all = 0;

    for(int i = start; i < end; i++)
    sum_all += multiply(i);

    return sum_all;
}

int multiply(int number)
{
    // just multiplies with itself.
    return number * number;
}