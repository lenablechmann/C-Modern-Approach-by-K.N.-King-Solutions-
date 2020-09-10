#include <stdio.h>
#include <ctype.h>

// This program is supposed to print out sizes of various types.
int main(void)
{
	printf("This is the size of an int %zu \n", sizeof(int)); // %zu can show the size without an int cast.
	printf("This is the size of a short  %zu \n", sizeof(short));
	printf("This is the size of an long  %zu \n", sizeof(long));
	printf("This is the size of an float  %zu \n", sizeof(float));
	printf("This is the size of an double %zu \n", sizeof(double));
	printf("This is the size of an long double %zu \n", sizeof(long double));
	return 0;
}
