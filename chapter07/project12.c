#include <stdio.h>
#include <ctype.h>

// Just a program that allows the user to calculate simple arithmetic expressions
// in format of [float]operand[float]operand[float]operand

int main(void)
{
	float num1, num2, num3, op1 = 0, op2 = 0;
	char sign1, sign2;

	printf("Enter a simple equation with 3 numbers and two operators like 1.2+3.3*4: ");
	scanf("%f%c%f%c%f", &num1, &sign1, &num2, &sign2, &num3);

	switch (sign1)
	{
		case '+': op1 = num1 + num2;
			  break;
		case '-': op1 = num1 - num2;
			  break;
		case '*': op1 = num1 * num2;
			  break;
		case '/': op1 = num1 / num2;
			  break;
		default: break;
	}

	switch (sign2)
	{
		case '+': op2 = op1 + num3;
			  break;
		case '-': op2 = op1 - num3;
			  break;
		case '*': op2 = op1 * num3;
			  break;
		case '/': op2 = op1 / num3;
			  break;
		default: break;
	}
	printf("The result is: %f\n", op2);
return 0;
}
