#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100], curr_length;
    printf("Nhap do dai mang: ");
    scanf("%d", &curr_length);
    for(int i = 0; i < curr_length; i++){
        printf("\nNhap phan tu [%d]: ", arr + i);
    }
    printf("\nChon vi tri muon xoa: ");
    scanf("%d", &pos);
    while(pos < 0 || pos > curr_length){
        printf("\nKhong hop le, nhap lai ");
        scanf("%d", &pos);
    }
    printf("\nMang moi co dang: ");
    for(int i = 0; i < pos; i++){
        printf("%d ", arr[i]);
    }
    for(int i = pos; i < curr_length - 1; i++){
        arr[i] = arr[i + 1];
        printf("%d ", arr[i]);
    }

    return 0;
}
