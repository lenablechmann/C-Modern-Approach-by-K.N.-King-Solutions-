#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	for (int i = 10; i > 1; i /= 2)
	{
		printf("%d\n", i++);
	}
		
	return 0;
} 
