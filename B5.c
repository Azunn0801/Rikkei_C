#include <stdio.h>
#include <stdlib.h>
#define N 9999999

int main()
{
    int arr[5], maxnum = -N, minnum = N;
    printf("Nhap lan luot 5 phan tu trong mang: ");
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
        if(maxnum < arr[i]) maxnum = arr[i];
        if(minnum > arr[i]) minnum = arr[i];
    }
    printf("\nSo lon nhat trong mang la: %d", maxnum);
    printf("\nSo nho nhat trong mang la: %d", minnum);
    return 0;
}
