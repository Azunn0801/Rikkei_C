#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int a = 5, b = 10;
    printf("%d", sum(a, b));
    return 0;
}
