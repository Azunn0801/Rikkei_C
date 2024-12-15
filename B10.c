#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf("Nhap lan luot 3 so nguyen: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("So sau khi duoc sap xep la: ");
    if(a < b && a < c)
    {
        if(b < c)   printf("%d %d %d", a, b, c);
        else    printf("%d %d %d", a, c, b);
    }
    else if(c < a && c < b)
    {
        if(b < a)   printf("%d %d %d", c, b, a);
        else    printf("%d %d %d", c, a, b);
    }
    else if(b < c && b < a)
    {
        if(c < a)   printf("%d %d %d", b, c, a);
        else    printf("%d %d %d", b, a, c);
    }
    else    printf("\3 so bang nhau");
    return 0;
}
