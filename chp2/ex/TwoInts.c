/* A program that asks the user to enter two integers, obtains the numbers from the user, 
then prints the larger number followed by the words “is larger.” 
If the numbers are equal, print the message “These numbers are equal.”  */
#include <stdio.h>

int main(void)
{
    int firstInt, secondInt;
    puts("Enter 2 integers to compare:");
    scanf("%d %d", &firstInt, &secondInt);
    if (firstInt > secondInt)
    {
        printf("%d is larger\n", firstInt);
    }
    if (firstInt < secondInt)
    {
        printf("%d is larger\n", secondInt);
    }
    if (firstInt == secondInt)
    {
        puts("Thes numbers are equal");
    }
}