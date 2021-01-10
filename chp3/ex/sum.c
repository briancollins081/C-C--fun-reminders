/**
 * A program that calculates the sum of the integers from 1 to 10. 
 * Using the while statement to loop through the calculation and increment statements. 
 * The loop should terminate when the value of x becomes 11
 */
#include <stdio.h>

int main(void)
{
    int sum = 0;
    int x = 1;
    int value;
    while (x < 11)
    {
        printf("%s", "Enter an integer value: ");
        scanf("%d", &value);
        sum += value;
        x++;
    }
    printf("The total is: %d \n", sum);
}