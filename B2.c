#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, pos, arr[5] = {20, 35, 64, 3653, 65};
    printf("Moi nhap so muon thay vao mang: ");
    scanf("%d", &num);
    printf("\nNhap vao vi tri can thay (0-4)");
    scanf("%d", &pos);
    printf("\nMang moi duoc lam lai la: ");
    for(int i = 0; i < 5; i++){
        if(pos == i){
            arr[i] = num;
        }
        printf("%d ", arr[i]);
    }
    return 0;
}
