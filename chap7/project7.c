#include <stdio.h>
#include <ctype.h>

// This program allows users to type in fractions and do various calculations with them.
int main(void)
{
	float num1, denom1, num2, denom2;
	char sign;

	printf("Enter two fractions and an arithmetic operator (for example 35/7 + 4/5): ");
	scanf("%d/%d %c %d/%d", &num1, &denom1, &sign, &num2, &denom2);

	switch (sign)
	{
		case '+': printf("The result is %f\n", (num1 / denom1) + (num2 / denom2));
			  break;
		case '-': printf("The result is %f\n", (num1 / denom1) - (num2 / denom2));
			  break;
		case '*': printf("The result is %f\n", (num1 / denom1) * (num2 / denom2));
			  break;
		case '/': printf("The result is %f\n", (num1 / denom1) / (num2 / denom2));
			  break;
		default: break;
	}
return 0;
}
