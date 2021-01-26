/**
 * Pass functions as pointers to sort an array with bubble sort
 */
#include <stdio.h>
#define SIZE 10

void bubble(int work[], size_t size, int (*compare)(int a, int b));
int ascending(int a, int b);
int descending(int a, int b);

int main(void)
{
    int a[SIZE] = {77, 4, 1, 3, 9, 7, 23, 18, 11, 89};
    printf("%s", "Enter 1 to sort in ascending order or \n Enter 2 to sort in descending order: ");
    int order;
    scanf("%d", &order);
    puts("\nData items in orginal order");
    for (size_t counter = 0; counter < SIZE; counter++)
    {
        printf("%5d", a[counter]);
    }
    // sort an array in ascending or descending orders given the users choice
    if (order == 1)
    {
        bubble(a, SIZE, ascending);
        puts("\nData items in ascending order");
    }
    else
    {
        bubble(a, SIZE, descending);
        puts("\nData items in descending order");
    }

    for (size_t counter = 0; counter < SIZE; counter++)
    {
        printf("%5d", a[counter]);
    }
    puts("\n");
}

// Mutipurpose bubble sort with compare passed as a pointer to the correct sorting function
void bubble(int work[], size_t size, int (*compare)(int a, int b))
{
    void swapEls(int *element1Ptr, int *element2Ptr);
    for (size_t pass = 0; pass < size; pass++)
    {
        for (size_t count = 0; count < size - 1; count++)
        {
            if ((*compare)(work[count], work[count + 1]))
            {
                swapEls(&work[count], &work[count + 1]);
            }
        }
    }
}
void swapEls(int *element1Ptr, int *element2Ptr)
{
    int hold = *element1Ptr;
    *element1Ptr = *element2Ptr;
    *element2Ptr = hold;
}
int ascending(int a, int b)
{
    return b < a;
}
int descending(int a, int b)
{
    return a < b;
}