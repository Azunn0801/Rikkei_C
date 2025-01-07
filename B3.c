#include <stdio.h>
#include <stdlib.h>

int sum(int x, int y, int ans)
{
    int *ptr = &ans;
    ans = x + y;
    return *ptr;
}

int main()
{
    int x = 10;
    int y = 5;
    int ans;
    printf("Ket qua cua phep tinh x + y: %d", sum(x, y, ans));
    return 0;
}
