#include <stdio.h>
#include <stdlib.h>

int main()
{   int a[4], sum, chan = 0, le = 0;
    printf("Nhap lan luot 5 so nguyen: ");
    scanf("%d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4]);
    for(int i = 0; i <= 4; ++i)
        {
            if(a[i] % 2 == 0)   chan++;
            else    le++;
        }
    printf("Co: %d so le va %d so chan", le, chan);
    return 0;
}
