#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int n, tmp = 0;
    printf("Nhap thang tu 1 - 12: ");
    scanf("%d", &n);
    if(n == 2)  tmp = 3;
    else if((n % 2 ==  1 && n <= 7 && n >= 1) || (n % 2 == 0 && n >= 8))    tmp = 2;
    else if(n >= 1 && n <= 12)  tmp = 1;
    else    tmp = 0;
    switch (tmp)
    {
    case 1:
        printf("Thang nay co 30 ngay");
        break;
    case 2:
        printf("Thang nay co 31 ngay");
        break;
    case 3:
        printf("Thang nay co 28 hoac 29 ngay");
        break;
    default:
        printf("Khong hop le, vui long nhap lai");
        scanf("%d", &n);
    }
    return 0;
}
