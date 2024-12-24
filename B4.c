#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, flag  = 0;
    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0 ; i < n; i++){
        printf("\nNhap phan tu thu %d: ", i);
        scanf("%d", arr + i);
    }
    int search_val;
    printf("\nNhap gia tri can tim kiem: ");
    scanf("%d", &search_val);
    for(int i = 0; i < n; i++){
        if(arr[i] == search_val){
            printf("\nVi tri dau tien so %d xuat hien la: %d", search_val, i);
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        printf("\nKhong tim thay vi tri cua so %d", search_val);
    }
    return 0;
}
