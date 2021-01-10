/**
 * Sorting an array's values into ascending order
 * Question:
 * Make the following simple modifications to improve its performance.
 * a) After the first pass, the largest number is guaranteed to be in the highest-numbered element of the array;
 *    after the second pass, the two highest numbers are “in place,” and
 *    so on. Instead of making nine comparisons on every pass, modify the bubble sort to
 *    make eight comparisons on the second pass, seven on the third pass and so on.
 * b) The data in the array may already be in the proper or near-proper order, so why make
 *    nine passes if fewer will suffice? Modify the sort to check at the end of each pass whether
 *    any swaps have been made. If none has been made, then the data must already be in the
 *    proper order, so the program should terminate. If swaps have been made, then at least
 *    one more pass is needed.
 */
#include <stdio.h>
#define SIZE 20

int main(void)
{
    int a[SIZE] = {2, 6, 4, 10, 12, 8, 89, 68, 45, 37,
                   20, 16, 14, 19, 13, 81, 88, 108, 44, 30};
    puts("Data items in original order");

    for (size_t i = 0; i < SIZE; i++)
    {
        printf("%4d", a[i]);
    }

    for (unsigned int pass = 1; pass < SIZE - 1; ++pass)
    {
        unsigned int swapped = 0;
        for (size_t i = 0; i < SIZE - pass; i++)
        {
            if (a[i] > a[i + 1])
            {
                swapped += 1;
                int hold = a[i];
                a[i] = a[i + 1];
                a[i + 1] = hold;
            }
        }
        if (swapped == 0)
        {
            break;
        }
    }

    puts("\nData items in ascending order");

    for (size_t i = 0; i < SIZE; i++)
    {
        printf("%4d", a[i]);
    }
    puts("");
}