#include <stdio.h>
#include <stdlib.h>

int max_arr(int arr[], int n)
{
    int max_num = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i] > max_num){
            max_num = arr[i];
        }
    }
    return max_num;
}

int main()
{
    int arr[] = {4, 2, 6, 7, 3};
    int size = sizeof(arr) / sizeof(arr[0]), n;
    printf("%d", max_arr(arr, size));
    return 0;
}
