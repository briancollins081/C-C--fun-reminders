/**
 * A program that calculates and prints the sum
 * of the even integers from between two given numbers
 */
#include <stdio.h>

int main(void)
{
    int greater, smaller;
    int sum = 0;
    printf("%s", "Enter the first integer value: ");
    scanf("%d", &greater);
    printf("%s", "Enter the second integer value: ");
    scanf("%d", &smaller);
    if (greater < smaller)
    {
        int temp = greater;
        greater = smaller;
        smaller = temp;
    }
    int count = smaller;
    while (count <= greater)
    {
        if (count % 2 == 0)
        {
            sum += count;
        }
        count++;
    }

    printf("The total sum of all event numbers between %d and %d is %d \n", smaller, greater, sum);
}