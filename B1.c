#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, arr[] = {32, 432, 235, 23, 1}, flag = 0;
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Nhap so can tim kiem: ");
    scanf("%d", &num);
    for(int i = 0; i < n; i++){
        if(num == arr[i]){
            flag = 1;
            printf("\nVi tri nam o: %d", i);
            break;
        }
    }
    if(flag == 0){
        printf("\nKhong tim thay phan tu trong mang");
    }
    return 0;
}
