#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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
    printf("Ket qua dao nguoc so la ");
    while(n > 10)
    {
        tmp = n % 10;
        n /= 10;
        printf("%d", tmp);
    }
    printf("%d", n);
    return 0;
}
