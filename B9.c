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
    printf("\nMa tran bien da nhap co dang:\n");
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            if(i == 0 || i == row - 1 || j == 0 || j == col - 1)
            {
                printf("%d   ", arr[i][j]);
            }
            else    printf("    ");
        }
        printf("\n");
    }
    return 0;
}
