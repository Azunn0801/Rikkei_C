#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c, f;
    printf("Nhap nhiet do Celsius\n");
    scanf("%f", &c);
    f = c * 1.8 + 32;
    printf("Nhiet do Fahrenheit la: %.2f", f);
    return 0;
}
