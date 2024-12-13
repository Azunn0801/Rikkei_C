#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tmp = 1;
    unsigned int n;
    printf("Nhap so nguyen duong bat ki: ");
    scanf("%d", &n);
    for(int i = 2; i * i <= n; ++i)
        if(n % i == 0)
        {
            tmp = 0;
            printf("Day khong phai so nguyen to");
            break;
        }
    if(tmp == 1) printf("Day la so nguyen to");
    return 0;
}
