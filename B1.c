#include <stdio.h>
#include <stdlib.h>

int main()
{   int a[4], sum;
    printf("Nhap lan luot 5 so nguyen: ");
    scanf("%d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4]);
    for(int i = 0; i <= 4; ++i)
        if(a[i] % 2 != 0)   sum += a[i];
    printf("Ket qua la: %d", sum);
    return 0;
}
