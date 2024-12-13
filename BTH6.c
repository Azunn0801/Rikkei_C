#include <stdio.h>
#include <math.h>

int main() {
    unsigned int n, count = 0, num = 2;

    printf("Nhap so luong so nguyen to can tim: ");
    scanf("%d", &n);
    while(n < 1)
    {
        printf("Khong hop le, moi nhap lai");
        scanf("%d", &n);
    }
    printf("Cac so nguyen to dau tien la: ");
    while (count < n) {
        int i, Prime = 1;
        for (i = 2; i * i <= num; ++i) {
            if (num % i == 0) {
                Prime = 0;
                break;
            }
        }
        if (Prime) {
            printf("%d ", num);
            count++;
        }
        num++;
    }
    printf("\n");

    return 0;
}
