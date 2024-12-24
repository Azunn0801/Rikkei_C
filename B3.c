#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
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
    bubble_sort(arr, n);
    printf("\nMang sau khi duoc sap xep: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
