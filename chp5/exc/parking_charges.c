/**
 * A program that will calculate and print the parking charges for each of three 
 * customers who parked their cars in this garage yesterday. You should enter 
 * the hours parked for each customer. Your program should print the results in 
 * a tabular format, and should calculate and print the total of yesterday's receipts. 
 * The program should use the function calculateCharges to determine the charge for each customer
 **/
#include <stdio.h>

double calculateCharges(float totalHrs);

int main()
{
    float car_1_hrs;
    float car_2_hrs;
    float car_3_hrs;
    // double car_1_price;
    // double car_2_price;
    // double car_3_price;
    printf("%s", "Enter parking hours for car 1: ");
    scanf("%f", &car_1_hrs);
    printf("%s", "Enter parking hours for car 2: ");
    scanf("%f", &car_2_hrs);
    printf("%s", "Enter parking hours for car 3: ");
    scanf("%f", &car_3_hrs);

    printf("%s %20s %20s\n", "Car", "Hours", "Charge");
    printf("%s %20.1f %20.2lf\n", "1", car_1_hrs, calculateCharges(car_1_hrs));
    printf("%s %20.1f %20.2lf\n", "2", car_2_hrs, calculateCharges(car_2_hrs));
    printf("%s %20.1f %20.2lf\n", "2", car_3_hrs, calculateCharges(car_3_hrs));
    double total_charge = calculateCharges(car_1_hrs) + calculateCharges(car_2_hrs) + calculateCharges(car_3_hrs);
    float total_hrs = car_3_hrs + car_2_hrs + car_1_hrs;
    printf("%s %16.1f %20.2lf\n", "TOTAL", total_hrs, total_charge);
}

double calculateCharges(float total_hrs)
{
    float hrs_over_3 = total_hrs - 3;
    double total_price = 2;
    if (hrs_over_3 > 0)
    {
        total_price += hrs_over_3 * 0.15;
        if (total_price > 10)
        {
            total_price = 10;
        }
    }
    return total_price;
}