/**
 * Pass by value & pass by reference using pointers
 */
#include <stdio.h>

int cubeByValue(int n);
int cubeByReference(int *nPtr);

int main(void)
{
    int number = 5;
    printf("Original number is %d\n", number);
    number = cubeByValue(number);
    printf("Number after pass by value: %d\n", number);

    int number2 = 10;
    printf("Original number2 is %d\n", number2);
    number = cubeByReference(&number2);
    printf("Number2 after pass by reference: %d\n", number2);
}

int cubeByValue(int n)
{
    return n * n * n;
}
int cubeByReference(int *nPtr)
{
    *nPtr = *nPtr * *nPtr * *nPtr;
}
