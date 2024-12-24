#include <stdio.h>
#include <stdlib.h>

void selection_sort(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++){
        int max_idx = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] > arr[max_idx]){
                max_idx = j;
            }
        }
        int tmp = arr[max_idx];
        arr[max_idx] = arr[i];
        arr[i] = tmp;
    }
}

int main()
{
    int n;
    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0 ; i < n; i++){
        printf("\nNhap phan tu thu %d: ", i);
        scanf("%d", arr + i);
    }
    selection_sort(arr, n);
    printf("\nMang sau khi duoc sap xep: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
