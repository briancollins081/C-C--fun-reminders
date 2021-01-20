/**
 * Using indexing and pointer notations with arrays.
 */
#include <stdio.h>
#define ARRAY_SIZE 4

int main(void)
{
    int b[] = {10, 20, 30, 40};
    int *bPtr = b;

    puts("Print array b using array index notation:");
    for (size_t i = 0; i < ARRAY_SIZE; i++)
    {
        printf("b[%lu] = %d\n", i, b[i]);
    }

    puts("Print using pointer index notation where the pointer is the array name");

    for (size_t offset = 0; offset < ARRAY_SIZE; offset++)
    {
        printf("*(b + %lu) = %d\n", offset, *(b + offset));
    }

    puts("Print array using pointer index notation");

    for (size_t offset = 0; offset < ARRAY_SIZE; offset++)
    {
        printf("*(bPtr + %lu) = %d\n", offset, *(bPtr+offset));
    }
    
}