/**
 * Creating and using a programmer-defined function.
 * */
#include <stdio.h>

int square(int y); //function prototype

int main(void)
{
    for (int x = 1; x <= 10; x++)
    {
        printf("%d ", square(x));
    }
    puts("");
}

int square(int y)
{
    return y * y;
}