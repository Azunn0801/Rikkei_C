#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5] = {5, 46, 2, 17, 20};
    for(int i = 0; i < 5 - 1; i++){
        int min_idx = i;
        for(int j = i + 1; j < 5; j++){
            if(arr[min_idx] > arr[j]){
                min_idx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
    printf("Mang duoc tao moi la: \n");
    for(int i= 0; i < 5; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
