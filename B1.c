#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100], size;
    printf("Nhap so phan tu muon co (n <= 100)");
    scanf("%d", &size);
    while(size > 100){
        printf("\nYeu cau nhap lai: ");
        scanf("%d", &size);
    }
    return 0;
}
