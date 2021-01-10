/* Using 
    1. relational 
    2. if statements 
    3. equality operators
*/
#include <stdio.h>

int main(void)
{
    printf("Enter two integers and I will tell you \nthe relationship they satisy\n");
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    if (num1 == num2)
    {
        printf("%d is equal to %d\n", num1, num2);
    }
    if (num1 != num2)
    {
        printf("%d is not equal to %d\n", num1, num2);
    }
    if (num1 < num2)
    {
        printf("%d is less than %d\n", num1, num2);
    }
    if (num1 > num2)
    {
        printf("%d is greater than %d\n", num1, num2);
    }
    if (num1 <= num2)
    {
        printf("%d is less than or equal to %d\n", num1, num2);
    }
    if (num1 >= num2)
    {
        printf("%d is greater than or equal to %d\n", num1, num2);
    }
}