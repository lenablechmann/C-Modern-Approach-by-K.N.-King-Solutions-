#include <stdio.h>
#include <stdlib.h>

// Modifies Chapter 5 broker.c with loop de loops.

int main(void)
{
    float commission, value;
    printf("Enter value of trade: ");
    scanf("%f", &value);

    while (value > 0)
    {
	    if (value < 2500.0)
		{
		commission = 30.0 + .017 * value;
		}
	    else if (value < 6250.0)
		{
		commission = 56.0 + .0066 * value;
		}
	    else if (value < 20000.0)
		{
		commission = 76.0 + .0034 * value;
		}
	    else if (value < 50000.0)
		{
		commission = 100.0 + .0022 * value;
		}
	    else if (value < 500000.0)
	    	{
		commission = 155.0 + .0011 * value;
		}
	    else
		{
		commission = 255.0 + .0009 * value;
		}
	    if (commission < 39.0)
	    commission = 39.0;

	printf("Commission is $%.2f\n", commission);
	printf("Enter value of trade: ");
	scanf("%f", &value);
    }

    return 0;
}
