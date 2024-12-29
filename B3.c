#include <stdio.h>
#include <stdlib.h>

int giaithua(int n)
{
    int val = 1;
    for(int i = 2; i <= n; i++){
        val *= i;
    }
    return val;
}

int main()
{
    int n;
    printf("Nhap so bat ki: ");
    scanf("%d", &n);
    printf("\nGiai thua cua n la: %d", giaithua(n));
    return 0;
}
