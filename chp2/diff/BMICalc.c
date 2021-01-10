/**
 * A BMI calculator application that reads the user’s weight in 
 * pounds and height in inches (or, if you prefer, the user’s weight in 
 * kilograms and height in meters), then calculates and displays
 * the user’s body mass index.
 **/
#include <stdio.h>
int main(void)
{
    puts("Enter your weight in kilograms(kgs):");
    double weightKgs;
    scanf("%lf", &weightKgs);
    puts("Enter your height in meters(m)");
    double heightMs;
    scanf("%lf", &heightMs);
    double bmi = weightKgs / (heightMs * heightMs);
    printf("Your BMI:\t%lf\n", bmi);
    puts("BMI VALUES");
    if (bmi < 18.5)
    {
        puts("Underweight:\tless than 18.5");
    }
    if (bmi >= 18.5 && bmi <= 24.9)
    {
        puts("Normal:\tbetween 18.5 and 24.9");
    }
    if (bmi >= 25 && bmi <= 29.9)
    {
        puts("Overweight:\tbetween 25 and 29.9");
    }
    if (bmi >= 30)
    {
        puts("Obese:\t30 or greater");
    }
}