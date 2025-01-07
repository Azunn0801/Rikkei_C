#include <stdio.h>
#include <stdlib.h>

void swap_variable(int *ptr1, int *ptr2, int x, int y)
{
    *ptr1 = y;
    *ptr2 = x;
}

int main()
{
    int x = 10;
    int *xptr = &x;
    int y = 5;
    int *yptr = &y;
    swap_variable(xptr, yptr, x, y);
    printf("Bien x: %d", *xptr);
    printf("\nBien y: %d", *yptr);
    return 0;
}
