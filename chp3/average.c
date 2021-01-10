/**
 * Class average using counter-controlled iteration
 */
#include <stdio.h>
int main(void)
{
    unsigned int counter = 1;
    int grade = 0;
    int total = 0;
    int average = 0;

    while (counter <= 10)
    {
        printf("%s", "Enter grade: ");
        scanf("%d", &grade);
        total += grade;
        counter += 1;
    }

    average = total / 10;
    printf("Class average is %d \n", average);
}