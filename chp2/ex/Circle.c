/**
 *  a program that reads in the radius
 * of a circle and prints the circle’s diameter, 
 * circumference and area. Use the constant value 3.14159
 * for π.  
 * */
#include <stdio.h>
int main(void)
{
    printf("%s", "Enter the radius of a circle:\n");
    float radius;
    scanf("%f", &radius);
    printf("Circle's diameter: %f\n", radius * 2);
    printf("Circle's circumference: %f\n", 2 * 3.14159 * radius);
    printf("Circle's circumference: %f\n", 3.14159 * radius * radius);
}