#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float a, b, c, x1, x2;

int main()
{
    printf("Lan luot nhap a, b, c");
    scanf("%f %f %f", &a, &b, &c);
    float delta = b * b - 4 * a * c;
    if(delta < 0)   printf("\nPhuong trinh vo ngiem");
    else if(delta == 0)  printf("\nPhuong trnh co nghiem kep = %.2f", -b / (2 * a));
    else
    {
        x1 = (-b - sqrt(delta)) / (2 * a);
        x2 = (-b + sqrt(delta)) / (2 * a);
        printf("\nCo 2 nghiem phan biet la %.2f va %.2f", x1, x2);
    }
    return 0;
}
