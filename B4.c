#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Nhap so (1 - 10) de xac dinh bang cuu chuong: ");
    scanf("%d", &n);
    for(int i = 1; i <= 10; i++)
        printf("\n %d x %d = %d", i, n, i * n);
    return 0;
}
