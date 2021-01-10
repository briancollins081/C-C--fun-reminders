/**
 * Scoping
 */
#include <stdio.h>

void useLocal(void);
void useStaticLocal(void);
void useGlobal(void);

int x = 1; //global

int main(void)
{
    int x = 5; //local
    printf("Local x in outer scope of main is: %d\n", x);
    {
        int x = 7; //local
        printf("Local x in inner scope of main is: %d\n", x);
    }
    printf("Local x in outer scope of main is: %d\n", x);
    useLocal();
    useStaticLocal();
    useGlobal();
    useLocal();
    useStaticLocal();
    useGlobal();
    printf("\nLocal x in main is %d\n", x);
}

void useLocal(void)
{
    int x = 25; //reintialized each time
    printf("\nlocal x in useLocal is %d after entering useLocal\n", x);
    ++x;
    printf("local x in useLocal is %d before exiting useLocal\n", x);
}

void useStaticLocal(void)
{
    static int x = 50; //intialized once
    printf("\nlocal static x in useStaticLocal is %d after entering useStaticLocal\n", x);
    ++x;
    printf("local x in useStaticLocal is %d before exiting useStaticLocal\n", x);
}

void useGlobal(void)
{
    printf("\nglobal x is %d on entering useGlobal\n", x);
    x *= 10;
}