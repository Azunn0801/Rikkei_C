#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool perf_num(int n)
{
    int sum = 0;
    for(int i = 1; i * 2 <= n; i++){
        if(n % i == 0){
            sum += i;
        }
    }
    if(sum == n){
        return 1;
    }
    else{
        return 0;
    }
}

void print(bool n)
{
    if(!n){
        printf("\nKhong phai so hoan hao");
    }
    else{
        printf("\nLa so hoan hao");
    }
}

int main()
{
    int a, b;
    printf("Nhap so thu 1: ");
    scanf("%d", &a);
    print(perf_num(a));
    printf("\nNhap so thu 2: ");
    scanf("%d", &b);
    print(perf_num(b));
    return 0;
}
