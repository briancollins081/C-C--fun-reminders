/**
 * Calculate x raised to the y power. 
 * The program should have a while iteration control statement.
 */
#include <stdio.h>

int main(void)
{
    unsigned int x, y;
    printf("%s", "Enter the value x: ");
    scanf("%u", &x);
    printf("%s", "Enter the value y: ");
    scanf("%u", &y);
    unsigned int i = 1;
    unsigned int power = 1;
    power *= x;
    while (i < y)
    {
        power *= x;
        ++i;
    }
    printf("x to the power of y is: %d\n", power);
}
