#include <stdio.h>
#include <stdlib.h>

void print(int arr[], int n)
{
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[5] = {1, 2, 5, 3, 6};
    print(arr, 5);
    return 0;
}
