/* 
    write the function int *create_array(int n, int initial_value);
    the fu should return a pointer to a dynamically allocated int array with n members,
    should return null if nothing can be allocated.
*/

#include <stdio.h>
#include <stdlib.h> //memory related stuff
#include <string.h>

int *create_array(int n, int initial_value);

int main(void)
{
    int members = 20, initial = 3;
    int *array;
    array = create_array(members, initial);

    printf("There goes the array: ");
    if (array != NULL)
    {
        for (int i = 0; i < members; i++)
        printf("%d", *(array + i));
    }
    printf("\n");

    free(array);
    array = 0;
    return 0;
}


int *create_array(int n, int initial_value)
{
    int *local_array, *pointer;

    local_array = malloc(n * sizeof(int));
    pointer = local_array;

    if (local_array == NULL)
    {
        printf("Memory allocation failed.\n");
        return NULL;
    }

    for (int i = 0; i < n; i++)
    {
        *pointer = initial_value;
        pointer++;
    }
    pointer = 0;

    return local_array;
    
    
}