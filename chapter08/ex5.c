
// Prints out a sequence of Fibonacci numbers in an array[40]

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(void)
{
    int fib_numbers[40] = {[0] = 0, [1] = 1};

    printf("Here are is a Fibonacci sequence: \n");
    for (int i = 2; i < 40; i++)
    {
       fib_numbers[i] = fib_numbers[i - 2] + fib_numbers[i - 1];
       printf(" %d,", fib_numbers[i]);
    }
    printf("\n");
    return 0;
}