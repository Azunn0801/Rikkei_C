#include <stdio.h>
#include <stdlib.h>
int time, salary, sum, bonus = 0;
int lcb;
const float extra = 0.1;
int main()
{
    printf("Nhap so gio lam viec: ");
    scanf("%d", &time);
    printf("\nNhap luong theo gio: ");
    scanf("%d", &salary);
    lcb = salary * time;
    if(time > 160)
    {
        bonus = lcb * extra;
        sum = lcb + bonus;
        printf("Tong tien luong cua ban la: %d\n", sum);
        printf("Luong co ban cua ban: %d\n", lcb);
        printf("Tien tro cap: %d", bonus);
    }
    else    printf("Luong thang nay cua ban la: %d", lcb);

    return 0;
}
