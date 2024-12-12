#include <stdio.h>
#include <stdlib.h>

int main()
{
    int _old, _new;
    int total = 0;
    printf("Nhap chi so cu ");
    scanf("%d", &_old);
    printf("\nNhap chi so moi ");
    scanf("%d", &_new);
    int sodien =_new - _old;
    if(sodien < 50)  total = 10000 * sodien;
    else if(sodien < 100)   total = 10000 * 50 + 15000 * (sodien - 50);
    else if(sodien < 150)   total = 10000 * 50 + 15000 *50 + 20000 * (sodien - 100);
    else if(sodien < 200)   total = 10000 * 50 + 15000 *50 + 20000 * 50 + 25000 * (sodien - 150);
    else    total = 10000 * 50 + 15000 *50 + 20000 * 50 + 25000 * (sodien - 200);
    printf("Tong tien dien la: %d", total);
    return 0;
}
