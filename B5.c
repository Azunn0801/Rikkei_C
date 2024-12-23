#include <stdio.h>
#include <stdlib.h>

int pos, arr[] = {5, 46, 2, 17, 20}, n = 5;

int binary_search(int x)
{
    int l = 0, r = n - 1, m;
    while(l <= r){
        m = (l + r)/2;
        if(arr[m] == x){
            return 1;
        }
        if(arr[m] < x){
            l = m + 1;
        }
        if(arr[m] > x){
            r = m - 1;
        }
    }
    return 0;
}

int main()
{
    for(int i = 1; i < n; i++){
        int j = i - 1;
        int key = arr[i];
        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    printf("Mang sau khi duoc sap xep:\n");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    int x;
    printf("\nNhap so can tim: ");
    scanf("%d", &x);
    if(binary_search(x)){
        printf("\nSo can tim o vi tri thu: %d", pos);
    }
    else{
        printf("\nSo can tim khong ton tai trong mang");
    }
    return 0;
}
