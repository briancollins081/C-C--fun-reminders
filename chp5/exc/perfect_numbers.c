/**
 * A program that determines and prints all the perfect numbers between 1 and 1000. 
**/
#include <stdio.h>

int is_perfect(unsigned int);

int main(void)
{
    unsigned int perfect_count = 0;
    printf("%s\n", "Print all the perfect numbers between 1 - 1000");
    for (int num = 1; num <= 1000; num++)
    {
        if (is_perfect(num) == 1)
        {
            perfect_count++;
            printf("%d ", num);
            if (perfect_count % 6 == 0)
            {
                puts("");
            }
        }
    }
}

int is_perfect(unsigned int number)
{
    unsigned int is_perfect = 0;
    for (unsigned int i = 1; i <= number; i++)
    {
        unsigned int sum = 0;
        if (number % i == 0)
        {
            sum += i;
            if (sum == number)
            {
                is_perfect = 1;
                break;
            }
        }
    }
    return is_perfect;
}