/**
 * Two-dimensional array manipulations.
 * 
 * Question:
 * 
 * Modify the program so function mode is capable of handling a tie for the mode value. 
 * Also modify function median so the two middle elements are averaged in an array with 
 * an even number of elements.
 */
#include <stdio.h>
#define SIZE 100

void mean(const unsigned int answer[]);
void median(unsigned int answer[]);
void mode(unsigned int freq[], unsigned const int answer[]);
void bubbleSort(unsigned int a[]);
void printArray(unsigned const int a[]);

int main(void)
{
    unsigned int frequency[10] = {0};
    unsigned int response[SIZE] = {
        6, 7, 8, 9, 8, 7, 8, 9, 8, 9, 7, 8, 9, 5, 9, 8, 7, 8, 7, 8,
        6, 7, 8, 9, 3, 9, 8, 7, 8, 7, 7, 8, 9, 8, 9, 8, 9, 7, 8, 9,
        6, 7, 8, 7, 8, 7, 9, 8, 9, 2, 7, 8, 9, 8, 9, 8, 9, 7, 5, 3,
        5, 6, 7, 2, 5, 3, 9, 4, 6, 4, 7, 8, 9, 6, 8, 7, 8, 9, 7, 8,
        7, 4, 4, 2, 5, 3, 8, 7, 5, 6, 4, 5, 6, 1, 6, 5, 7, 8, 7, 9};
    mean(response);
    median(response);
    mode(frequency, response);
}

void mean(const unsigned int answer[])
{
    printf("%s\n%s\n%s\n", "*******", " Mean", "********");
    unsigned int total = 0;
    for (size_t i = 0; i < SIZE; i++)
    {
        total += answer[i];
    }
    printf("The mean is the average value of the data\n"
           "items. The mean is equal to the total of\n"
           "all the data items divided by the number\n"
           "of data items (%u). The mean value for\n"
           "this run is: %u / %u = %.4f\n\n",
           SIZE, total, SIZE, (double)total / SIZE);
}

void median(unsigned int answer[])
{
    printf("\n%s\n%s\n%s\n%s", "*******", "Median", "********", "The unsorted array of responses is");
    printArray(answer);
    bubbleSort(answer);
    printf("\n\n%s", "The sorted array is");
    printArray(answer);
    unsigned int median = 0;
    if (SIZE % 2 == 0)
    {
        median = (answer[SIZE / 2 + 1] + answer[SIZE / 2]) / 2;
    }
    else
    {
        median = answer[((unsigned int)SIZE / 2) + 1];
    }

    printf("\n\nThe median is element %u of\n"
           "the sorted %u element array.\n"
           "For this run the median is %u\n\n",
           SIZE / 2, SIZE, median);
}

void mode(unsigned int freq[], unsigned const int answer[])
{
    printf("\n%s\n%s\n%s\n", "********", " Mode", "********");
    for (size_t i = 1; i <= 9; i++)
    {
        freq[i] = 0;
    }

    for (size_t j = 0; j < SIZE; j++)
    {
        ++freq[answer[j]];
    }
    printf("%s%11s%19s\n\n%54s\n%54s\n\n",
           "Response", "Frequency", "Histogram",
           "1 1 2 2", "5 0 5 0 5");

    unsigned int largest = 0;
    unsigned int modeValue = 0;
    for (int k = 0; k <= 9; k++)
    {
        printf("%8u%11u         ", k, freq[k]);
        if (freq[k] > largest)
        {
            largest = freq[k];
            modeValue = k;
        }
        for (unsigned int h = 1; h <= freq[k]; ++h)
        {
            printf("%s", "*");
        }
        puts("");
    }

    printf("\nThe mode is the most frequent value.\n"
           "For this run the mode is %u which occurred"
           " %u times.\n",
           modeValue, largest);
}

void bubbleSort(unsigned int a[])
{
    for (unsigned int pass = 0; pass < SIZE; pass++)
    {
        for (size_t p = 0; p < SIZE - 1; p++)
        {
            if (a[p] > a[p + 1])
            {
                unsigned int hold = a[p];
                a[p] = a[p + 1];
                a[p + 1] = hold;
            }
        }
    }
}

void printArray(const unsigned int a[])
{
    for (size_t j = 0; j < SIZE; j++)
    {
        if (j % 20 == 0)
        {
            puts("");
        }
        printf("%2u", a[j]);
    }
}
