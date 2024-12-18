#include <stdio.h>
#include <stdlib.h>

int arr[5];

int main()
{
    int chan = 0;
    printf("Moi nhap 5 phan tu trong 1 mang: ");
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < 5; i++)
    {
        if(arr[i] % 2 == 0)
        {
            printf("%d ", arr[i]);
            chan = 1;
        }
    }
    if(chan == 0)   printf("%d", 0);
    return 0;
}
