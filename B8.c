#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int tmp, n;
    printf("Moi nhap so co 4 chu so\n");
    scanf("%d", &n);
    switch (1)
    {
        case 1:
            printf("Ket qua dao nguoc so la ");
        case 2:
            tmp = n % 10;
            n /= 10;
            printf("%d", tmp);
        case 3:
            tmp = n % 10;
            n /= 10;
            printf("%d", tmp);
        case 4:
            tmp = n % 10;
            n /= 10;
            printf("%d", tmp);
        default:
            tmp = n % 10;
            n /= 10;
            printf("%d", tmp);
    }
    return 0;
}
