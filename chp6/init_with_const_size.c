#include <stdio.h>

#define SIZE 5

int main(void)
{
    int s[SIZE];

    for (size_t i = 0; i < SIZE; i++)
    {
        s[i] = 2 + 2 * i;
    }

    printf("%s%13s\n", "Element", "Value");

    for (size_t i = 0; i < SIZE; i++)
    {
        printf("%7lu%13d\n", i, s[i]);
    }
}