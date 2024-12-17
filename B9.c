#include <stdio.h>
#include <stdlib.h>

int n, sum;

int main()
{
    printf("Moi nhap so co 3 chu so");
    scanf("%d", &n);
    while(n > 999 || n < 100)
    {
        printf("Khong hop le, vui long nhap lai");
        scanf("%d", &n);
    }
    int tmp1 = n, tmp2;
    while(tmp1 > 0)
    {
        tmp2 = (tmp1 % 10) * (tmp1 % 10)* (tmp1 % 10);
        sum += tmp2;
        tmp1 /= 10;
    }
    sum += tmp1 * tmp1 * tmp1;
    if(sum == n)    printf("Day la so Armstrong");
    else    printf("Day khong la so Armstrong");
    return 0;
}
