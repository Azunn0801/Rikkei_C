#include <stdio.h>
#include <stdlib.h>

int main()
{
    int col, row;
    printf("Nhap so hang: ");
    scanf("%d", &row);
    printf("Nhap so cot: ");
    scanf("%d", &col);
    int arr[row][col];
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            printf("\nNhap phan tu thu [%d][%d] ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nMa tran da nhap co dang: ");
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
