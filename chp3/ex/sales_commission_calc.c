/**
 * A program that will input each salesperson’s gross sales 
 * for last week and will calculate and display that salesperson’s earnings. 
 * Process one salesperson's figures at a time.
 */
#include <stdio.h>

int main(void)
{
    float salary = 200;
    float sales = 0;
    while (sales != -1)
    {
        printf("%s", "Enter sales in dollars (-1 to end):");
        scanf("%f", &sales);
        if (sales == -1)
        {
            return 0;
        }
        printf("Salary is: $%.2f\n", salary + .09 * sales);
    }
}