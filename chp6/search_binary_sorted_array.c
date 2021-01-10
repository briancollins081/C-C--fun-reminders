/**
 * Binary search of a sorted array
 */
#include <stdio.h>
#define SIZE 15

size_t binarySearch(const int b[], int searchKey, size_t low, size_t high);
void printHeader(void);
void printRow(const int b[], size_t low, size_t mid, size_t high);

int main(void)
{
    int a[SIZE];
    for (size_t i = 0; i < SIZE; i++)
    {
        a[i] = 2 * i;
    }
    printf("%s", "Enter a number between 0 and 28: ");
    int key;
    scanf("%d", &key);

    printHeader();

    size_t result = binarySearch(a, key, 0, SIZE - 1);

    if (result != -1)
    {
        printf("\n%d found at index %ld\n", key, result);
    }
    else
    {
        printf("\n%d not found\n", key);
    }
}

size_t binarySearch(const int b[], int searchKey, size_t low, size_t high)
{
    size_t returnVal = -1;
    while (low <= high)
    {
        size_t middle = (low + high) / 2;
        printRow(b, low, middle, high);
        if (searchKey == b[middle])
        {
            returnVal = middle;
            break;
        }
        else if (searchKey < b[middle])
        {
            high = middle - 1;
        }
        else
        {
            low = middle + 1;
        }
    }
    return returnVal;
}

void printHeader(void)
{
    puts("\nIndices:");
    for (size_t i = 0; i < SIZE; i++)
    {
        printf("%3lu ", i);
    }
    puts("");
    for (size_t i = 0; i < 4 * SIZE; i++)
    {
        printf("%s", "-");
    }
    puts("");
}

void printRow(const int b[], size_t low, size_t mid, size_t high)
{
    for (size_t i = 0; i < SIZE; ++i)
    {
        if (i < low || i > high)
        {
            printf("%s", "   ");
        }
        else if (i == mid)
        {
            printf("%3d*", b[i]);
        }
        else
        {
            printf("%3d ", b[i]);
        }
    }
    puts("");
}