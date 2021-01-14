/**
 * Attempting to modify a constant pointer to constant data.
 */
#include <stdio.h>

int main(void)
{
    int x = 5;
    int y;

    /**
     * ptr is a constant pointer to a constant integer. ptr always
     * points to the same location; the integer at that location
     * cannot be modified
     */
    const int *const ptr = &x; //const must be initialized during declarations
    printf("%d\n", *ptr);
    *ptr = 7; // error *ptr which is the int value is const and can not assign new value
    ptr = &y;  // error ptr is also a constant pointer and can not take a new address
}