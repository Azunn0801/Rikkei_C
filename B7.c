#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tmp = 0, n;
    printf("Moi nhap so co 4 chu so\n");
    scanf("%d", &n);
    switch (1)
    {
        case 1:
            tmp += (n % 10);
            n /= 10;
        case 2:
            tmp += (n % 10);
            n /= 10;
        case 3:
            tmp += (n % 10);
            n /= 10;
        case 4:
            tmp += (n % 10);
            n /= 10;
        default:
            printf("Tong cac chu so tren la %d\n", n + tmp);

    }
    return 0;
}
