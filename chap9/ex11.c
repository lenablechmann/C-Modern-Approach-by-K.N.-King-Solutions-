// The exercise wants you to write a function, that returns the average of grades.

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define LENGTH 40
float compute_GPA(char grades[], int n);

int main(void)
{
    char grades[LENGTH] = {0};
   
    int n = LENGTH;

    printf("Enter all of the students grades (A to F, letters only, no spaces):");

    grades[0] = getchar();
    for(int i = 0; i < n; i++)
    {
        if (isalpha(grades[i]) && toupper(grades[i]) <= 'F')
        grades[i + 1] = getchar();
        else
        continue;
    }
    printf("This is the average of grades %.2f\n", compute_GPA(grades, n));
 return 0;
}
    


float compute_GPA(char grades[], int n)
{
    float sum = 0.0;
    int count = 0; //we need the count because n is the max length
    for (int i = 0; i < n; i++)
    {
        switch (toupper(grades[i]))
        {
        case 'A': sum += 4; count++; break;
        case 'B': sum += 3; count++; break;
        case 'C': sum += 2; count++; break;
        case 'D': sum += 1; count++; break;
        case 'F': sum += 0; count++; break;
        default: break;
        }
    }
    
    return sum/count;
}