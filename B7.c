#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tmp, n;
    printf("Moi nhap so co 4 chu so\n");
    scanf("%d", &n);
    while(abs(n) < 1000 || abs(n) > 9999)
    {
        printf("So khong hop le, vui long nhap lai\n");
        scanf("%d", &n);
    }
    while(n > 10)
    {
        tmp += (n % 10);
        n /= 10;
    }
    printf("Tong cac chu so tren la %d\n", n + tmp);
    return 0;
}
