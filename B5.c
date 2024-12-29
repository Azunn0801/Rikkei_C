#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool check_prime(int n)
{
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

void print(bool n)
{
    if(!n){
        printf("\nKhong phai so nguyen to");
    }
    else{
        printf("\nLa so nguyen to");
    }
}

int main()
{
    int a, b;
    printf("Nhap so thu 1: ");
    scanf("%d", &a);
    print(check_prime(a));
    printf("\nNhap so thu 2: ");
    scanf("%d", &b);
    print(check_prime(b));
    return 0;
}
