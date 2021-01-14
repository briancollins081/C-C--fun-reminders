/**
 * Printing a string one character at a time using a non-constant pointer to constant data.
 */
#include <stdio.h>

void printCharacters(const char *sPtr);

int main(void)
{
    char string[] = "printed characters of a string";

    puts("The string is:");
    printCharacters(string);
    puts("");
}

void printCharacters(const char *sPtr)
{
    for (; *sPtr != 0; ++sPtr)
    {
        printf("%c", *sPtr);
    }
}
