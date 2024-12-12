#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Nhap so nguyen bat ki");
    scanf("%d", &n);
    if(n % 3 == 0)
    {
        if(n % 5 == 0)  printf("So vua chia het cho 3 lan 5");
        else    printf("so chia het cho 3");
    }
    else if(n % 5 == 0) print("So chia het cho 5");
    else    printf("So nay khong chia het cho 3 lan 5");
    return 0;
}
