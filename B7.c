#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Moi nhap so nguyen bat ki: ");
    scanf("%d", &n);
    printf("\nTat ca cac uoc cua so nguyen vua nhap la: ");
    for(int i = 1; i <= n / 2; i++)
    {
        if(n % i == 0){
            printf("%d ", i);
        }
    }
    printf("%d", n);
    return 0;
}
