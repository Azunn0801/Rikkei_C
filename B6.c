#include <stdio.h>
#include <stdlib.h>

int main()
{
    float l, h, s;
    printf("Nhap chieu cao tam giac: \n");
    scanf("%f\n", &h);
    printf("Nhap canh day tam giac: \n");
    scanf("%f\n", &l);
    s = 0.5 * l * h;
    printf("Dien tich tam giac la: %.2f\n", s);
    return 0;
}
