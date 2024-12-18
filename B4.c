#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Nhap so phan tu trong mang: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        printf("\nNhap phan tu thu %d ", i);
        scanf("%d", &arr[i]);
    }
    return 0;
}
