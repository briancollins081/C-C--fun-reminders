#include <stdio.h>

int main(void)
{
    int integer1, integer2;
    printf("Enter first number(integer)\n");
    scanf("%d", &integer1);

    printf("Enter second number(integer)\n");
    scanf("%d", &integer2);

    int sum;
    sum = integer1 + integer2;

    printf("The sum is %d\n", sum);
}