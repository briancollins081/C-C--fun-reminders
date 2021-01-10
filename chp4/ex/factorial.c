/**
 * Factorial of 1-5 listing ansers in tabular format
 */
#include <stdio.h>

int main(void)
{
    int x = 1, y = 5;
    printf("%7s %20s\n", "Number", "Factorial");
    while (x <= y)
    {
        unsigned long long factorial = 1;
        for (int i = 1; i <= x; i++)
        {
            factorial *= i;
        }
        printf("%7d %10lld\n", x, factorial);
        x++;
    }
}