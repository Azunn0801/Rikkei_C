#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void input(int arr[][200], int m, int n)
{
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("\nNhap arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

void printmatrix(int arr[][200], int m, int n)
{
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void corner_index(int arr[][200], int m, int n)
{
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if((i == 0 && (j == 0 || j == n - 1)) || (i == m - 1 && (j == 0 || j == n - 1))){
                printf("%d ",arr[i][j]);
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
}

void border_index(int arr[][200], int m, int n)
{
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(i == 0 || j == 0 || i == m - 1 || j == n - 1){
                printf("%d ",arr[i][j]);
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
}

void cheo_chinh(int arr[][200], int m, int n)
{
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(i == j){
                printf("%d ",arr[i][j]);
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
}

void cheo_phu(int arr[][200], int m, int n)
{
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(j == n - i - 1){
                printf("%d ",arr[i][j]);
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
}

bool check_prime(int n)
{
    if(n < 2)   return 0;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

void prime_matrix(int arr[][200], int m, int n)
{
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(check_prime(arr[i][j])){
                printf("%d ",arr[i][j]);
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
}

int main()
{
    int choice, row, col;
    int arr[200][200];
    do{
        printf("MENU\n");
        printf("1. Nhap gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. In ra cac phan tu o goc theo ma tran\n");
        printf("4. In ra cac phan tu nam tren duong bien theo ma tran\n");
        printf("5. In ra cac phan tu nam tren duong cheo chinh va cheo phu theo ma tran\n");
        printf("6. In ra cac phan tu la so nguyen to theo ma tran\n");
        printf("7. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("\nMoi nhap so cot: ");
                scanf("%d", &row);
                printf("\nMoi nhap so hang: ");
                scanf("%d", &col);
                input(arr, row, col);
                break;
            case 2:
                printf("\nMa tran co dang:\n");
                printmatrix(arr, row, col);
                break;
            case 3:
                printf("\nCac phan tu nam o goc:\n");
                corner_index(arr, row, col);
                break;
            case 4:
                printf("\nCac phan tu nam o bien:\n");
                border_index(arr, row, col);
                break;
            case 5:
                printf("\nCac phan tu nam o duong cheo chinh va cheo phu:\n");
                cheo_chinh(arr, row, col);
                printf("\n");
                cheo_phu(arr, row, col);
                break;
            case 6:
                printf("\nCac phan tu la so nguyen to:\n");
                border_index(arr, row, col);
                prime_matrix(arr, row, col);
                break;
        }
    }while(choice != 7);
    printf("\nThoat chuong trinh");
    return 0;
}
