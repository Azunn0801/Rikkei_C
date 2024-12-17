#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, sum;
    printf("Nhap so nguyen duong bat ki: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) sum += i;
    printf("Tong cac so tu 1 den n la: &d", sum);
    return 0;
}
