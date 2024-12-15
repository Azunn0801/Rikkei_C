#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, tmp;
    printf("Nhap canh a: ");
    scanf("%d", &a);
    printf("\nNhap canh b: ");
    scanf("%d", &b);
    printf("\nNhap canh c: ");
    scanf("%d", &c);
    if(a <= 0 || b <= 0 || c <= 0)  tmp = 0;
    else if(a > b && a > c)
    {
        if(b + c > a)   tmp = 1;
        else    tmp = 2;
    }
    else if(b > c && b > a)
    {
        if(a + c > b)   tmp = 1;
        else    tmp = 2;
    }
    else if(c > b &&  c > a)
    {
        if(a + b > a)   tmp = 1;
        else    tmp = 2;
    }
    else    tmp = 2;
    switch (tmp)
    {
    case 1:
        printf("3 canh tao thanh 1 tam giac");
        break;
    case 2:
        printf("3 canh khong the tao thanh 1 tam giac");
        break;
    default:
        printf("Nhap so khong hop le, vui long nhap lai lan luot 3 canh a, b, c");
        scanf("%d %d %d", &a, &b, &c);
    }
    return 0;
}
