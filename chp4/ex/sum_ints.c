/**
 * A program that sums a sequence of integers. 
 * Assume that the first integer read with scanf specifies the number of values remaining to be entered. 
 * Your program should read only one value each time scanf is executed
 */

#include <stdio.h>
int main(void)
{
    unsigned int count;
    int value;
    int sum = 0;
    printf("Enter the number of integers to be keyed in:");
    scanf("%d", &count);
    while (count > 0)
    {
        printf("Enter an integer to be added:");
        scanf("%d", &value);
        sum += value;
        --count;
    }
    printf("The total sum of the values is: %d\n", sum);
}