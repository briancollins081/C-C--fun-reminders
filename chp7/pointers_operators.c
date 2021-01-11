/**
 * Using the & and * pointer operators.
 */

#include <stdio.h>

int main(void)
{
    int a = 7;
    int *aPtr = &a;

    printf("The address of a is %p\nThe value of aPtr is %p\n", &a, aPtr);

    printf("The value of a is %d\nThe value of *aPtr is %d\n", a, *aPtr);

    printf("\n\nShowing that * and & are complements of "
           "each other\n&*aPtr = %p"
           "\n*&aPtr = %p\n",
           &*aPtr, *&aPtr);
}