#include <stdio.h>
#include <stdlib.h>
int a, b, c, sum;
float avg;
int main()
{
    printf("Moi nhap a, b, c\n");
    scanf("%d %d %d", &a, &b, &c);
    sum = a + b + c;
    avg = (float)sum / 3;
    printf("Tong %d\n", sum);
    printf("Trung binh cong %.2f", avg);
    return 0;
}
