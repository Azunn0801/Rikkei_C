#include <stdio.h>
#include <stdlib.h>

int main()
{
    int border = 0, cheo_chinh = 0, n, downhalf = 0;
    printf("Moi nhap so n (n > 2)");
    scanf("%d", &n);
    int arr[n][n];
    if(n < 2)   return 1;
    else
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                printf("\nNhap phan tu [%d][%d]: ", i, j);
                scanf("%d", &arr[i][j]);
            }
        }
    for(int i = 0; i < n; i++)
    {
        cheo_chinh += arr[i][i];
        for(int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
            if(i == 0 || i == n - 1 || j == 0 || j == n - 1)    border += arr[i][j];
            if(j <= i)   downhalf += arr[i][j];
        }
        printf("\n");
    }
    printf("\nTong gia tri duong bien la: %d", border);
    printf("\nTong gia tri duong cheo chinh la: %d", cheo_chinh);
    printf("\nTong gia tri duoi duong cheo chinh la: %d", downhalf);
    return 0;
}
