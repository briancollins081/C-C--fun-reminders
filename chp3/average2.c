/**
 * Calculate class average
 * Use sentinel-controlled method
 */

#include <stdio.h>

int main(void)
{
    unsigned int counter = 0;
    int grade;
    int total = 0;

    float average;
    printf("%s", "Enter grade, or -1 to quit: ");
    scanf("%d", &grade);
    while (grade != -1)
    {
        total += grade;
        counter += 1;
        printf("%s", "Enter grade, or -1 to quit: ");
        scanf("%d", &grade);
    }

    if (counter != 0)
    {
        average = (float)total / counter; //prvents truncation
        printf("Class average is %.2f\n", average);
    }
    else
    {
        puts("No grades were entered");
    }
}