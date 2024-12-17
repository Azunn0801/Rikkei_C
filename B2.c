#include <stdio.h>
#include <stdlib.h>

int ans = 450, n;

int main()
{
    printf("Moi doan so co 3 chu so: ");
    scanf("%d", &n);
    while(n != ans)
    {
        printf("\So khong chinh xac, vui long nhap lai: ");
        scanf("%d", &n);
    }
    printf("\nBan da doan chinh xac!");
    return 0;
}
