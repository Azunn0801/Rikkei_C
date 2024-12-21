#include <stdio.h>
#include <stdlib.h>
#define N 1000000
long long F[N + 2], res;
unsigned long long n;

void backtrack(int n)
{
    int tmp[n];
    memset(tmp, 0, sizeof(tmp));
    F[0] = 0;
    F[1] = 1;
    for(int i = 2; i <= n; ++i)
    {
        //if(tmp[i] == 0)
        //{
            F[i] = F[i - 1] + F[i - 2];
            //tmp[i] = 1;
        //}
    }
}

int main()
{
    printf("Nhap so nguyen bat ki: ");
    scanf("%d", &n);
    backtrack(n);
    printf("Ket qua la: %d", F[n]);
    return 0;
}
