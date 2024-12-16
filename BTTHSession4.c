#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Vui long nhap diem so tu 0 den 100: ");
    scanf("%d", &n);
    if(n < 0 || n > 100)    printf("\nSo khong hop le");
    else if(n < 60) printf("\nYeu");
    else if(n < 70) printf("\nTrung binh");
    else if(n < 80) printf("\nKha");
    else if(n < 90) printf("\nGioi");
    else    pritnf("\nXuat sac");
    return 0;
}
