#include <stdio.h>
#define SIZE 5

int main(void)
{
    int n[SIZE] = {19, 22, 45, 21, 12};
    printf("%s%13s%17s\n", "Element", "Value", "Histogram");
    for (size_t i = 0; i < SIZE; i++)
    {
        printf("%7lu%13d           ", i+1, n[i]);
        for (size_t j = 0; j < n[i]; j++)
        {
            printf("%c", '*');
        }
        puts("");
    }
}