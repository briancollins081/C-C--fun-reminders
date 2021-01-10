/**
 * a program that inputs one five-digit number, 
 * separates the number into its individual digits and prints 
 * the digits separated from one another by three spaces each. 
 * 34444
 */
#include <stdio.h>

int main(void)
{
    puts("Enter a five digit number to separate:");

    int fiveDigitNumber;
    scanf(" %d", &fiveDigitNumber);
    printf(" %d", fiveDigitNumber / 10000);
    printf(" %d", (fiveDigitNumber / 1000) % 10);
    printf(" %d", (fiveDigitNumber / 100) % 10);
    printf(" %d", (fiveDigitNumber / 10) % 10);
    printf(" %d", fiveDigitNumber % 10);
}