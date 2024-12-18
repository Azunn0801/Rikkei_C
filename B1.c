#include <stdio.h>
#include <stdlib.h>

int arr[5] = {1, 2, 3, 4, 5};

int main()
{
    for(int i = 0; i < 5; i++)  printf("%d ", arr[i]);
    printf("\n%d", sizeof(arr) / sizeof(arr[0]));
    return 0;
}
