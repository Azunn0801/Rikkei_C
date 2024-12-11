#include <stdio.h>
#include <stdlib.h>

int main()
{
    float t, v, a, sum, avg;
    printf("Moi nhap diem Toan, Van, Anh\n");
    scanf("%f %f %f", &t, &v, &a);
    sum = t + v + a;
    avg = sum / 3;
    printf("Tong diem 3 mon la: %.2f\n", sum);
    printf("Trung binh cong 3 mon la: %.2f\n", avg);
    return 0;
}
