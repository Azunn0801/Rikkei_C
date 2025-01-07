#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 10;
    int *ptr = &x;
    printf("Gia tri bien x: %d", x);
    printf("\nDia chi bien x: %p", &x);
    printf("\nGia tri con tro cua x: %d", *ptr);
    printf("\nDia chi con tro den bien x: %p", ptr);
    return 0;
}
