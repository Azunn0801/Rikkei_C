#include <stdio.h>
#include <stdlib.h>

int main()
{
    float tien_lai = 1, lai_suat, ban_dau, sum;
    int month;
    printf("Nhap so tien gui ban dau: ");
    scanf("%f", &ban_dau);
    printf("\nNhap lai suat: ");
    scanf("%f", &lai_suat);
    printf("\nNhap so thang gui: ");
    scanf("%d", &month);
    for(int i = 1; i <= month; ++i){
        tien_lai *= (1 + 0.01 * lai_suat);
    }
    sum = tien_lai * ban_dau;
    float tong_lai = sum - ban_dau;
    printf("\nTien lai: %.3f", tong_lai);
    printf("Tien nhan duoc: %.3f", sum);
    return 0;
}
