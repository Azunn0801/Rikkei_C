#include <stdio.h>
#include <stdlib.h>

int m;

int binary_search(int arr[], int x)
{
    int l = 0, r = 5 - 1;
    while(l <= r){
        m = (r + l)/2;
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
    int numbers[5] = {2,4,6,8,10};
    int flag  = 0, search_val;
    printf("\nNhap gia tri can tim kiem: ");
    scanf("%d", &search_val);
    if(binary_search(numbers, search_val) != 0){
        printf("\nGia tri %d tim duoc o vi tri thu %d", search_val, m);
    }
    else{
        printf("\nKhong tim thay %d trong mang", search_val);
    }
    return 0;
}
