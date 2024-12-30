#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b)
{
    int tmp;
    if(b > a){
        tmp = a;
        b = a;
        a = tmp;
    }
    while(a != b){
        tmp = a - b;
        if(tmp < b){
            a = b;
            b = tmp;
        }
        else{
            a = tmp;
        }
    }
    return a;
}

int main()
{
    int a, b;
    printf("Nhap so a: ");
    scanf("%d", &a);
    printf("Nhap so b: ");
    scanf("%d", &b);
    printf("\nKet qua ucln: %d", gcd(a, b));
    return 0;
}
