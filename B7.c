#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int n;
    printf("Moi nhap nam bat ki ");
    scanf("%d", &n);
    if((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)    printf("\nDay la nam nhuan");
    else    printf("Day khong phai nam nhuan");
    return 0;
}
