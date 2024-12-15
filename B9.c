#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d , m, y, tmp1, tmp2;
    printf("Nhap ngay: ");
    scanf("%d", &d);
    printf("\nNhap thang: ");
    scanf("%d", &m);
    printf("\nNhap nam: ");
    scanf("%d", &y);
    if(d <= 0 || m <= 0 || y <= 0)  tmp1 = 0;
    else if(m == 2)  tmp1 = 3;
    else if((m % 2 ==  1 && m <= 7 && m >= 1) || (m % 2 == 0 && m >= 8))    tmp1 = 2;
    else if(m >= 1 && m <= 12)  tmp1 = 1;
    else    tmp1 = 0;
    switch (tmp1)
    {
    case 1:
        if(d <= 30) tmp2 = 1;
        else    tmp2 = 0;
        break;
    case 2:
        if(d <= 31) tmp2 = 1;
        else    tmp2 = 0;
        break;
    case 3:
        if((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
        {
            if(d <= 29) tmp2 = 1;
            else    tmp2 = 0;
        }
        else
        {
            if(d <= 28) tmp2 = 1;
            else    tmp2  = 0;
        }
        break;
    default:
        printf("\nKhong hop le, vui long nhap lai lan luot ngay thang nam: ");
        scanf("%d %d %d", &d, &m, &y);
    }
    switch  (tmp2)
    {
    case 1:
        printf("\nNgay thang nam hop le");
        break;
    default:
        printf("\nNgay thang nam khong hop le");
    }
    return 0;
}
