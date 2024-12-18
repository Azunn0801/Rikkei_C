#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5];
    printf("Nhap lan luot 5 phan tu trong mang");
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0) arr[i] += 3;
        else    arr[i] += 2;
    }
    printf("\nMang moi la: ");
    for(int i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    return 0;
}
