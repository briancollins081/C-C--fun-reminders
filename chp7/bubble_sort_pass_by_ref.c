/**
 * Putting values into an array, sorting the values into
 * ascending order and printing the resulting array.
 */
#include <stdio.h>
#define SIZE 10

void bubbleSort(int *const array, const size_t size);

int main(void)
{
    int a[SIZE] = {50, 16, 70, 18, 19, 17, 89, 68, 45, 37};
    puts("Original order of data items:");
    for (size_t i = 0; i < SIZE; ++i)
    {
        printf("%4d", a[i]);
    }

    bubbleSort(a, SIZE);
    puts("\nSorted items in ascending order: ");
    for (size_t i = 0; i < SIZE; ++i)
    {
        printf("%4d", a[i]);
    }
    puts("");
}

void bubbleSort(int *const array, const size_t size)
{
    void swapElements(int *element1Ptr, int *element2Ptr);

    for (unsigned int pass = 0; pass < size - 1; ++pass)
    {
        int swapped = 0;
        for (size_t i = 0; i < size - 1; ++i)
        {

            if (array[i] > array[i + 1])
            {
                swapped++;
                swapElements(&array[i], &array[i + 1]);
            }
        }
        if (swapped == 0)
        {
            break;
        }
    }
}

void swapElements(int *element1Ptr, int *element2Ptr)
{
    int hold = *element1Ptr;
    *element1Ptr = *element2Ptr;
    *element2Ptr = hold;
}
