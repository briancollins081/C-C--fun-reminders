/**
 * a program that reads in two integers and determines and 
 * prints whether the first is a multiple of the second.
 */
#include <stdio.h>
int main(void)
{
    int firstInt, secondInt;
    puts("Enter two integres separated by space: ");
    scanf("%d %d", &firstInt, &secondInt);
    if(firstInt % secondInt == 0){
        printf("%d is a multiple of %d\n", firstInt, secondInt);
    }
}