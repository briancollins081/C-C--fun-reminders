/**
 * A program that will input the miles driven and gallons used for each tankful.
 * The program should calculate and display the miles per gallon obtained for each tankful.
 * After processing all input information, the program should calculate and print the combined miles 
 * per gallon obtained for all tankfuls. 
 */
#include <stdio.h>
int main(void)
{
    unsigned int miles, miles_per_gallon_counter = 1;
    float gallons = 0;
    double miles_per_gallon = 0, miles_per_gallon_total = 0;

    while (gallons >= 0)
    {
        printf("%s", "Enter the gallons used (-1 to end):");
        scanf("%f", &gallons);
        if (gallons == -1)
        {
            break;
        }
        printf("%s", "Enter the miles driven:");
        scanf("%u", &miles);
        miles_per_gallon = (double)gallons / miles;
        miles_per_gallon_total += miles_per_gallon;
        printf("The miles/gallon for this tank was %.6lf\n", miles_per_gallon);
        miles_per_gallon_counter++;
    }
    double average_miles_per_gallon = miles_per_gallon_total / miles_per_gallon_counter;
    printf("The overal average miles/gallon was %.6lf\n", average_miles_per_gallon);
}