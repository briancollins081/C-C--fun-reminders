#include <stdio.h>
int main(void)
{
    unsigned int passes = 0;
    unsigned int failures = 0;
    unsigned int students = 1;
    int result;
    while (students <= 10)
    {
        printf("%s", "Enter result (1=pass and 2=fail):");
        scanf("%d", &result);

        if (result == 1)
        {
            passes += 1;
        }
        else
        {
            failures += 1;
        }
        students += 1;
    }
    printf("Passed %u\n", passes);
    printf("Failed %u\n", failures);
    if (passes > 8)
    {
        puts("Bonus to instructor!");
    }
}