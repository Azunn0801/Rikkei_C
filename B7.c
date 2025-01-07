#include <stdio.h>
#include <stdlib.h>

void arrange_arr(int *arr, int size)
{
    for(int i = 1; i < size; i++){
        int key = *(arr + i);
        int j = i - 1;
        while(j >= 0 && *(arr + j) > key){
            *(arr + j + 1) = *(arr + j);
            j--;
        }
        *(arr + j + 1) = key;
    }
}

int main()
{
    int arr[] = {5, 3, 7, 2, 8, 6, 1};
    int size = sizeof(arr)/sizeof(arr[0]);
    arrange_arr(arr, size);
    printf("Mang sau khi duoc sap xep:\n");
    for(int i = 0; i < size; i++){
        printf("%d\t", *(arr + i));
    }
    return 0;
}
