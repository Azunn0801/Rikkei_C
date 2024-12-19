#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5] = {4, 3, 6, 4, 1}, n;
    printf("Moi nhap so de tim kiem");
    scanf("%d", &n);
    int flag = 0;
    for(int i = 0; i < 5; i++)
    {
        if(arr[i] == n)
        {
            printf("\nSo ton tai trong phan tu thu %d cua mang", i);
            flag = 1;
            break;
        }
    }
    if(flag = 0)
    {
        printf("\nSo khong ton tai trong mang");
    }
    return 0;
}
