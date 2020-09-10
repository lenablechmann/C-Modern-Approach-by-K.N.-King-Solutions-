#include <stdio.h>

// User gives a 12 h time, we give em 24.

int main(void)
{
	int hours, min;
	char daytime;
	printf("Enter 12 hour time (like 11:11 PM) : ");

	// Added a whitespace before %c so that it can skip zero to infinity blanks.
	scanf("%d:%d %c", &hours, &min, &daytime);

	if (daytime == 'P' || daytime == 'p')
		printf("Did you mean %2d:%2d?\n", hours + 12, min);

	if (daytime == 'A' || daytime == 'a')
		printf("Did you mean %2d:%2d?\n", hours, min);
	

	return 0;
}
