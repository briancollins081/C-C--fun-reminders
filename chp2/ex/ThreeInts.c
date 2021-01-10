/**
 * A program that inputs three different
 * integers from the keyboard, then prints the sum, 
 * the average, the product, the smallest and the largest of these numbers. 
*/
#include <stdio.h>

int main(void)
{
    int integer1, integer2, integer3;
    printf("%s", "Enter three different integers: ");
    scanf("%d %d %d", &integer1, &integer2, &integer3);
    int sum = integer1 + integer2 + integer3;
    printf("Sum is %d\n", sum);
    int average = sum / 3;
    printf("Average is %d\n", average);
    int product = integer1 * integer2 * integer3;
    printf("Product is %d\n", product);
    int smallest = integer1;
    if (smallest > integer2)
    {
        smallest = integer2;
        if (smallest > integer3)
        {
            smallest = integer3;
        }
    }
    else if (smallest > integer3)
    {
        smallest = integer3;
    }
    printf("Smallest is %d\n", smallest);
    int largest = integer1;
    if (largest < integer2)
    {
        largest = integer2;
        if (largest < integer3)
        {
            largest = integer3;
        }
    }
    else if (largest < integer3)
    {
        largest = integer3;
    }
    printf("Largest is %d\n", largest);
}