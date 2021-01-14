/**
 * Attempting to modify a constant pointer to non-constant data.
 */
#include <stdio.h>

int main(void)
{
    int x;
    int y;

    int *const ptr = &x;
    /**
     * ptr is a constant pointer to an integer that can be modified
     * through ptr, but ptr always points to the same memory location
     */
    *ptr = 8; //allowed since *ptr is not a constant but rather value of x
    ptr = &y; //not allowed since ptr is a constant
}