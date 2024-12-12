#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float curr = 0, amount, convert;
    printf("==============CHUONG TRINH CHUYEN DOI TIEN TE=============");
    printf("1. USD to VND\n");
    printf("2. EUR to VND\n");
    printf("3. GBP to VND\n");
    printf("4. JPY to VND\n");
    printf("5. VND to USD\n");
    printf("6. VND to EUR\n");
    printf("7. VND to GBP\n");
    printf("8. VND to JPY\n");
    printf("Nhap don vi tien te muon chuyen doi (1 - 8): ");
    scanf("%d", &n);
    printf("\nNhap so tien ban muon doi: ");
    scanf("%f", &amount);
    switch (n)
    {
    case 1:
        curr = 23500;
        printf("%.2f USD = %.2f VND", amount, curr * amount);
        break;
    case 2:
        curr = 25000;
        printf("%.2f EUR = %.2f VND", amount, curr * amount);
        break;
    case 3:
        curr = 28000;
        printf("%.2f GBP = %.2f VND", amount, curr * amount);
        break;
    case 4:
        curr = 180;
        printf("%.2f JPY = %.2f VND", amount, curr * amount);
        break;
    case 5:
        curr = 1/23500;
        printf("%.2f VND = %.2f USD", amount, curr * amount);
        break;
    case 6:
        curr = 1/25000;
        printf("%.2f VND = %.2f EUR ", amount, curr * amount);
        break;
    case 7:
        curr = 1/28000;
        printf("%.2f VND = %.2f GBP", amount, curr * amount);
        break;
    case 8:
        curr = 1/180;
        printf("%.2f VND = %.2f JPY", amount, curr * amount);
        break;
    default:
        printf("\nKhong hop le, vui long nhap lai \n");
        scanf("%d", &n);
    }
    //convert = curr * amount;
    return 0;
}
