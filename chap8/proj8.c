
// Fills a 5x5 array with user input then sums up rows and columns separately.
// modifies project 7: every row is a student, every column is a quiz grade.
// calculates total and average scores for every student,
// average, high and low scored for every quiz.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int grades_array[5][5];
    int sum_students[5], sum_quizzes[5];
    float avg_student, avg_quizzes;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter 5 student %d grades: ", i + 1);

        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &grades_array[i][j]);
        }
    }

    for (int student = 0; student < 5; student++)
    {
        for (int quiz = 0; quiz < 5; quiz++)
        {
            sum_students[student] += grades_array[student][quiz];
        }
        printf("Student %d total is %d, average is %.2f\n ", student + 1, sum_students[student], sum_students[student] / 5.0);
    }
    printf("\n");

    // inverting rows and columns to find the sum of columns.

    for (int quiz = 0; quiz < 5; quiz++)
    {
        int high = 0, low = 100;

        for (int student = 0; student < 5; student++)
        {
            sum_quizzes[quiz] += grades_array[student][quiz];
            if (grades_array[student][quiz] > high)
            {
                high = grades_array[student][quiz];
            }
            if (grades_array[student][quiz] < low)
            {
                low = grades_array[student][quiz];
            }
        }
        printf("Quiz %d average is %.2f, highest score is %d and the lowest is %d\n ", quiz + 1, sum_quizzes[quiz] / 5.0, high, low);
    }
    printf("\n");
    return 0;
}