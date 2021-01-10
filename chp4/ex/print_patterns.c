/**
 * Prints triangular patterns one bellow each other using iterations
 */
#include <stdio.h>

int main(void)
{
    int max_val = 10;
    printf("%s", "Pattern 1: \n");
    for (int i = 1; i <= max_val; i++)
    {
        int spaces = max_val - i;
        int stars = i;
        for (int z = 1; z <= stars; z++)
        {
            printf("%s", "*");
        }
        for (int y = 1; y <= spaces; y++)
        {
            printf("%s", " ");
        }
        printf("%s", "\n");
    }

    printf("%s", "\n\n\nPattern 2: \n");
    for (int i = 1; i <= max_val; i++)
    {
        int spaces = i;
        int stars = max_val - i;

        for (int z = 1; z <= stars; z++)
        {
            printf("%s", "*");
        }

        for (int y = 1; y <= spaces; y++)
        {
            printf("%s", " ");
        }
        printf("%s", "\n");
    }

    printf("%s", "\n\n\nPattern 3: \n");
    for (int i = max_val; i >= 1; i--)
    {
        int spaces = max_val - i;
        int stars = i;

        for (int y = 1; y <= spaces; y++)
        {
            printf("%s", " ");
        }

        for (int z = 1; z <= stars; z++)
        {
            printf("%s", "*");
        }
        printf("%s", "\n");
    }

    printf("%s", "\n\n\nPattern 3: \n");
    for (int i = max_val; i >= 1; i--)
    {
        int spaces = i;
        int stars = max_val - i;

        for (int y = 1; y <= spaces; y++)
        {
            printf("%s", " ");
        }

        for (int z = 1; z <= stars; z++)
        {
            printf("%s", "*");
        }

        printf("%s", "\n");
    }
}