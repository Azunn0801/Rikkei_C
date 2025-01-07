#include <stdio.h>
#include <stdlib.h>

int find_idx(int *arr, int find_num, int size)
{
    for(int i = 0; i < size; i++){
        if(find_num == *(arr + i)){
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 4, 5, 6, 7};
    int size = sizeof(arr)/sizeof(arr[0]);
    int find_num = 7;
    printf("Vi tri cua %d la: %d", find_num, find_idx(arr, find_num));
    return 0;
}
