/**
 * Applying sizeof to an array name returns
 * the number of bytes in the array.
 */
#include <stdio.h>
#define SIZE 20

size_t getSize(float *ptr);

int main(void)
{
    float f = 50;
    float *ptrF = &f;
    printf("Number of bytes in f: %lu\n", sizeof(f));
    printf("Number of bytes in *ptrF: %lu\n", sizeof(*ptrF));
    printf("Number of bytes in ptrF: %lu\n", sizeof(ptrF));
    float array[SIZE];
    printf("Number of bytes in the array: %lu\nNumber of bytes returned by getSize is: %lu\n", sizeof(array), getSize(array));
}

size_t getSize(float *ptr){
    return sizeof(ptr);
}
