#include <stdio.h>
#include <stdlib.h>

int main()
{
    const float PI = 3.14;
    float r, s, p;
    printf("Nhap ban kinh\n");
    scanf("&f", r);
    s = r * r * PI;
    p = r * 2 * PI;
    printf("Chu vi: %.2f", p);
    printf("Dien tich: %.2f", s);
    return 0;
}
