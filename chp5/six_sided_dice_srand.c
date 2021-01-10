/**
 *  Rolling a six-sided die 60,000,000 times.
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    unsigned int seed;
    printf("%s", "Enter seed: ");
    scanf("%u", &seed);
    srand(seed); //seed the rand no generator
    for (unsigned int i = 1; i <= 10; i++)
    {
        printf("%10d", 1 + (rand() % 6));
        if (i % 5 == 0)
        {
            puts("");
        }
    }
}