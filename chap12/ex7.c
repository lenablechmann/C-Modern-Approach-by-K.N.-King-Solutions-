/* 
    write a search function, where a is an array to be searched
    n is the number of elements in the array
    key is the search key
    search should return true if key matches an element in a. 
    use pointer arithmetic for searching.
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

#define N 5

bool search(const int a[], int n, int key);

int main(void)
{
    int a[N] = {0}, *ptr, key;
    
    printf("Enter an array of %d integers: ", N);
    for(ptr = a; ptr < a + N; ptr++)
        scanf(" %d", ptr); // Don't need & cause ptr is a pointer.
    
    printf("Enter the key you want to search for: ");
    scanf("%d", &key);

    if (search(a, N, key) == true) 
    printf("The key %d is in the array. \n", key);
    else if (search(a, N, key) == false) 
    printf("The key %d is NOT in the array. \n", key);

    return 0;
}

// Linear search because the array aint sorted, and has to stay const according to the book.
bool search(const int a[], int n, int key)
{
    const int *p = a;

    for (p = a; p < a + N; p++)
    {
        if (*p == key)
        return true;
        else continue;
    }

    return false;
}