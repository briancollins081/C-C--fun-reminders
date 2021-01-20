/**
 * Copying a string using array notation and pointer notation.
 */
#include <stdio.h>
#define SIZE 10

void copy1(char *const s1, const char *const s2);
void copy2(char *s1, const char *s2);

int main(void)
{
    char string1[SIZE];
    char *string2 = "Hello"; //creates a pointer to a string
    copy1(string1, string2);
    printf("string1 = %s\n", string1);

    char string3[SIZE];
    char string4[] = "Say Hello";

    copy2(string3, string4);
    printf("string3 = %s\n", string3);
}
// copy s2 to s1 using array notation
void copy1(char *const s1, const char *const s2)
{
    for (size_t i = 0; (s1[i] = s2[i]) != '\0'; i++)
    {
        ;
    }
}
// copy s2 to s1 using pointer notation
void copy2(char *s1, const char *s2)
{
    for (; (*s1 = *s2) != 0; ++s1,++s2)
    {
        ;
    }
}
