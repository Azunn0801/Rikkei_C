#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Nhap chuoi bat ki:\n");
    gets(str);
    printf("\n%s", str);
    printf("\nDo dai cua chuoi la: %d", strlen(str));
    return 0;
}
