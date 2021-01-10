/**
 * Two-dimensional array manipulations.
 */
#include <stdio.h>
#define STUDENTS 3
#define EXAMS 4

int minimum(const int grades[][EXAMS], size_t pupils, size_t tests);
int maximum(const int grades[][EXAMS], size_t pupils, size_t tests);
double average(const int setOfGrades[], size_t tests);
void printArray(const int grades[][EXAMS], size_t pupils, size_t tests);

int main(void)
{
    int studentsGrades[STUDENTS][EXAMS] = {{77, 68, 86, 73}, {96, 87, 89, 78}, {70, 90, 86, 81}};
    puts("The array is:");
    printArray(studentsGrades, STUDENTS, EXAMS);

    printf("\n\nLowest grade: %d\nHighest grade: %d\n", minimum(studentsGrades, STUDENTS, EXAMS), maximum(studentsGrades, STUDENTS, EXAMS));

    for (size_t i = 0; i < STUDENTS; ++i)
    {
        printf("The average grade for student %lu is %.2f\n", i, average(studentsGrades[i], EXAMS));
    }
}

int minimum(const int grades[][EXAMS], size_t pupils, size_t tests)
{
    int lowGrade = grades[0][0];
    for (size_t i = 0; i < pupils; ++i)
    {
        for (size_t g = 0; g < tests; ++g)
        {
            if (grades[i][g] < lowGrade)
            {
                lowGrade = grades[i][g];
            }
        }
    }
    return lowGrade;
}

int maximum(const int grades[][EXAMS], size_t pupils, size_t tests)
{
    int highGrade = grades[0][0];
    for (size_t i = 0; i < pupils; ++i)
    {
        for (size_t g = 0; g < tests; ++g)
        {
            if (grades[i][g] > highGrade)
            {
                highGrade = grades[i][g];
            }
        }
    }
    return highGrade;
}
double average(const int setOfGrades[], size_t tests)
{
    int total = 0;
    for (size_t i = 0; i < tests; i++)
    {
        total += setOfGrades[i];
    }

    return (double)total / tests;
}

void printArray(const int grades[][EXAMS], size_t rows, size_t cols)
{
    printf("%s", "                  [0] [1] [2] [3]");
    for (size_t i = 0; i < rows; ++i)
    {
        printf("\nstudentGrades[%lu]  ", i);
        for (size_t j = 0; j < cols; ++j)
        {
            printf("%-4d", grades[i][j]);
        }
        
    }
    
}
