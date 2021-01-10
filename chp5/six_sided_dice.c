/**
 *  Rolling a six-sided die 60,000,000 times.
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    unsigned int frequency1 = 0; //rolled 1 counter
    unsigned int frequency2 = 0; //rolled 2 counter
    unsigned int frequency3 = 0; //rolled 3 counter
    unsigned int frequency4 = 0; //rolled 4 counter
    unsigned int frequency5 = 0; //rolled 5 counter
    unsigned int frequency6 = 0; //rolled 6 counter

    // loop 60 000 000 times
    for (unsigned int i = 1; i < 60000000; ++i)
    {
        int face = 1 + rand() % 6;
        switch (face)
        {
        case 1:
            ++frequency1;
            break;
        case 2:
            ++frequency2;
            break;
        case 3:
            ++frequency3;
            break;
        case 4:
            ++frequency4;
            break;
        case 5:
            ++frequency5;
            break;
        case 6:
            ++frequency6;
            break;
        }
    }

    printf("%s%13s\n","Face", "Frequency");
    printf("    1%13u\n", frequency1);
    printf("    2%13u\n", frequency2);
    printf("    3%13u\n", frequency3);
    printf("    4%13u\n", frequency4);
    printf("    5%13u\n", frequency5);
    printf("    6%13u\n", frequency6);
}