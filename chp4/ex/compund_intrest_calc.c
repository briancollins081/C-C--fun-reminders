/**
 * Calculating compound interest
 * a = p(1 + r)n
 */
#include <stdio.h>
#include <math.h>

int main(void)
{
    double principal = 1000;
    double rate = .05;
    while (rate <= 0.1)
    {
        printf("\n\n\nInterest rates of %lf \n\n\n", rate);
        printf("%4s%21s\n", "Year", "Amount on deposit");
        for (unsigned int year = 1; year <= 10; year++)
        {
            double amount = principal * pow(1.0 + rate, year);
            printf("%4u%21.2f\n", year, amount);
        }
        rate += 0.01;
    }
}