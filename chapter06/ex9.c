#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i = 10;
	while (i > 1)
	{	
	printf("%d\n", i++);
		i /=2;
	}	
	return 0;
} 
