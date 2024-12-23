#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5] = {5, 46, 2, 17, 20};
    for(int i = 1; i < 5; i++){
        int j = i - 1;
        int key = arr[i];
        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1]  = key;
    }
    printf("Mang sau khi duoc sap xep:\n");
    for(int i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
