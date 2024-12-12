#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf("Moi nhap lan luot 3 so nguyen bat ki a, b, c\n");
    scanf("%d %d %d", &a, &b, &c);
    if((c >= a && c <= b) || (c <= a && c >= b))    printf("So c nam trong khoang tu a toi b");
    else    printf("So c khong nam trong khoang tu a toi b");
    return 0;
}
