#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Vui long nhap so bat ki");
    scanf("%d", &n);
    if(n % 2 == 0)  printf("Day la so chan");
    else    printf("Day la so le");
    return 0;
}
