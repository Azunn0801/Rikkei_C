#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Nhap do dai mang: ");
    scanf("%d", &n);
    int arr[n], sum = 0;
    for(int i = 0; i < n; i++)
    {
        printf("\nNhap phan tu tai vi tri %d: ", i);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("\nTong cac phan tu da nhap: %d", sum);
    printf("\nTrung binh cac phan tu da nhap: %d", sum/n);

    return 0;
}
