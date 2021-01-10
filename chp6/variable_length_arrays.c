/**
 * Using variable-length arrays in C99
 */
#include <stdio.h>

void print1DArray(size_t size, int array[size]);
void print2DArray(size_t row, size_t col, int array[row][col]);

int main(void)
{
    printf("%s", "Enter size of a one dimensional array: ");
    int arraySize;
    scanf("%d", &arraySize);

    int array[arraySize];

    printf("%s", "Enter number of rows and columns in a 2-D array: ");
    int row1, col1;
    scanf("%d %d", &row1, &col1);

    int array2D1[row1][col1];

    printf("%s", "Enter number of rows and columns in another 2-D array: ");
    int row2, col2;
    scanf("%d %d", &row2, &col2);

    int array2d2[row2][col2];

    printf("\nsizeof(array) yields array size of %ld bytes\n", sizeof(array));

    for (size_t i = 0; i < arraySize; ++i)
    {
        array[i] = i * i;
    }

    for (size_t i = 0; i < row1; ++i)
    {
        for (size_t j = 0; j < col1; ++j)
        {
            array2D1[i][j] = i + j;
        }
    }

    for (size_t i = 0; i < row2; ++i)
    {
        for (size_t j = 0; j < col2; ++j)
        {
            array2d2[i][j] = i + j;
        }
    }

    puts("\nOne dimensional array:");
    print1DArray(arraySize, array);

    puts("\nFirst two-dimensional array:");
    print2DArray(row1, col1, array2D1);

    puts("\nSecond two-dimensional array:");
    print2DArray(row2, col2, array2d2);
}

void print1DArray(size_t size, int array[size])
{
    for (size_t i = 0; i < size; i++)
    {
        printf("array[%lu] = %d\n", i, array[i]);
    }
}

void print2DArray(size_t row, size_t col, int array[row][col])
{
    for (size_t i = 0; i < row; ++i)
    {
        for (size_t j = 0; j < col; ++j)
        {
            printf("%5d", array[i][j]);
        }
        puts("");
    }
}
