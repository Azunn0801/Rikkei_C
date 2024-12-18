#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("nhap so luong mang ");
    scanf("%d", &n);
    printf("\nNhap phan tu la so le trong mang: ");
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        while(arr[i] % 2 == 0)
        {
            printf("\nPhai nhap so le: ");
            scanf("%d", &arr[i]);
        }
    }
    return 0;
}
