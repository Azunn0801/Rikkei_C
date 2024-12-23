#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5] = {5, 46, 2, 17, 20};
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5 - i - 1; j++){
            int temp;
            if(arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("\nMang sau khi duoc sap xep:\n");
    for(int i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
