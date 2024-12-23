#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5] = {5, 17, 2, 17, 20}, b[5] = {0, 0, 0, 0, 0}, n, flag = 0;
    printf("Nhap so can tim: ");
    scanf("%d", &n);
    for(int i = 0; i < 4; i++){
        if(a[i] == n){
            flag = 1;
            b[i] = 1;
        }
        if(b[i] == 1){
            printf("\nSo can tim nam o vi tri: %d", i);
        }
    }
    if(flag == 0){
        printf("\nSo can tim khong ton tai trong mang");
    }
    return 0;
}
