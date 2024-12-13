#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int n;
    printf("Nhap so nguyen duong n bat ki ");
    scanf("%d", &n);
    printf("Cac uoc cua so tren la: ");
    for(int i = 1; i * 2 <= n; i++)
        if(n % i == 0)  printf("%d ", i);
    printf("%d", n);
    return 0;
}
