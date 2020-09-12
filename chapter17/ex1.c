// Writing a malloc function that calls malloc, checks for NULL and returns the malloc pointer.

#include <stdio.h>
#include <stdlib.h> //memory related stuff

void *my_malloc(size_t size);

int main(void)
{

}

void *my_malloc(size_t size)
{
    // malloc returns a void pointer so we need to choose this type
    void *p;
    
    p = my_malloc(size);
    if(p == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }

    return p;
}
