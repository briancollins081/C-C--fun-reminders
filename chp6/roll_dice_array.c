#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 7

int main(void)
{
    unsigned int frequency[SIZE] = {0};
    srand(time(NULL));
    for (unsigned int roll = 1; roll < 60000000; ++roll)
    {
        size_t face = 1 + rand() % 6;
        ++frequency[face];
    }
    printf("%s%17s\n", "Face", "Frequency");
    for (size_t i = 1; i < SIZE; i++)
    {
        printf("%4lu%14d\n", i, frequency[i]);
    }
    
}