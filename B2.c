#include <stdio.h>
#include <stdlib.h>

int arr[5];

int main()
{
    printf("Moi nhap 5 phan tu trong 1 mang: ");
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    return 0;
}
