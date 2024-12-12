#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int n;
    printf("Vui long nhap so bat ki");
    scanf("%d", &n);
    if(n > 0)   printf("So vua nhap la so duong");
    else if(n < 0)  printf("So vua nhap la so am");
    else    printf("La so khong duong khong am");
    return 0;
}
