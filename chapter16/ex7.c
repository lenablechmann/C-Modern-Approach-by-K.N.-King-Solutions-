// Write various functions that perform operations on a fraction struct.
// reducing the fraction to the lowest terms, then functions for 2 fractions: +, -, /, *

#include <stdio.h>

struct fraction
{
    int numerator, denominator;
};
struct fraction frac, frac1, frac2;

struct fraction lowest_terms(int numerator, int denominator);
struct fraction add_fracs(struct fraction frac1, struct fraction frac2);
struct fraction subtract_fracs(struct fraction frac1, struct fraction frac2);
struct fraction multiply_fracs(struct fraction frac1, struct fraction frac2);
struct fraction divide_fracs(struct fraction frac1, struct fraction frac2);

int main(void)
{
    printf("Enter the first fraction in format x/y (x and y are integers): ");
    scanf("%d/%d", &frac1.numerator, &frac1.denominator);
    printf("Enter the second fraction in format x/y (x and y are integers): ");
    scanf("%d/%d", &frac2.numerator, &frac2.denominator);

    // a) lowest terms.
    lowest_terms(frac1.numerator, frac1.denominator);
    printf("So it's %d/%d actschully for your first fraction.\n", frac.numerator, frac.denominator);
    lowest_terms(frac2.numerator, frac2.denominator);
    printf("And it's %d/%d actschully for your second fraction.\n", frac.numerator, frac.denominator);

    // b) to d) adding, subtracting, multiplying and dividing
    frac = add_fracs(frac1, frac2);
    printf("The sum of your fractions is %d/%d.\n", frac.numerator, frac.denominator);
    frac = subtract_fracs(frac1, frac2);
    printf("The difference of the fractions is %d/%d.\n", frac.numerator, frac.denominator);
    frac = multiply_fracs(frac1, frac2);
    printf("The product of your fractions is %d/%d.\n", frac.numerator, frac.denominator);
    frac = divide_fracs(frac1, frac2);
    printf("The quotient of your fractions is %d/%d.\n", frac.numerator, frac.denominator);
    
    return 0;
}

struct fraction lowest_terms(int numerator, int denominator)
{
    int remain;
    int number1 = numerator;
    int number2 = denominator;

    // Finding the greatest common divisor
    while (denominator != 0)
    {
        remain = numerator % denominator;
        numerator = denominator;
        denominator = remain;
    }

    frac.numerator = number1 / numerator;
    frac.denominator = number2 / numerator;

    return frac;
}

// fraction addition and subtraction work criss cross.
struct fraction add_fracs(struct fraction frac1, struct fraction frac2)
{
    frac.numerator = (frac1.numerator * frac2.denominator) + (frac2.numerator * frac1.denominator);
    frac.denominator = frac1.denominator * frac2.denominator;

    return (lowest_terms(frac.numerator, frac.denominator));
}

struct fraction subtract_fracs(struct fraction frac1, struct fraction frac2)
{
    frac.numerator = (frac1.numerator * frac2.denominator) - (frac2.numerator * frac1.denominator);
    frac.denominator = frac1.denominator * frac2.denominator;

    return (lowest_terms(frac.numerator, frac.denominator));
}
struct fraction multiply_fracs(struct fraction frac1, struct fraction frac2)
{
    frac.numerator = frac1.numerator * frac2.numerator;
    frac.denominator = frac1.denominator * frac2.denominator;

    return (lowest_terms(frac.numerator, frac.denominator));
}

// for fraction division we just need to reverse the second fraction.
struct fraction divide_fracs(struct fraction frac1, struct fraction frac2)
{
    frac.numerator = frac1.numerator * frac2.denominator;
    frac.denominator = frac1.denominator * frac2.numerator;

    return (lowest_terms(frac.numerator, frac.denominator));
}