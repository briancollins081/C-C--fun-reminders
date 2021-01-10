/**
 * Use a one-dimensional array to solve the following problem. 
 * A company pays its salespeople on a commission basis. 
 * The salespeople receive $200 per week plus 9% of their gross sales for that week. 
 * For example, a salesperson who grosses $3,000 in sales in a week receives 
 * $200 plus 9% of $3,000, or a total of $470. Write a C program (using an array of counters)
 * that determines how many of the salespeople earned salaries in each of the following ranges (assume
 * that each salesperson’s salary is truncated to an integer amount):
 */
#include <stdio.h>
#define FIXED_SALARY 200
#define RANGE_SIZE 9

size_t getRangeIndex(unsigned int totalAmt, const unsigned int rangesArray[]);
unsigned long int getGrossSalary(unsigned int salesAmt);

int main(void)
{
    unsigned int frequency[RANGE_SIZE] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned int ranges[RANGE_SIZE] = {200, 300, 400, 500, 600, 700, 800, 900, 1000};

    long int individualSalesAmt = 0;
    do
    {
        printf("%s", "Enter the employee sales amount in $ or -1 to quit: ");
        scanf("%ld", &individualSalesAmt);

        unsigned long int totalEarnings = getGrossSalary(individualSalesAmt);

        size_t frequencyIndex = getRangeIndex(totalEarnings, ranges);
        if (frequencyIndex >= 0)
        {
            frequency[frequencyIndex] += 1;
        }
    } while (individualSalesAmt >= 0);

    puts("\n\nThe salary ranges are as follows:\n\n");
    printf("%s%26s\n", "Range(s)", "Frequency");
    for (size_t i = 0; i < RANGE_SIZE; i++)
    {
        if (i < (RANGE_SIZE - 1))
        {
            printf("$%5u  -%5u%20u\n", ranges[i], ranges[i] + 99, frequency[i]);
        }else{
            printf("$%5u     and above %13u\n", ranges[i], frequency[i]);

        }
    }
}

unsigned long int getGrossSalary(unsigned int salesAmt)
{
    if (salesAmt > 0)
    {
        return (FIXED_SALARY + (0.09 * salesAmt));
    }
    else
    {
        puts("\nPlease enter valid sales amount!\n");
        return 0;
    }
}

size_t getRangeIndex(unsigned int totalAmt, const unsigned int rangesArray[])
{
    // printf("ranges array[2]: %u\n salesAmount %u\n", rangesArray[2], totalAmt);

    if (totalAmt < rangesArray[0])
    {
        return -1;
    }
    else if (totalAmt >= 1000)
    {
        return 8;
    }
    else
    {
        for (size_t i = 0; i < RANGE_SIZE - 1; ++i)
        {
            if (totalAmt >= rangesArray[i] && totalAmt < rangesArray[i + 1])
            {
                return i;
            }
        }
    }
}