#include <stdio.h>
#include <stdlib.h>

void replace_arr(int *arr, int new_idx, int pos)
{
    *(arr + pos) = new_idx;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int new_idx = 6, pos = 2;
    replace_arr(arr, new_idx, pos);
    for(int i = 0; i < size; i++){
        printf("%d\t", *(arr + i));
    }
    return 0;
}
