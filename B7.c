#include <stdio.h>
#include <stdlib.h>

int init_matrix(int m, int n)
{
    int matrix[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("\nNhap matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    return matrix;
}

int main()
{
    int row, col;
    printf("Nhap so hang: ");
    scanf("%d", &row);
    printf("\nNhap so hang: ");
    scanf("%d", &col);
    init_matrix(row, col);
    int matrix[row][col];
    return 0;
}
